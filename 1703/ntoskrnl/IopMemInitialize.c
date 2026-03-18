/*
 * XREFs of IopMemInitialize @ 0x1405D0F08
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x1405B4B10 (RtlAddRange.c)
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405B6478 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405D0FEC (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  int result; // eax
  int v3; // [rsp+20h] [rbp-28h]

  qword_140367B98 = (__int64)IopGenericUnpackRequirement;
  qword_140367BA0 = (__int64)IopGenericPackResource;
  qword_140367BA8 = (__int64)IopGenericUnpackResource;
  qword_140367BB0 = (__int64)IopGenericScoreRequirement;
  qword_140367C18 = (__int64)IopMemFindSuitableRange;
  qword_140367BE8 = (__int64)IopMemQueryConflict;
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
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, RangeList);
    }
  }
  return result;
}
