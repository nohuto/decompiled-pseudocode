/*
 * XREFs of MmGetSessionObjectById @ 0x140094330
 * Callers:
 *     NtSetInformationObject @ 0x1404276F0 (NtSetInformationObject.c)
 *     SeSetSessionIdToken @ 0x14046E808 (SeSetSessionIdToken.c)
 *     SepSetTokenSessionById @ 0x1404A19EC (SepSetTokenSessionById.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     IoRegisterContainerNotification @ 0x1405D2C50 (IoRegisterContainerNotification.c)
 *     IoGetContainerInformation @ 0x14068C5E0 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x1406F6594 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

__int64 MmGetSessionObjectById()
{
  __int64 SessionById; // rax
  void *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v8; // [rsp+28h] [rbp-20h]
  unsigned __int8 v9; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  SessionById = MmGetSessionById();
  v1 = (void *)SessionById;
  if ( SessionById )
  {
    v2 = *(_QWORD *)(SessionById + 1024);
    v3 = *(_QWORD *)(v2 + 72);
    v8 = (volatile signed __int64 *)&qword_14036CF80;
    v7 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v7, &qword_14036CF80);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&qword_14036CF80, (__int64)&v7) )
    {
      KxWaitForLockOwnerShip(&v7);
    }
    if ( (*(_DWORD *)(v2 + 4) & 2) != 0 )
    {
      v3 = 0LL;
    }
    else
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(v3 - 48);
      ObpIncrPointerCount((volatile signed __int64 *)(v3 - 48));
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v7, retaddr);
      goto LABEL_12;
    }
    _m_prefetchw(&v7);
    v5 = v7;
    if ( !v7 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v8, 0LL, (signed __int64)&v7) == &v7 )
      {
LABEL_12:
        __writecr8(v9);
        ObfDereferenceObject(v1);
        return v3;
      }
      v5 = KxWaitForLockChainValid(&v7);
    }
    v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
    goto LABEL_12;
  }
  return 0LL;
}
