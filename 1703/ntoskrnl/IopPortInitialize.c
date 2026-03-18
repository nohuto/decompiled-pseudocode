/*
 * XREFs of IopPortInitialize @ 0x1405D5850
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_140367AB8 = (__int64)IopPortFindSuitableRange;
  qword_140367AC0 = (__int64)IopPortAddAllocation;
  qword_140367AC8 = (__int64)IopPortBacktrackAllocation;
  qword_140367A38 = (__int64)IopGenericUnpackRequirement;
  qword_140367A40 = (__int64)IopGenericPackResource;
  qword_140367A48 = (__int64)IopGenericUnpackResource;
  qword_140367A50 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance(
           (__int64)&IopRootPortArbiter,
           a2,
           1,
           (__int64)L"RootPort",
           v3,
           (__int64 (__fastcall *)(__int128 *, char *))IopGenericTranslateOrdering);
}
