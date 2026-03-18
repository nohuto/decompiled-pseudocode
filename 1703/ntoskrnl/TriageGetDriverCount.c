/*
 * XREFs of TriageGetDriverCount @ 0x140837878
 * Callers:
 *     VfTriageAddDrivers @ 0x14083568C (VfTriageAddDrivers.c)
 *     ViTriageSameDriversFromDump @ 0x140835990 (ViTriageSameDriversFromDump.c)
 * Callees:
 *     TriagepVerifyDump @ 0x1408378EC (TriagepVerifyDump.c)
 */

__int64 __fastcall TriageGetDriverCount(__int64 a1, _DWORD *a2)
{
  __int64 v5; // rax

  if ( !(unsigned __int8)TriagepVerifyDump(a1) )
    return 3221225485LL;
  v5 = a1 + (unsigned int)TriageImagePageSize;
  if ( !v5 )
    return 3221225485LL;
  *a2 = *(_DWORD *)(v5 + 52);
  return 0LL;
}
