/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x1402603A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapDeferredRecoveryServiceDpcRoutine(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  KIRQL v6; // al
  unsigned __int64 v7; // rbx
  signed __int32 v8; // eax
  bool v9; // cc
  __int64 result; // rax

  v2 = WheaDrsList;
  v3 = WheaDrsList;
  if ( v3 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) )
  {
    do
    {
      _mm_pause();
      v2 = WheaDrsList;
      v4 = WheaDrsList;
    }
    while ( v4 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) );
  }
  v5 = *(_BYTE *)(v2 + 24);
  if ( v5 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 16))(v2, *(_QWORD *)(v2 + 32));
  }
  else if ( !v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WheapDispatchPtr.AlignmentRequirement);
    *(_QWORD *)v2 = WheaPassiveDrsList;
    v7 = v6;
    WheaPassiveDrsList = v2;
    KxReleaseSpinLock((PKSPIN_LOCK)&WheapDispatchPtr.AlignmentRequirement);
    __writecr8(v7);
    if ( _InterlockedIncrement(&WheaPassiveDrsItemsToProcess) == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&WheapDispatchPtr.DeviceQueue, CriticalWorkQueue);
  }
  v8 = _InterlockedExchangeAdd(&WheaDrsItemsToProcess, 0xFFFFFFFF);
  v9 = v8 <= 1;
  result = (unsigned int)(v8 - 1);
  if ( !v9 )
    return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
  return result;
}
