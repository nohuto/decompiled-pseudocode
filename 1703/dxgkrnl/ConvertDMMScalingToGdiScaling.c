/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1C00F1A40
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DF690 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00F1960 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  v4 = (int)a1;
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
  v7 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v4;
  WdLogEvent5_WdWarning(v7);
  if ( (_DWORD)v4 == 253 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 164LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *a2 = 0;
  return 0LL;
}
