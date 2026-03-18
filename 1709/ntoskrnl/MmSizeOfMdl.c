/*
 * XREFs of MmSizeOfMdl @ 0x140115AC0
 * Callers:
 *     PopMarkHiberPhase @ 0x140433E88 (PopMarkHiberPhase.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     VslCreateSecureSection @ 0x1406B3700 (VslCreateSecureSection.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1407187FC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140738AC4 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
