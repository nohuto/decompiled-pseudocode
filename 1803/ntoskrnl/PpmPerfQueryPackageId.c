/*
 * XREFs of PpmPerfQueryPackageId @ 0x1401A69D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24888);
}
