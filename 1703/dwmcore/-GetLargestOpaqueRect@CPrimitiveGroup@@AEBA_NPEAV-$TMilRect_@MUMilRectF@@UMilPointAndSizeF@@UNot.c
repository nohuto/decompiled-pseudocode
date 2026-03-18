/*
 * XREFs of ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B518
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C860 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroup::GetLargestOpaqueRect(__int64 a1, __int64 a2)
{
  char v2; // r8
  bool v3; // cc
  float v4; // xmm1_4

  v2 = 0;
  if ( *(_QWORD *)(a1 + 376) )
  {
    if ( a2 )
    {
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 428);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 432);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 436);
      v3 = *(float *)(a2 + 8) <= *(float *)a2;
      v4 = *(float *)(a1 + 440);
      *(float *)(a2 + 12) = v4;
      if ( !v3 )
        return v4 > *(float *)(a2 + 4);
    }
  }
  return v2;
}
