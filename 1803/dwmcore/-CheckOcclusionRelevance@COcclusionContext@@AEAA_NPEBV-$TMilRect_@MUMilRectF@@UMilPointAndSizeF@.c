/*
 * XREFs of ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A874C
 * Callers:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800A90A0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@K$0EA@$01$01@@QEBAJPEAKI@Z @ 0x1800C2FD8 (-Top@-$CWatermarkStack@K$0EA@$01$01@@QEBAJPEAKI@Z.c)
 */

char __fastcall COcclusionContext::CheckOcclusionRelevance(__int64 a1, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // r10d
  __int64 v6; // r11
  unsigned int v7; // r8d
  int v8; // ecx
  float *i; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2[3] - a2[1];
  v3 = a2[2] - *a2;
  v11 = -1;
  v4 = v2 * v3;
  CWatermarkStack<unsigned long,64,2,2>::Top(a1 + 1080, &v11);
  v7 = *(_DWORD *)(v6 + 640);
  v8 = v5;
  if ( v7 )
  {
    for ( i = (float *)(v6 + 772); ((v11 >> v8) & 1) == 0 || v4 <= (float)(*i * 0.25); ++i )
    {
      if ( ++v8 >= v7 )
        return v5;
    }
    LOBYTE(v5) = 1;
  }
  return v5;
}
