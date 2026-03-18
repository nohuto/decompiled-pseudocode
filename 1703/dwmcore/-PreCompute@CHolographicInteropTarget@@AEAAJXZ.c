/*
 * XREFs of ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801A69E8
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801A61A0 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::PreCompute(CHolographicInteropTarget *this)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned int v3; // edi
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  CVisualTree *v6; // rcx
  int v7; // eax

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)(v1 + 104) )
  {
    while ( 1 )
    {
      TextureAtIndex = CHolographicManager::GetTextureAtIndex((RTL_SRWLOCK *)v1, v3);
      if ( TextureAtIndex )
      {
        v6 = (CVisualTree *)*((_QWORD *)TextureAtIndex + 10);
        v2 = 0;
        if ( v6 && ((*(_BYTE *)(*((_QWORD *)v6 + 3) + 88LL) & 0x1F) != 0 || !*((_QWORD *)TextureAtIndex + 11)) )
        {
          v7 = CVisualTree::PreCompute(v6, 0LL);
          v2 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x277u);
        }
        if ( v2 < 0 )
          break;
      }
      v1 = *((_QWORD *)this + 14);
      if ( ++v3 >= *(_DWORD *)(v1 + 104) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x7Fu);
  }
  return (unsigned int)v2;
}
