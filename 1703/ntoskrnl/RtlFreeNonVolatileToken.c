/*
 * XREFs of RtlFreeNonVolatileToken @ 0x14023B480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlFreeNonVolatileToken(PVOID NvToken)
{
  return ((unsigned __int8)NvToken & 1) == 0 ? 0xC000000D : 0;
}
