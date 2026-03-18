/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x140014724
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x1405EC234 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x1400147A4 (MiReturnWsToExpansionList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 1 )
  {
    v3 = (_QWORD *)qword_140389308;
    v4 = (_QWORD *)(a1 - 2864);
    if ( *(__int64 **)qword_140389308 != &qword_140389300 )
      __fastfail(3u);
    *v4 = &qword_140389300;
    v4[1] = v3;
    *v3 = v4;
    qword_140389308 = a1 - 2864;
  }
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
