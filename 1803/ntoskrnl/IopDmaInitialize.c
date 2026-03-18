/*
 * XREFs of IopDmaInitialize @ 0x14061B828
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14061AD90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_1403C6D38 = (__int64)IopIrqUnpackRequirement;
  qword_1403C6D40 = (__int64)IopDmaPackResource;
  qword_1403C6D48 = (__int64)IopDmaUnpackResource;
  qword_1403C6D50 = (__int64)IopDmaScoreRequirement;
  qword_1403C6DD0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA", v3, 0LL);
}
