/*
 * XREFs of PspDoesJobHierarchyPermitUILimitsCallback @ 0x14045EE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDoesJobHierarchyPermitUILimitsCallback(__int64 a1, __int64 a2)
{
  if ( a1 == a2 )
    return 0LL;
  else
    return (*(_BYTE *)(a1 + 1304) & 0x10) != 0 ? 0xC0000718 : 0;
}
