/*
 * XREFs of ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x1801595E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180128E08 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessFreezeVisualSurface(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  *((_BYTE *)this + 376) = 1;
  v3 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 4), this);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x13Du);
  return v4;
}
