/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C00675E0
 * Callers:
 *     ndisNsiSetAllSessionInformation @ 0x1C00E48E0 (ndisNsiSetAllSessionInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C000CE40 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C000CF38 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0044DE4 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C0067364 (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00673B0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  unsigned int *v2; // r14
  unsigned int ThreadSessionId; // ebp
  unsigned int *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r15
  KIRQL v8; // r13
  char *PoolWithTag; // rbx
  unsigned int SessionCompartmentId; // eax
  PVOID v12; // r15

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
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    PoolWithTag = (char *)ndisCmSession;
  }
  else
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
  if ( !*(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] )
  {
    if ( !a2 )
      goto LABEL_22;
    *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] = v7;
LABEL_21:
    *(_DWORD *)&PoolWithTag[24 * ThreadSessionId] = a2;
    *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 16] = v5;
    goto LABEL_22;
  }
  v2 = *(unsigned int **)&PoolWithTag[24 * ThreadSessionId + 16];
  if ( a2 )
    goto LABEL_21;
  *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] = 0LL;
  *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 16] = 0LL;
  *(_DWORD *)&PoolWithTag[24 * ThreadSessionId] = 1;
LABEL_22:
  KeReleaseSpinLock(&ndisCmSessionLock, v8);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedExchangeAdd((volatile signed __int32 *)&NdisSessionToCompartmentMappingEpochAndZero, 2u);
  return 0LL;
}
