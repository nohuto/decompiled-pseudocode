/*
 * XREFs of TtmiRemoveQueueFromSession @ 0x1407731E0
 * Callers:
 *     TtmpDeleteQueue @ 0x140774A80 (TtmpDeleteQueue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1407735D8 (TtmpDereferenceSessionMaybeLast.c)
 */

__int64 __fastcall TtmiRemoveQueueFromSession(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v3 = *a1;
  v4 = a1[2];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v3;
  *(_QWORD *)(v3 + 8) = v5;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return TtmpDereferenceSessionMaybeLast(v4);
}
