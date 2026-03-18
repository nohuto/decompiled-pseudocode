/*
 * XREFs of IopIrqInitialize @ 0x1405D5C60
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_140367778 = (__int64)IopIrqUnpackRequirement;
  qword_140367780 = (__int64)IopIrqPackResource;
  qword_140367788 = (__int64)IopIrqUnpackResource;
  qword_140367790 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootIrqArbiter, a2, 2, (__int64)L"RootIRQ", v3, 0LL);
}
