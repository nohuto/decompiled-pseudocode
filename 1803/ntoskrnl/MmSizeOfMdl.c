/*
 * XREFs of MmSizeOfMdl @ 0x1400B9140
 * Callers:
 *     PopMarkHiberPhase @ 0x14048636C (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     VslCreateSecureSection @ 0x140718330 (VslCreateSecureSection.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14077C7EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14079BF90 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
