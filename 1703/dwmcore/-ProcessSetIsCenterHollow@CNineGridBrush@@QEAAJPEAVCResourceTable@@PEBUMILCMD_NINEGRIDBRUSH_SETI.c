/*
 * XREFs of ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x1800BFEB4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetIsCenterHollow(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 120) != v3 )
  {
    *((_BYTE *)this + 120) = v3;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
  }
  return 0LL;
}
