/*
 * XREFs of ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x180220CD8
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x180220E34 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 * Callees:
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 *     ?RoundToPow2@@YAII@Z @ 0x1801C6930 (-RoundToPow2@@YAII@Z.c)
 */

unsigned __int64 __fastcall CGradientTextureGenerator::CalculateTextureSize(float *a1, char a2, int a3, __int64 a4)
{
  unsigned __int64 result; // rax
  char v5; // di
  float v6; // xmm8_4
  unsigned int v9; // r10d
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0;
  v6 = 0.0;
  v9 = 1;
  v10 = 0.0;
  v11 = 0.0;
  if ( !a2 )
  {
    v12 = sqrtf_0(
            (float)((float)(*a1 - a1[2]) * (float)(*a1 - a1[2]))
          + (float)((float)(a1[1] - a1[3]) * (float)(a1[1] - a1[3])));
    if ( a3 == 1 )
      v12 = v12 + v12;
    v11 = fminf(1024.0, fmaxf(v12, 0.0));
    if ( a3 )
    {
      v13 = FLOAT_1_0;
      v15 = (int)floorf_0(v11);
      if ( v15 <= 1 )
        v15 = 1;
      if ( v11 <= 1.0 )
        v11 = FLOAT_1_0;
    }
    else
    {
      v13 = FLOAT_1_0;
      if ( v11 < 1.0 )
        v14 = v11 >= 0.00390625;
      else
        v14 = (int)floorf_0(v11);
      v5 = 1;
      v15 = v14 + 2;
    }
    v9 = 1024;
    if ( v15 < 0x400 )
      v9 = RoundToPow2(v15);
    v16 = v9 - 1;
    if ( !v5 )
      v16 = v9;
    result = v16 - 1;
    if ( !v5 )
      result = v16;
    v10 = (float)(int)result;
    if ( v5 )
    {
      v6 = v13;
      v10 = v10 + v13;
    }
    else if ( a3 == 1 && v9 > 1 )
    {
      v10 = v10 * 0.5;
    }
  }
  *(float *)(a4 + 4) = v6;
  *(float *)(a4 + 12) = v11;
  *(float *)(a4 + 8) = v10;
  *(_DWORD *)a4 = v9;
  return result;
}
