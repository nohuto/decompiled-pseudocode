/*
 * XREFs of ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x1801A7964
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801A5460 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801B4904 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetSupportedTextureFormat(
        enum DXGI_FORMAT *this,
        int a2,
        enum DXGI_FORMAT a3,
        char a4,
        bool a5,
        enum DXGI_FORMAT *a6)
{
  CD3DDeviceLevel1 *v6; // r10
  enum DXGI_FORMAT v7; // ecx
  enum DXGI_FORMAT *v8; // rax

  v6 = (CD3DDeviceLevel1 *)this;
  switch ( a2 )
  {
    case 2:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT )
      {
        v7 = *((_DWORD *)this + 210);
        goto LABEL_30;
      }
LABEL_25:
      if ( a3 != DXGI_FORMAT_R16G16B16A16_FLOAT && a3 != DXGI_FORMAT_R10G10B10A2_UNORM )
        goto LABEL_18;
LABEL_27:
      v7 = *((_DWORD *)this + 208);
      goto LABEL_30;
    case 10:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT )
        goto LABEL_27;
      goto LABEL_25;
    case 24:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT
        || a3 == DXGI_FORMAT_R16G16B16A16_FLOAT
        || a3 == DXGI_FORMAT_R10G10B10A2_UNORM )
      {
        v7 = *((_DWORD *)this + 207);
        goto LABEL_30;
      }
LABEL_18:
      v8 = a6;
      if ( !a5 )
      {
        v7 = *((_DWORD *)this + 203);
        goto LABEL_31;
      }
      goto LABEL_14;
    case 28:
      goto LABEL_18;
    case 61:
      v7 = *((_DWORD *)this + 201);
      goto LABEL_30;
    case 65:
      v7 = *((_DWORD *)this + 202);
      goto LABEL_30;
    case 87:
      goto LABEL_12;
  }
  if ( a2 != 88 )
  {
    if ( !a4 && !(unsigned int)HasAlphaChannel(a2) )
    {
      v7 = *((_DWORD *)v6 + 206);
LABEL_30:
      v8 = a6;
      goto LABEL_31;
    }
LABEL_12:
    v7 = *((_DWORD *)v6 + 205);
    goto LABEL_30;
  }
  v8 = a6;
  if ( !a4 )
  {
    v7 = *((_DWORD *)this + 206);
    goto LABEL_31;
  }
LABEL_14:
  v7 = *((_DWORD *)this + 205);
LABEL_31:
  *v8 = v7;
  return 0LL;
}
