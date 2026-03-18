/*
 * XREFs of IopDmaInitialize @ 0x1405CE798
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405CECAC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_1403838B8 = (__int64)IopIrqUnpackRequirement;
  qword_1403838C0 = (__int64)IopDmaPackResource;
  qword_1403838C8 = (__int64)IopDmaUnpackResource;
  qword_1403838D0 = (__int64)IopDmaScoreRequirement;
  qword_140383950 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
