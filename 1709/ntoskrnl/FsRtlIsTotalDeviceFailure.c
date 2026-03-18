/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1400EFF00
 * Callers:
 *     MmIsWriteErrorFatal @ 0x1400EFE94 (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
