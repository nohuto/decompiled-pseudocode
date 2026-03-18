/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C00C50A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000729C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00C40B0 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00C51E0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(_DWORD *a1, struct _devicemodeW *a2, __int64 a3)
{
  UINT v5; // eax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v6; // r14d
  int v7; // edi
  unsigned int BitsPerPixel; // eax
  DWORD v9; // edx
  DWORD v10; // r8d
  DWORD v11; // r9d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  int v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]
  struct _D3DDDI_RATIONAL v19; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0LL;
  v17 = 2178;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2178);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2178);
  if ( (*a1 & 0x30387LL) == 0x30387 )
  {
    v5 = a1[12];
    v6 = a1[19];
    if ( *((_QWORD *)a1 + 6) != 0xFFFFFFFEFFFFFFFEuLL )
    {
      v19.Denominator = 0;
      v19.Numerator = v5;
      v19.Denominator = a1[13];
      DmmMapVSyncFromRationalToInteger(&v19, v6, 0LL);
    }
    v7 = DxgkConvertDisplayConfigCScalingToDdiScaling((unsigned int)a1[28], a1 + 4, &v19);
    if ( v7 >= 0 )
    {
      BitsPerPixel = GetBitsPerPixel(a1[24]);
      v7 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             BitsPerPixel,
             v9,
             v10,
             v11,
             v6,
             v12,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v19.Numerator,
             a2);
      if ( v7 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = a1[29];
        a2->dmPosition.y = a1[30];
      }
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(197511LL);
    *(_QWORD *)(v16 + 24) = 1747LL;
    WdLogEvent5_WdAssertion(v16);
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v17);
  return (unsigned int)v7;
}
