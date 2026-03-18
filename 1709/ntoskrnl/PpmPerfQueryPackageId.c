/*
 * XREFs of PpmPerfQueryPackageId @ 0x14017CBA0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24888);
}
