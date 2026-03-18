/*
 * XREFs of ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x180182774
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18014A9A4 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessFreezeVisualSurface(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *((_BYTE *)this + 376) = 1;
  v3 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 4), this);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x133u);
  return v4;
}
