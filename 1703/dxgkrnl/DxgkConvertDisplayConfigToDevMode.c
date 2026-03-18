/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C00A8210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003A18 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00A8320 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00F1960 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(__int64 a1, _DWORD *a2, _DWORD *a3, struct _devicemodeW *a4)
{
  UINT v4; // eax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v6; // r14d
  __int64 result; // rax
  int v10; // ecx
  unsigned int BitsPerPixel; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // r10d
  struct _D3DDDI_RATIONAL v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3[4];
  v6 = a3[11];
  if ( *((_QWORD *)a3 + 2) != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v16.Denominator = 0;
    v16.Numerator = v4;
    v16.Denominator = a3[5];
    DmmMapVSyncFromRationalToInteger(&v16, v6, 0LL);
  }
  result = DxgkConvertDisplayConfigCScalingToDdiScaling(*(unsigned int *)(a1 + 44), a1 + 20, &v16);
  if ( (int)result >= 0 )
  {
    switch ( a2[2] )
    {
      case 1:
        v10 = 41;
        break;
      case 2:
        v10 = 23;
        break;
      case 3:
        v10 = 20;
        break;
      case 4:
        v10 = 21;
        break;
      default:
        v10 = 32;
        break;
    }
    BitsPerPixel = GetBitsPerPixel(v10);
    result = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
               BitsPerPixel,
               v12,
               v13,
               v14,
               v6,
               Rotation,
               (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v16.Numerator,
               a4);
    if ( (int)result >= 0 )
    {
      a4->dmFields |= 0x20u;
      a4->dmPosition.x = a2[3];
      a4->dmPosition.y = a2[4];
    }
  }
  return result;
}
