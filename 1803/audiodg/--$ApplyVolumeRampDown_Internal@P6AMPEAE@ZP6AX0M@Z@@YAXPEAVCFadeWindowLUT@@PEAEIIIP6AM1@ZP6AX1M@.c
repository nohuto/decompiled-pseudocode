/*
 * XREFs of ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140019380
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14001A508 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
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
  int v7; // eax
  __int64 v8; // r12
  float *v10; // r13
  float v11; // xmm1_4
  __int64 result; // rax
  __int64 v13; // r15
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  __int64 v20; // rdi

  v7 = *(_DWORD *)(a1 + 144);
  v8 = a4;
  *(_DWORD *)(a1 + 152) = 1065353216;
  v10 = (float *)a1;
  v11 = (float)v7;
  result = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(float *)(a1 + 140) = v11 / (float)a3;
  if ( a3 )
  {
    v13 = (unsigned int)a3;
    do
    {
      v14 = v10[34];
      v15 = v14 + v10[35];
      result = (unsigned int)(int)v14;
      v16 = v10[(unsigned int)result];
      v17 = (float)(int)result;
      v18 = (float)(v14 - (float)(int)result) * v10[(unsigned int)result + 17];
      v10[34] = v15;
      v19 = (float)((float)(v16 - v18) * v10[38]) + v10[37];
      if ( (_DWORD)v8 )
      {
        v20 = v8;
        do
        {
          if ( a6 == I16TOF32 )
          {
            result = (unsigned int)*(__int16 *)a2;
            v17 = (float)*(__int16 *)a2 * 0.000030517578;
          }
          else if ( a6 == F32InTOF32 )
          {
            v17 = *a2;
          }
          else
          {
            result = ((__int64 (__fastcall *)(float *, float (__fastcall *)(unsigned __int8 *), float (__fastcall *)(unsigned __int8 *), void (__fastcall *)(unsigned __int8 *, float)))a6)(
                       a2,
                       I16TOF32,
                       F32InTOF32,
                       F32OutTOF32);
          }
          v17 = v17 * v19;
          if ( a7 == F32TOI16 )
          {
            result = (unsigned int)(int)(v17 * 32768.0);
            *(_WORD *)a2 = result;
          }
          else if ( a7 == F32OutTOF32 )
          {
            *a2 = v17;
          }
          else
          {
            result = ((__int64 (__fastcall *)(float *, float (__fastcall *)(unsigned __int8 *), float (__fastcall *)(unsigned __int8 *), void (__fastcall *)(unsigned __int8 *, float)))a7)(
                       a2,
                       I16TOF32,
                       F32InTOF32,
                       F32OutTOF32);
          }
          a2 = (float *)((char *)a2 + ((unsigned __int64)a5 >> 3));
          --v20;
        }
        while ( v20 );
        v10 = (float *)a1;
      }
      --v13;
    }
    while ( v13 );
  }
  return result;
}
