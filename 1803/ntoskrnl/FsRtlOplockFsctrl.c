/*
 * XREFs of FsRtlOplockFsctrl @ 0x1404E2920
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
