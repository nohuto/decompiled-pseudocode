/*
 * XREFs of ?KernelMapVisualRelativePoint@@YAJ_J0PEBUtagWF_Point@@PEAU1@@Z @ 0x1C00BB990
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1C00BBA80 (NtMapVisualRelativePoints.c)
 * Callees:
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00BB838 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformPoint@@YA?AUtagWF_Point@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00BB890 (-InverseTransformPoint@@YA-AUtagWF_Point@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall KernelMapVisualRelativePoint(
        char *a1,
        char *a2,
        const struct tagWF_Point *a3,
        struct tagWF_Point *a4)
{
  int TransformFromInputSink; // r10d
  __m128 v7; // xmm4
  __m128 v8; // xmm1
  float v9; // xmm3_4
  float v11[16]; // [rsp+20h] [rbp-40h] BYREF

  TransformFromInputSink = 0;
  *(_QWORD *)a4 = *(_QWORD *)a3;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    TransformFromInputSink = GetTransformFromInputSink(a1, (struct tagINPUT_TRANSFORM *)v11, (__int64)a3);
    if ( TransformFromInputSink < 0 )
      return (unsigned int)TransformFromInputSink;
    v7 = (__m128)*(unsigned int *)a4;
    v8 = v7;
    v9 = (float)((float)(*(float *)a4 * v11[3]) + (float)(*((float *)a4 + 1) * v11[7])) + v11[15];
    v8.m128_f32[0] = (float)((float)((float)(v7.m128_f32[0] * v11[0]) + (float)(*((float *)a4 + 1) * v11[4])) + v11[12])
                   / v9;
    v7.m128_f32[0] = (float)((float)((float)(v7.m128_f32[0] * v11[1]) + (float)(*((float *)a4 + 1) * v11[5])) + v11[13])
                   / v9;
    *(_QWORD *)a4 = _mm_unpacklo_ps(v8, v7).m128_u64[0];
  }
  if ( (unsigned __int64)(a2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    TransformFromInputSink = GetTransformFromInputSink(a2, (struct tagINPUT_TRANSFORM *)v11, (__int64)a3);
    if ( TransformFromInputSink >= 0 )
      *(_QWORD *)a4 = InverseTransformPoint((float *)a4, v11);
  }
  return (unsigned int)TransformFromInputSink;
}
