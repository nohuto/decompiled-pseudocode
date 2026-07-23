/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1800F4C30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

DWORD __cdecl RtlWriteNonVolatileMemory(
        PVOID NvToken,
        void *NvDestination,
        const void *Source,
        SIZE_T Size,
        DWORD Flags)
{
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  memmove(NvDestination, Source, Size);
  return 0;
}
