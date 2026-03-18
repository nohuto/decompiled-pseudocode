/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049090
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016830 (-QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800471B0 (-QueryInterface@CMILFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180047650 (-QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180047764 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049190 (-QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800496C0 (-HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C1B0 (-HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056670 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056D30 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007ABF0 (-HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CHwTextureRenderTarget *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v6 == CHwTextureRenderTarget::HrFindInterface )
      {
        Interface = CHwTextureRenderTarget::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CImageSource::HrFindInterface )
      {
        Interface = CImageSource::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CBitmap::HrFindInterface )
      {
        Interface = CBitmap::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CBoundsBitmap::HrFindInterface )
      {
        Interface = CBoundsBitmap::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CD2DBitmap::HrFindInterface )
      {
        Interface = CD2DBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        Interface = v6(this, a2, a3);
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
