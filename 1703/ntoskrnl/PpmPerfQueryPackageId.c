/*
 * XREFs of PpmPerfQueryPackageId @ 0x14017D400
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 25024);
}
