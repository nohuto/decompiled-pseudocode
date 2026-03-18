/*
 * XREFs of IopIrqInitialize @ 0x14061B7C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14061AD90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_1403C6BD8 = (__int64)IopIrqUnpackRequirement;
  qword_1403C6BE0 = (__int64)IopIrqPackResource;
  qword_1403C6BE8 = (__int64)IopIrqUnpackResource;
  qword_1403C6BF0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootIrqArbiter, a2, 2, (__int64)L"RootIRQ", v3, 0LL);
}
