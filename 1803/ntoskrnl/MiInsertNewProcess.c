/*
 * XREFs of MiInsertNewProcess @ 0x140070F24
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140650994 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v4 = (_QWORD *)qword_1403CB668;
  v5 = a1 + 194;
  if ( *(__int64 **)qword_1403CB668 != &qword_1403CB660 )
    __fastfail(3u);
  *v5 = &qword_1403CB660;
  a1[195] = v4;
  *v4 = v5;
  qword_1403CB668 = (__int64)(a1 + 194);
  if ( a2 )
  {
    v6 = *(_QWORD **)(a2 + 24);
    v7 = a1 + 104;
    if ( *v6 != a2 + 16 )
      __fastfail(3u);
    *v7 = a2 + 16;
    a1[105] = v6;
    *v6 = v7;
    *(_QWORD *)(a2 + 24) = v7;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
