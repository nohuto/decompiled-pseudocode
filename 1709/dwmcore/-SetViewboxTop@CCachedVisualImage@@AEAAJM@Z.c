/*
 * XREFs of ?SetViewboxTop@CCachedVisualImage@@AEAAJM@Z @ 0x180159B44
 * Callers:
 *     ?ProcessSetViewboxTop@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP@@@Z @ 0x1801596CC (-ProcessSetViewboxTop@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_.c)
 *     ?SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801597D0 (-SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetViewboxTop(CCachedVisualImage *this, float a2)
{
  CResource *v2; // rbx

  if ( *((float *)this + 37) != a2 )
  {
    v2 = (CCachedVisualImage *)((char *)this + 16);
    *((float *)this + 37) = a2;
    CResource::NotifyOnChanged((CCachedVisualImage *)((char *)this + 16), 0, 0LL);
    CResource::InvalidateAnimationSources(v2);
  }
  return 0LL;
}
