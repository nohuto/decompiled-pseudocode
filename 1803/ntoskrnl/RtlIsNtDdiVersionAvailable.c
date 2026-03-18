/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x140186410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000005;
}
