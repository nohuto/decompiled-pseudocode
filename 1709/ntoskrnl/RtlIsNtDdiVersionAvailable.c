/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x14015D390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000004;
}
