/*
 * XREFs of IopPortInitialize @ 0x14061B980
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14061AD90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_1403C6F18 = (__int64)IopPortFindSuitableRange;
  qword_1403C6F20 = (__int64)IopPortAddAllocation;
  qword_1403C6F28 = (__int64)IopPortBacktrackAllocation;
  qword_1403C6E98 = (__int64)IopGenericUnpackRequirement;
  qword_1403C6EA0 = (__int64)IopGenericPackResource;
  qword_1403C6EA8 = (__int64)IopGenericUnpackResource;
  qword_1403C6EB0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance(
           (__int64)&IopRootPortArbiter,
           a2,
           1,
           (__int64)L"RootPort",
           v3,
           (__int64 (__fastcall *)(__int128 *, char *))IopGenericTranslateOrdering);
}
