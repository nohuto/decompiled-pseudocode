/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x14006A904
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x140650994 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14006A984 (MiReturnWsToExpansionList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 1 )
  {
    v3 = (_QWORD *)qword_1403CC588;
    v4 = (_QWORD *)(a1 - 2864);
    if ( *(__int64 **)qword_1403CC588 != &qword_1403CC580 )
      __fastfail(3u);
    *v4 = &qword_1403CC580;
    v4[1] = v3;
    *v3 = v4;
    qword_1403CC588 = a1 - 2864;
  }
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
