/*
 * XREFs of ?SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@@@Z @ 0x140018AFC
 * Callers:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140018CD0 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140057474 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFadeWindowLUT::SetStep(__int64 a1, int a2, int a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  __int64 result; // rax

  if ( a3 )
    v3 = FLOAT_1_0;
  else
    v3 = FLOAT_N1_0;
  v4 = (float)*(int *)(a1 + 144);
  result = (unsigned int)a2;
  *(float *)(a1 + 140) = (float)(v4 / (float)a2) * v3;
  if ( a3 )
    v4 = 0.0;
  *(float *)(a1 + 136) = v4;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 148) = 0;
    *(_DWORD *)(a1 + 152) = 1065353216;
  }
  else
  {
    *(_DWORD *)(a1 + 148) = 1065353216;
    *(_DWORD *)(a1 + 152) = -1082130432;
  }
  return result;
}
