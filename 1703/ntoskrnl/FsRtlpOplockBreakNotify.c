/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x1406858A8
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockSendModernAppTermination @ 0x140019C10 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r8
  char v7; // si
  int v8; // ecx
  unsigned int v9; // edi

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 144);
  if ( (v8 & 0x1F00F00) != 0 || *(_QWORD *)(a1 + 72) != a1 + 72 || (v8 & 0x20000) != 0 )
  {
    if ( (v8 & 0x80u) == 0 )
    {
      v7 = 0;
      a3->IoStatus.Status = 0;
      LOBYTE(v6) = 1;
      FsRtlpModifyThreadPriorities(a1, 0LL, v6);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      v9 = FsRtlpWaitOnIrp(a1, (__int64)a3, 0LL, (__int64)FsRtlpNotifyOplockBreakComplete, 0LL, 0LL, 0, 0LL);
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v9 = 0;
LABEL_10:
  if ( v7 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v9;
}
