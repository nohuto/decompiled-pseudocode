/*
 * XREFs of SepCreateClientSecurityEx @ 0x14050AF80
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140247850 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140459410 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 * Callees:
 *     SepGetAnonymousToken @ 0x14003D7D8 (SepGetAnonymousToken.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     SeCopyClientToken @ 0x14043D254 (SeCopyClientToken.c)
 *     SeQueryServerSiloToken @ 0x140452530 (SeQueryServerSiloToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406F0C24 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1406F69EC (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // cl
  unsigned int v15; // eax
  __int64 v16; // rdi
  char v17; // al
  __int64 result; // rax
  bool v19; // al
  __int64 v20; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v23; // rax
  void *v24; // r14
  __int64 v25; // rcx
  int AnonymousToken; // ebx
  PVOID v27; // rbx
  __int64 v28; // rcx
  void *v29; // rbx
  __int64 v30; // r8
  __int64 CurrentServerSilo; // rax
  __int64 v32; // [rsp+40h] [rbp-28h] BYREF
  __int64 v33[4]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return 3221225637LL;
  if ( a4 == 2 )
  {
    if ( (int)v15 > (int)a6 )
    {
      if ( !a7 )
        return 3221225637LL;
      v12 = 1;
    }
    if ( a6 > 1 && (!a3 || a6 == 3) )
    {
      v19 = a5 || *(_BYTE *)(a2 + 9);
      v16 = a11;
      *(_BYTE *)(a11 + 25) = v19;
      if ( !v12 )
        goto LABEL_5;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
      {
        v28 = a1;
      }
      else
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a8 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = a8->Process;
          v23 = PsReferencePrimaryToken(Process);
          v24 = v23;
          if ( (*((_DWORD *)v23 + 50) & 0x4000) != 0 )
            v25 = (__int64)v23;
          else
            v25 = 0LL;
          AnonymousToken = SepGetAnonymousToken(v25, &Object);
          ObfDereferenceObject(v24);
LABEL_35:
          if ( AnonymousToken < 0 )
            return (unsigned int)AnonymousToken;
          v27 = Object;
          result = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)v16 = 12LL;
            *(_BYTE *)(v16 + 8) = 0;
            v17 = *(_BYTE *)(a2 + 9);
            *(_BYTE *)(v16 + 24) = 0;
            *(_QWORD *)(v16 + 16) = v27;
            goto LABEL_9;
          }
          return result;
        }
        v28 = 0LL;
      }
      AnonymousToken = SepGetAnonymousToken(v28, &Object);
      goto LABEL_35;
    }
    if ( a7 )
    {
      v16 = a11;
      goto LABEL_28;
    }
    return 3221225637LL;
  }
  v16 = a11;
  *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
  if ( *(_BYTE *)(a2 + 8) )
  {
    *(_BYTE *)(v16 + 24) = 1;
    if ( a3 )
      SeGetTokenControlInformation(a1, v16 + 28);
LABEL_8:
    *(_DWORD *)v16 = 12;
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 8);
    v17 = *(_BYTE *)(a2 + 9);
    *(_QWORD *)(v16 + 16) = a1;
LABEL_9:
    *(_BYTE *)(v16 + 9) = v17;
    result = 0LL;
    *(_BYTE *)(v16 + 26) = a3;
    return result;
  }
  *(_BYTE *)(v16 + 24) = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    v29 = *(void **)(a1 + 24);
    Object = v29;
    if ( (int)SeQueryServerSiloToken(a1, v33) >= 0 && PsIsHostSilo(v33[0]) && (_DWORD)v29 == 999 && !HIDWORD(Object) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, &v32);
    }
    else
    {
      result = SeCopyClientToken(a1, *(_DWORD *)(a2 + 4), v30, 0, 0LL, &v32);
    }
  }
  else
  {
    result = SeCopyClientToken(a1, *(_DWORD *)(a2 + 4), v20, a9, a10, &v32);
  }
  a1 = v32;
  if ( (int)result >= 0 )
    goto LABEL_8;
  return result;
}
