/*
 * XREFs of vLTimesVtfl @ 0x1C0238EE8
 * Callers:
 *     vFillGLYPHDATA @ 0x1C022F244 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C022FA24 (vFillGLYPHDATA_ErrRecover.c)
 *     vFillSingularGLYPHDATA @ 0x1C022FC0C (vFillSingularGLYPHDATA.c)
 *     vFill_GlyphData @ 0x1C02382AC (vFill_GlyphData.c)
 * Callees:
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C0238C64 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall vLTimesVtfl(int a1, float *a2, __int64 a3)
{
  float v3; // xmm1_4
  float v5; // [rsp+38h] [rbp+10h] BYREF
  float v6; // [rsp+3Ch] [rbp+14h]

  v3 = (float)a1 * *a2;
  v6 = a2[1] * (float)a1;
  v5 = v3;
  return EPOINTQF::operator=(a3, (__int64)&v5);
}
