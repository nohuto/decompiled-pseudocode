/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x180070994
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800704D8 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  unsigned int v5; // ebx
  float *InsetFieldPointer; // rax
  CSpriteVisualContent *v7; // rcx
  __int64 v8; // r8
  float v9; // xmm0_4

  v5 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, *((_DWORD *)a3 + 2));
  if ( InsetFieldPointer && (v9 = *(float *)(v8 + 12), v9 >= 0.0) )
  {
    if ( v9 != *InsetFieldPointer )
    {
      *InsetFieldPointer = v9;
      CSpriteVisualContent::ReleasePrimitiveCaches(v7);
      CResource::InvalidateAnimationSources(this, *((_DWORD *)a3 + 2));
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x166u);
  }
  return v5;
}
