/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C0194070
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0007D04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00C4198 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00C42A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _D3DDDI_RATIONAL *a9,
        _BYTE *a10)
{
  __int64 v12; // rbp
  unsigned __int8 *v14; // r11
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax

  v12 = a4;
  *a10 = 0;
  a9[1].Numerator = a1[7];
  a9->Numerator = a1[4];
  a9->Denominator = a1[5];
  a9[3].Numerator = (int)(a2[14] << 29) >> 29;
  a9[4].Denominator = a9[4].Denominator & 0xFFFFFFFC | a5 & 1;
  a9[5].Numerator = (unsigned __int8)((a7 != 0 ? 0x80 : 0) | a8 & 0xF | (a6 != 0 ? 0x40 : 0));
  DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2), a9 + 2);
  a9[1].Denominator = DmmMapVSyncFromRationalToInteger(
                        a9 + 2,
                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(a2[14] << 29) >> 29),
                        v14);
  ConvertDMMScalingToGdiScaling(a3, &a9[4], v15);
  result = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v12) - 1;
  if ( !(_DWORD)result )
    goto LABEL_6;
  result = (unsigned int)(result - 1);
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 1 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v20[3] = v12;
        v20[4] = *a1;
        v20[5] = *a2;
        result = WdLogEvent5_WdWarning(v20);
LABEL_6:
        a9[3].Denominator = 1;
        goto LABEL_7;
      }
      a9[3].Denominator = 4;
    }
    else
    {
      a9[3].Denominator = 3;
    }
  }
  else
  {
    a9[3].Denominator = 2;
  }
LABEL_7:
  if ( a1[1] != 3 )
  {
    if ( a1[1] != 4 )
      return result;
    a9[5].Numerator |= 0x20u;
  }
  a9[5].Numerator |= 0x10u;
  a9[4].Denominator |= 1u;
  return result;
}
