/*
 * XREFs of MiIsRetryIoStatus @ 0x140015264
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x14002FFC4 (MiZeroPageWrite.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiLogFailedDriverLoad @ 0x1406B5708 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1400151D0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
