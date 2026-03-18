/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180164784
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801649E0 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164A80 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18004876C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800C92C4 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180165BAC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // ebx
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rdi
  int v5; // eax

  v1 = 0;
  if ( !this[62] )
  {
    v3 = (CCachedVisualImage *)CCachedVisualImage::operator new();
    if ( v3 )
      v4 = CCachedVisualImage::CCachedVisualImage(v3, this[4]);
    else
      v4 = 0LL;
    if ( v4 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CCachedVisualImage *)((char *)v4 + 16));
      *((_BYTE *)v4 + 322) = *((_BYTE *)this + 488);
      *((_BYTE *)v4 + 324) = 1;
      CResource::NotifyOnChanged((_DWORD *)v4 + 4, 0LL, 0LL);
      v5 = CCachedVisualImage::SetRootVisual(v4, this[59]);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x52u);
        CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v4 + 16));
      }
      else
      {
        this[62] = v4;
      }
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Au);
    }
  }
  return v1;
}
