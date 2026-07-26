/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C0067DD0
 * Callers:
 *     ndisNsiSetAllSessionInformation @ 0x1C00EE910 (ndisNsiSetAllSessionInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C001B2B0 (NdisGetSessionCompartmentId.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00418D4 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0067B44 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C0067BBC (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0067C08 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  unsigned int *v2; // rbp
  unsigned int ThreadSessionId; // esi
  unsigned int *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  KIRQL v8; // r12
  char *PoolWithTag; // r13
  unsigned int SessionCompartmentId; // eax
  PVOID v12; // r15
  _DWORD *v13; // rax

  v2 = 0LL;
  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( a2 )
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(ThreadSessionId);
    v5 = ndisCmValidateCompartmentChange(SessionCompartmentId, a2);
    if ( !v5 )
      return 3221225485LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = ThreadSessionId + 1;
  v7 = v6;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId >= ndisCmSessionCount )
  {
    ndisCmLazyInitializeCleanup();
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v6, 0x6D63444Eu);
    if ( !PoolWithTag )
    {
      KeReleaseSpinLock(&ndisCmSessionLock, v8);
      if ( v5 )
        ndisIfDereferenceCompartmentForUser(v5);
      return 3221225626LL;
    }
    v12 = ndisCmSession;
    if ( ndisCmSession )
    {
      memmove(PoolWithTag, ndisCmSession, 24LL * ndisCmSessionCount);
      ExFreePoolWithTag(v12, 0);
    }
    memset(&PoolWithTag[24 * ndisCmSessionCount], 0, 24LL * ((unsigned int)v6 - ndisCmSessionCount));
    v7 = ThreadSessionId + 1;
    ndisCmSession = PoolWithTag;
    ndisCmSessionCount = v6;
  }
  v13 = ndisCmSession;
  if ( !*((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 1) )
  {
    if ( !a2 )
      goto LABEL_21;
    *((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 1) = v7;
LABEL_20:
    v13[6 * ThreadSessionId] = a2;
    *(_QWORD *)&v13[6 * ThreadSessionId + 4] = v5;
    goto LABEL_21;
  }
  v2 = (unsigned int *)*((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 2);
  if ( a2 )
    goto LABEL_20;
  *((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 1) = 0LL;
  *(_QWORD *)&v13[6 * ThreadSessionId + 4] = 0LL;
  v13[6 * ThreadSessionId] = 1;
LABEL_21:
  KeReleaseSpinLock(&ndisCmSessionLock, v8);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedExchangeAdd((volatile signed __int32 *)&NdisSessionToCompartmentMappingEpochAndZero, 2u);
  return 0LL;
}
