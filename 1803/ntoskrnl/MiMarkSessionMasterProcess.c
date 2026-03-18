/*
 * XREFs of MiMarkSessionMasterProcess @ 0x140165C18
 * Callers:
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSessionAddProcess @ 0x140584CFC (MiSessionAddProcess.c)
 */

__int64 __fastcall MiMarkSessionMasterProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp+8h]

  MiSessionAddProcess();
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v4 = a2 + 16;
  v9 = *(_DWORD *)(a1 + 1464);
  BYTE1(v9) |= 1u;
  *(_WORD *)(a1 + 1464) = v9;
  v5 = (_QWORD *)(a1 + 832);
  v6 = *(_QWORD **)(v4 + 8);
  if ( *v6 != v4 )
    __fastfail(3u);
  *v5 = v4;
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
