/*
 * XREFs of NtImpersonateAnonymousToken @ 0x14051C480
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x140063230 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140063250 (SeTokenIsWriteRestricted.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x14009F040 (SepGetAnonymousToken.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SepRegQueryDwordValue @ 0x14051C738 (SepRegQueryDwordValue.c)
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14078C9C0 (SepCopyClientTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  _DWORD *ClientToken; // rsi
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 CurrentServerSilo; // rax
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v10; // rax
  void *v11; // rbx
  PVOID Object; // [rsp+40h] [rbp-19h] BYREF
  PVOID v13; // [rsp+48h] [rbp-11h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-9h] BYREF
  int v15; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  __int128 v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Token; // [rsp+D0h] [rbp+77h] BYREF
  PACCESS_TOKEN v22; // [rsp+D8h] [rbp+7Fh] BYREF

  Token = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v22 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( !SubjectContext.ClientToken
    || (*((_DWORD *)SubjectContext.PrimaryToken + 50) & 0x4000) != 0
    && SubjectContext.ImpersonationLevel < SecurityImpersonation )
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  if ( (ClientToken[50] & 0x4000) != 0 )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &v22);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, v22, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(v22);
    }
    goto LABEL_25;
  }
  if ( (int)SepRegQueryDwordValue(SubjectContext.PrimaryToken, 0x4000LL, &v20) < 0
    || (v5 = (_DWORD *)SeAnonymousLogonToken, v20 != 1) )
  {
    v5 = (_DWORD *)SeAnonymousLogonTokenNoEveryone;
  }
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( (ClientToken[50] & 0x380000) != 0 )
    {
      v16 = 0LL;
      v18 = 0;
      v17 = 0LL;
      v15 = 48;
      v19 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v5, (int)&v15, 1, 2, 2u, 0, 1, (char **)&v13);
      if ( AnonymousToken < 0 )
        goto LABEL_25;
      v5 = v13;
      *((_DWORD *)v13 + 50) |= ClientToken[50] & 0x380000;
    }
LABEL_16:
    AnonymousToken = ObReferenceObjectByPointer(
                       v5,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v5);
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = PsReferencePrimaryToken(Process);
      v11 = v10;
      if ( v10 )
      {
        if ( !SeTokenIsRestricted(v10) || SeTokenIsWriteRestricted(v11) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v11);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v5, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v11);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_25;
  }
  v6 = v5[49];
  CurrentServerSilo = PsGetCurrentServerSilo();
  AnonymousToken = SepCopyClientTokenAndSetSilo(v5, v6, CurrentServerSilo, &Token);
  if ( AnonymousToken >= 0 )
  {
    v5 = Token;
    goto LABEL_16;
  }
LABEL_25:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( v13 )
    ObfDereferenceObject(v13);
  return AnonymousToken;
}
