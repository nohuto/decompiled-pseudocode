/*
 * XREFs of MiFinishPageFileExtension @ 0x14025F6C4
 * Callers:
 *     MiAttemptPageFileExtension @ 0x14074E7F8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x14017DEF0 (MiUpdateReserveClusterInfo.c)
 */

LONG __fastcall MiFinishPageFileExtension(struct _KEVENT *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  ULONG v7; // edi
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 232), &LockHandle);
  v6 = *(_QWORD *)(a2 + 112);
  v7 = *(_DWORD *)a2;
  RtlClearBits((PRTL_BITMAP)(v6 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v6 + 24), v7, a3);
  *(_QWORD *)a2 += a3;
  *(_QWORD *)(a2 + 24) += a3;
  *(_QWORD *)(a2 + 48) += a3;
  ++*(_DWORD *)(a2 + 128);
  LOBYTE(v6) = *(_BYTE *)(a2 + 206);
  MiCoalescePageFileBitmapsCache(a2, 0, v7);
  MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 256), 0LL, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( (v6 & 1) != 0 )
    return KeSetEvent(a1 + 36, 0, 0);
  return result;
}
