/*
 * XREFs of IopMemInitialize @ 0x1405CE6B4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x1404667A0 (RtlAddRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405CE8DC (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405CEAD0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x1405CECAC (ArbInitializeArbiterInstance.c)
 */

int __fastcall IopMemInitialize(__int64 a1, int a2)
{
  int result; // eax

  qword_140383A18 = (__int64)&IopGenericUnpackRequirement;
  qword_140383A20 = (__int64)IopGenericPackResource;
  qword_140383A28 = (__int64)IopGenericUnpackResource;
  qword_140383A30 = (__int64)IopGenericScoreRequirement;
  qword_140383A98 = (__int64)IopMemFindSuitableRange;
  qword_140383A68 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(RangeList, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, RangeList);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, RangeList);
    }
  }
  return result;
}
