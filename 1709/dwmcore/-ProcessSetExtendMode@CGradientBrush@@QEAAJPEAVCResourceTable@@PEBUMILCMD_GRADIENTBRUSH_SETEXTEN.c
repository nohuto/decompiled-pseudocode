/*
 * XREFs of ?ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETEXTENDMODE@@@Z @ 0x1801674FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetExtendMode(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETEXTENDMODE *a3)
{
  int v3; // r9d
  char v4; // dl
  int v5; // r9d

  v3 = *((_DWORD *)a3 + 2);
  v4 = 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        v4 = 3;
    }
    else
    {
      v4 = 2;
    }
  }
  if ( v4 != *((_BYTE *)this + 105) )
  {
    *((_BYTE *)this + 105) = v4;
    *((_BYTE *)this + 104) = 0;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
  }
  return 0LL;
}
