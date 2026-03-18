/*
 * XREFs of MiFinishPageFileExtension @ 0x140219F78
 * Callers:
 *     MiAttemptPageFileExtension @ 0x1406B77B4 (MiAttemptPageFileExtension.c)
 * Callees:
 *     MiUpdateReserveClusterInfo @ 0x14003C70C (MiUpdateReserveClusterInfo.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400AC1E0 (MiCoalescePageFileBitmapsCache.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
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
    return KeSetEvent(a1 + 38, 0, 0);
  return result;
}
