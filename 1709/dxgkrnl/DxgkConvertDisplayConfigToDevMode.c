/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C00E5470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000A310 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D1BC4 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00E5570 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(_DWORD *a1, struct _devicemodeW *a2)
{
  UINT v4; // eax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v5; // ebp
  __int64 result; // rax
  unsigned int BitsPerPixel; // eax
  DWORD v8; // edx
  DWORD v9; // r8d
  DWORD v10; // r9d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // r10d
  __int64 v12; // rax
  struct _D3DDDI_RATIONAL v13; // [rsp+50h] [rbp+8h] BYREF

  if ( (*a1 & 0x30387) == 0x30387LL )
  {
    v4 = a1[12];
    v5 = a1[19];
    if ( *((_QWORD *)a1 + 6) != 0xFFFFFFFEFFFFFFFEuLL )
    {
      v13.Denominator = 0;
      v13.Numerator = v4;
      v13.Denominator = a1[13];
      DmmMapVSyncFromRationalToInteger(&v13, v5, 0LL);
    }
    result = DxgkConvertDisplayConfigCScalingToDdiScaling((unsigned int)a1[28], a1 + 4, &v13);
    if ( (int)result >= 0 )
    {
      BitsPerPixel = GetBitsPerPixel(a1[24]);
      result = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
                 BitsPerPixel,
                 v8,
                 v9,
                 v10,
                 v5,
                 Rotation,
                 (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v13.Numerator,
                 a2);
      if ( (int)result >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = a1[29];
        a2->dmPosition.y = a1[30];
      }
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(197511LL);
    *(_QWORD *)(v12 + 24) = 1724LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  return result;
}
