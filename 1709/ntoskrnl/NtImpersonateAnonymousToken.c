/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140512CF4
 * Callers:
 *     <none>
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     SeTokenIsRestricted @ 0x1400D5140 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1400D5160 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x140101C60 (SepGetAnonymousToken.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 *     SepRegQueryDwordValue @ 0x1405136D4 (SepRegQueryDwordValue.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140728644 (SepCopyClientTokenAndSetSilo.c)
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
      AnonymousToken = SepDuplicateToken((__int64)v5, (__int64)&v15, 1, 2, 2u, 0, 1, &v13);
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
