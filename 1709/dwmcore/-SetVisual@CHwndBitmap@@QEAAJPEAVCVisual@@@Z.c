/*
 * XREFs of ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180074290
 * Callers:
 *     ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x180074310 (-ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800B6924 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800B69AC (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180130390 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801305E8 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18007468C (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x1800746B0 (--$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CHwndBitmap::SetVisual(CHwndBitmap *this, struct CVisual *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( *((struct CVisual **)this + 13) == a2 )
  {
    v7 = *((_QWORD *)this + 16);
    if ( v7 )
    {
      *(_BYTE *)(v7 + 377) = *((_BYTE *)this + 120);
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  else
  {
    CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), *((struct CResource **)this + 13));
    *((_QWORD *)this + 13) = a2;
    v5 = CResource::RegisterNotifier((CHwndBitmap *)((char *)this + 16), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xDCu);
    }
    else
    {
      ReleaseInterface<CCachedVisualImage>((char *)this + 128);
      ReleaseInterface<CVisualTree>((char *)this + 112);
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  return v2;
}
