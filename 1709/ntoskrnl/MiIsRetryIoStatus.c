/*
 * XREFs of MiIsRetryIoStatus @ 0x140124FC0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x14011F014 (MiZeroPageWrite.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiLogFailedDriverLoad @ 0x1406E1928 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1400EFF00 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
