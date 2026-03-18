/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1400151D0
 * Callers:
 *     MmIsWriteErrorFatal @ 0x140015158 (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
