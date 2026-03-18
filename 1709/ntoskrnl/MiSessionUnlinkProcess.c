/*
 * XREFs of MiSessionUnlinkProcess @ 0x140221C34
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiSessionUnlinkProcess(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  v3 = (_QWORD *)(a2 + 832);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
