/*
 * XREFs of ?SetViewboxBottom@CCachedVisualImage@@AEAAJM@Z @ 0x180159A78
 * Callers:
 *     ?ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM@@@Z @ 0x180159624 (-ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMA.c)
 *     ?SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801597D0 (-SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetViewboxBottom(CCachedVisualImage *this, float a2)
{
  CResource *v2; // rbx

  if ( *((float *)this + 39) != a2 )
  {
    v2 = (CCachedVisualImage *)((char *)this + 16);
    *((float *)this + 39) = a2;
    CResource::NotifyOnChanged((CCachedVisualImage *)((char *)this + 16), 0, 0LL);
    CResource::InvalidateAnimationSources(v2);
  }
  return 0LL;
}
