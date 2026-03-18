/*
 * XREFs of ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005CC50
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180027FA0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005D24C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     <none>
 */

char __fastcall COcclusionContext::CheckOcclusionRelevance(__int64 a1, float *a2)
{
  char v2; // r8
  unsigned int v3; // r10d
  int v4; // eax
  float v6; // xmm1_4
  unsigned int v7; // edx
  int v8; // ecx
  float *i; // r9

  v2 = 0;
  v3 = -1;
  v4 = *(_DWORD *)(a1 + 1080);
  v6 = (float)(a2[3] - a2[1]) * (float)(a2[2] - *a2);
  if ( v4 )
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 1096) + 4LL * (unsigned int)(v4 - 1));
  v7 = *(_DWORD *)(a1 + 640);
  v8 = 0;
  if ( v7 )
  {
    for ( i = (float *)(a1 + 772); ((v3 >> v8) & 1) == 0 || v6 <= (float)(*i * 0.25); ++i )
    {
      if ( ++v8 >= v7 )
        return v2;
    }
    return 1;
  }
  return v2;
}
