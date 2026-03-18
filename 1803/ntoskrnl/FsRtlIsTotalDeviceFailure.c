/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1401352C0
 * Callers:
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140135254 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
