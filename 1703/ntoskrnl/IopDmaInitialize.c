/*
 * XREFs of IopDmaInitialize @ 0x1405D5A9C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_1403678D8 = (__int64)IopIrqUnpackRequirement;
  qword_1403678E0 = (__int64)IopDmaPackResource;
  qword_1403678E8 = (__int64)IopDmaUnpackResource;
  qword_1403678F0 = (__int64)IopDmaScoreRequirement;
  qword_140367970 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA", v3, 0LL);
}
