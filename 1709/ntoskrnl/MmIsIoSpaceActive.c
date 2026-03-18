/*
 * XREFs of MmIsIoSpaceActive @ 0x140219D20
 * Callers:
 *     <none>
 * Callees:
 *     MiIsProbeActive @ 0x140009C98 (MiIsProbeActive.c)
 */

LOGICAL __stdcall MmIsIoSpaceActive(PHYSICAL_ADDRESS StartAddress, SIZE_T NumberOfBytes)
{
  return MiIsProbeActive(
           (unsigned __int64)StartAddress.QuadPart >> 12,
           ((StartAddress.QuadPart - 1 + NumberOfBytes) >> 12) - ((unsigned __int64)StartAddress.QuadPart >> 12) + 1,
           0);
}
