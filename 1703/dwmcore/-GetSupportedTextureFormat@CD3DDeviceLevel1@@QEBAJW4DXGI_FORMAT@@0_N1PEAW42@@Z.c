/*
 * XREFs of ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180079334
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetSupportedTextureFormat(
        enum DXGI_FORMAT *this,
        enum DXGI_FORMAT a2,
        enum DXGI_FORMAT a3,
        char a4,
        bool a5,
        enum DXGI_FORMAT *a6)
{
  CD3DDeviceLevel1 *v6; // r10
  enum DXGI_FORMAT *v7; // rax
  enum DXGI_FORMAT v8; // ecx

  v6 = (CD3DDeviceLevel1 *)this;
  switch ( a2 )
  {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT )
      {
        v8 = *((_DWORD *)this + 206);
        goto LABEL_13;
      }
LABEL_27:
      if ( a3 != DXGI_FORMAT_R16G16B16A16_FLOAT && a3 != DXGI_FORMAT_R10G10B10A2_UNORM )
        goto LABEL_20;
LABEL_29:
      v8 = *((_DWORD *)this + 204);
      goto LABEL_13;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT )
        goto LABEL_29;
      goto LABEL_27;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT
        || a3 == DXGI_FORMAT_R16G16B16A16_FLOAT
        || a3 == DXGI_FORMAT_R10G10B10A2_UNORM )
      {
        v8 = *((_DWORD *)this + 203);
        goto LABEL_13;
      }
LABEL_20:
      v7 = a6;
      if ( !a5 )
      {
        v8 = *((_DWORD *)this + 199);
        goto LABEL_11;
      }
      goto LABEL_14;
    case DXGI_FORMAT_R8G8B8A8_UNORM:
      goto LABEL_20;
    case DXGI_FORMAT_R8_UNORM:
      v8 = *((_DWORD *)this + 197);
      goto LABEL_13;
    case DXGI_FORMAT_A8_UNORM:
      v8 = *((_DWORD *)this + 198);
      goto LABEL_13;
    case DXGI_FORMAT_B8G8R8A8_UNORM:
LABEL_12:
      v8 = *((_DWORD *)v6 + 201);
LABEL_13:
      v7 = a6;
      goto LABEL_11;
  }
  if ( a2 != DXGI_FORMAT_B8G8R8X8_UNORM )
  {
    if ( !a4 && !(unsigned int)HasAlphaChannel(a2) )
    {
      v8 = *((_DWORD *)v6 + 202);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v7 = a6;
  if ( a4 )
  {
LABEL_14:
    v8 = *((_DWORD *)this + 201);
    goto LABEL_11;
  }
  v8 = *((_DWORD *)this + 202);
LABEL_11:
  *v7 = v8;
  return 0LL;
}
