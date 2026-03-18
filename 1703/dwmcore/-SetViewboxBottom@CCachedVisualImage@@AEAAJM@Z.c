/*
 * XREFs of ?SetViewboxBottom@CCachedVisualImage@@AEAAJM@Z @ 0x180165C58
 * Callers:
 *     ?ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM@@@Z @ 0x18012DB54 (-ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMA.c)
 *     ?SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801659B0 (-SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetViewboxBottom(CCachedVisualImage *this, float a2)
{
  CResource *v2; // rbx

  if ( *((float *)this + 25) != a2 )
  {
    v2 = (CCachedVisualImage *)((char *)this + 16);
    *((float *)this + 25) = a2;
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0LL, 0LL);
    CResource::InvalidateAnimationSources(v2, 5LL);
  }
  return 0LL;
}
