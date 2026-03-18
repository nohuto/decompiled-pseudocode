/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x180021B7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x180021BE8 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x13Au);
  }
  return v5;
}
