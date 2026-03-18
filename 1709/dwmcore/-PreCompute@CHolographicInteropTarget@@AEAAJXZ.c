/*
 * XREFs of ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801C1974
 * Callers:
 *     ?PreRender@CHolographicInteropTarget@@UEAAJXZ @ 0x1801C1A30 (-PreRender@CHolographicInteropTarget@@UEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801C089C (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::PreCompute(CHolographicInteropTarget *this)
{
  __int64 v1; // rax
  DWORD v2; // ebx
  unsigned int v3; // edi
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  CVisualTree *v6; // rcx
  signed int v7; // eax

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)(v1 + 144) )
  {
    while ( 1 )
    {
      TextureAtIndex = CHolographicManager::GetTextureAtIndex((RTL_SRWLOCK *)v1, v3);
      if ( TextureAtIndex )
      {
        v6 = (CVisualTree *)*((_QWORD *)TextureAtIndex + 10);
        v2 = 0;
        if ( v6 && ((*(_BYTE *)(*((_QWORD *)v6 + 3) + 88LL) & 0x7F) != 0 || !*((_QWORD *)TextureAtIndex + 11)) )
        {
          v7 = CVisualTree::PreCompute(v6);
          v2 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x2B0u);
        }
        if ( (v2 & 0x80000000) != 0 )
          break;
      }
      v1 = *((_QWORD *)this + 14);
      if ( ++v3 >= *(_DWORD *)(v1 + 144) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x7Eu);
  }
  return v2;
}
