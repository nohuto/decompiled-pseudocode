/*
 * XREFs of RaidAdapterInsertUnit @ 0x1C0014750
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C0014224 (RaidBusEnumeratorGetUnit.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0015EA0 (RaidUnitConvertToNormalUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017620 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     StorInsertDictionary @ 0x1C00147E4 (StorInsertDictionary.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v4 = *(_QWORD **)(a1 + 128);
  v5 = (_QWORD *)(a2 + 48);
  if ( *v4 != a1 + 120 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 56) = v4;
  *v5 = a1 + 120;
  *v4 = v5;
  *(_QWORD *)(a1 + 128) = v5;
  ++*(_DWORD *)(a1 + 136);
  v6 = RaidAdapterAcquireInterruptLock(a1);
  StorInsertDictionary(a1 + 144, a2 + 64);
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
