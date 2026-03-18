/*
 * XREFs of MmSizeOfMdl @ 0x1401228F0
 * Callers:
 *     PopMarkHiberPhase @ 0x14040D278 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     VslCreateSecureSection @ 0x140687940 (VslCreateSecureSection.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140700C58 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
