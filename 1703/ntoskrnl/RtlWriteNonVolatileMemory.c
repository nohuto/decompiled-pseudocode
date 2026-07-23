/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x14023B4B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
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
