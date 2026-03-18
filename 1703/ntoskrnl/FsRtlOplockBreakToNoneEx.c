/*
 * XREFs of FsRtlOplockBreakToNoneEx @ 0x1401E37C0
 * Callers:
 *     FsRtlOplockBreakToNone @ 0x1401E3780 (FsRtlOplockBreakToNone.c)
 * Callees:
 *     FsRtlpOplockBreakToNone @ 0x14003BE58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNoneEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v8; // rbx
  NTSTATUS v9; // esi
  ULONG v10; // edi
  POPLOCK_FS_PREPOST_IRP v11; // r15
  POPLOCK_WAIT_COMPLETE_ROUTINE v12; // r12
  __int64 v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF

  v8 = (PFAST_MUTEX *)*Oplock;
  v14[1] = (__int64)*Oplock;
  LOBYTE(v15) = 0;
  if ( (Flags & 0x10) != 0 )
  {
    v9 = -1073741811;
  }
  else
  {
    v10 = Flags | 8;
    v11 = PostIrpRoutine;
    v12 = CompletionRoutine;
    do
    {
      LOBYTE(v14[0]) = 0;
      if ( !(_BYTE)v15 )
      {
        ExAcquireFastMutexUnsafe(v8[19]);
        LOBYTE(v15) = 1;
      }
      v9 = FsRtlpOplockBreakToNone(
             (__int64)v8,
             (__int64)Irp->Tail.Overlay.CurrentStackLocation,
             (__int64)Irp,
             v10,
             (__int64)Context,
             (__int64)v12,
             (__int64)v11,
             &v15,
             (__int64)v14);
      if ( !v9 )
        v9 = FsRtlpOplockBreakByCacheFlags(
               (__int64)v8,
               (__int64)Irp->Tail.Overlay.CurrentStackLocation,
               Irp,
               v10,
               28672,
               (__int64)Context,
               (__int64)v12,
               (__int64)v11,
               &v15,
               (__int64)v14);
    }
    while ( LOBYTE(v14[0]) );
  }
  if ( (_BYTE)v15 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v9;
}
