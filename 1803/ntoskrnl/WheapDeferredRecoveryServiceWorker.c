/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x1402BF740
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  signed __int32 v3; // eax
  bool v4; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.32);
    v1 = WheaPassiveDrsList;
    v2 = v0;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    KxReleaseSpinLock((PKSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.32);
    __writecr8(v2);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v1 + 16))(v1, *(_QWORD *)(v1 + 32));
    v3 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v4 = v3 <= 1;
    result = (unsigned int)(v3 - 1);
  }
  while ( !v4 );
  return result;
}
