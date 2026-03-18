/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078DDC
 * Callers:
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18001C4A4 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081370 (-QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5270 (-QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E4AA0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180200600 (-QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CHwTextureRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078580 (-HrFindInterface@CHwTextureRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081AB0 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int (*v6)(CSystemMemoryBitmap *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(int (**)(CSystemMemoryBitmap *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( (char *)v6 == (char *)CHwTextureRenderTarget::HrFindInterface )
      {
        Interface = CHwTextureRenderTarget::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CSystemMemoryBitmap::HrFindInterface )
      {
        Interface = CSystemMemoryBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        Interface = ((__int64 (__fastcall *)(CMILCOMBase *, const struct _GUID *, void **))v6)(this, a2, a3);
      }
      v4 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v4;
}
