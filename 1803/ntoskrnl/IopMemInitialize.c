/*
 * XREFs of IopMemInitialize @ 0x14061B89C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x1406198B0 (RtlAddRange.c)
 *     ArbInitializeArbiterInstance @ 0x14061AD90 (ArbInitializeArbiterInstance.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14061B2D4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14061B564 (ArbAddMmConfigRangeAsBootReserved.c)
 */

NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  int v3; // [rsp+20h] [rbp-28h]

  qword_1403C6FF8 = (__int64)IopGenericUnpackRequirement;
  qword_1403C7000 = (__int64)IopGenericPackResource;
  qword_1403C7008 = (__int64)IopGenericUnpackResource;
  qword_1403C7010 = (__int64)IopGenericScoreRequirement;
  qword_1403C7078 = (__int64)IopMemFindSuitableRange;
  qword_1403C7048 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance(
             (__int64)&IopRootMemArbiter,
             a2,
             3,
             (__int64)L"RootMemory",
             v3,
             (__int64 (__fastcall *)(__int128 *, char *))IopGenericTranslateOrdering);
  if ( result >= 0 )
  {
    result = RtlAddRange(RangeList, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, RangeList);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, RangeList);
    }
  }
  return result;
}
