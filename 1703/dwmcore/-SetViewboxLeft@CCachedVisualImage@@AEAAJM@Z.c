/*
 * XREFs of ?SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z @ 0x180165C98
 * Callers:
 *     ?ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT@@@Z @ 0x18012DAAC (-ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE.c)
 *     ?SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801659B0 (-SetProperty@CCachedVisualImage@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetViewboxLeft(CCachedVisualImage *this, float a2)
{
  CResource *v2; // rbx

  if ( *((float *)this + 22) != a2 )
  {
    v2 = (CCachedVisualImage *)((char *)this + 16);
    *((float *)this + 22) = a2;
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0LL, 0LL);
    CResource::InvalidateAnimationSources(v2, 2LL);
  }
  return 0LL;
}
