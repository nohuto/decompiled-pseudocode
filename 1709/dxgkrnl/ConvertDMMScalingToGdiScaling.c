/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1C00D1CA4
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00A5FC0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D1BC4 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00D1DD8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = (int)a1;
  result = 1LL;
  if ( (_DWORD)a1 == 1 )
    goto LABEL_9;
  if ( (_DWORD)a1 == 2 )
  {
    *a2 = 2;
    return result;
  }
  if ( (int)a1 <= 3 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      *a2 = 1;
      return result;
    }
    goto LABEL_5;
  }
  if ( (int)a1 <= 5 || (_DWORD)a1 == 255 )
  {
LABEL_9:
    *a2 = 0;
    return result;
  }
LABEL_5:
  v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = v3;
  WdLogEvent5_WdWarning(v6);
  if ( (_DWORD)v3 == 253 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 141LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *a2 = 0;
  return 0LL;
}
