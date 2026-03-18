/*
 * XREFs of MiInsertNewProcess @ 0x140063E88
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1405D1CE0 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  v4 = (_QWORD *)qword_14036C1A0;
  v5 = a1 + 194;
  if ( *(__int64 **)qword_14036C1A0 != &qword_14036C198 )
    __fastfail(3u);
  *v5 = &qword_14036C198;
  a1[195] = v4;
  *v4 = v5;
  qword_14036C1A0 = (__int64)(a1 + 194);
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
