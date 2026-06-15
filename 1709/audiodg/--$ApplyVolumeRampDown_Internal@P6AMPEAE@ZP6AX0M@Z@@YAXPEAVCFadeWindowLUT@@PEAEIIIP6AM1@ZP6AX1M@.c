/*
 * XREFs of ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140018CD0
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14001A420 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 * Callees:
 *     ?SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@@@Z @ 0x140018AFC (-SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        float *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        float (__fastcall *a6)(unsigned __int8 *),
        void (__fastcall *a7)(unsigned __int8 *, float))
{
  __int64 v8; // r13
  float *v9; // r12
  __int64 result; // rax
  unsigned int v11; // r10d
  __int64 v12; // r15
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  __int64 v19; // rdi

  v8 = a4;
  v9 = (float *)a1;
  result = CFadeWindowLUT::SetStep(a1, a3, 1);
  if ( v11 )
  {
    v12 = v11;
    do
    {
      v13 = v9[34];
      v14 = v13 + v9[35];
      result = (unsigned int)(int)v13;
      v15 = v9[(unsigned int)result];
      v16 = (float)(int)result;
      v17 = (float)(v13 - (float)(int)result) * v9[(unsigned int)result + 17];
      v9[34] = v14;
      v18 = (float)((float)(v15 - v17) * v9[38]) + v9[37];
      if ( (_DWORD)v8 )
      {
        v19 = v8;
        do
        {
          if ( a6 == F32InTOF32 )
          {
            v16 = *a2;
          }
          else if ( a6 == I16TOF32 )
          {
            result = (unsigned int)*(__int16 *)a2;
            v16 = (float)*(__int16 *)a2 * 0.000030517578;
          }
          else
          {
            result = ((__int64 (__fastcall *)(float *, float (__fastcall *)(unsigned __int8 *), float (__fastcall *)(unsigned __int8 *), void (__fastcall *)(unsigned __int8 *, float)))a6)(
                       a2,
                       F32InTOF32,
                       I16TOF32,
                       F32TOI16);
          }
          v16 = v16 * v18;
          if ( a7 == F32OutTOF32 )
          {
            *a2 = v16;
          }
          else if ( a7 == F32TOI16 )
          {
            result = (unsigned int)(int)(v16 * 32768.0);
            *(_WORD *)a2 = result;
          }
          else
          {
            result = ((__int64 (__fastcall *)(float *, float (__fastcall *)(unsigned __int8 *), float (__fastcall *)(unsigned __int8 *), void (__fastcall *)(unsigned __int8 *, float)))a7)(
                       a2,
                       F32InTOF32,
                       I16TOF32,
                       F32TOI16);
          }
          a2 = (float *)((char *)a2 + ((unsigned __int64)a5 >> 3));
          --v19;
        }
        while ( v19 );
        v9 = (float *)a1;
      }
      --v12;
    }
    while ( v12 );
  }
  return result;
}
