/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     AdjustWindowRectExInternal @ 0x1C003E718 (AdjustWindowRectExInternal.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetricInternal @ 0x1C00418B0 (GetWindowFrameMetricInternal.c)
 *     GetResizeBorderWidthInternal @ 0x1C0042D24 (GetResizeBorderWidthInternal.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     GetWindowNCMetricsForDpi @ 0x1C0044D04 (GetWindowNCMetricsForDpi.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F6100 (_SystemParametersInfoForDpi.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C010350C (GetDPIServerInfoForDpi.c)
 *     GetDpiDepSysMetCacheMetricSlot @ 0x1C01C401C (GetDpiDepSysMetCacheMetricSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, unsigned int a2)
{
  __int64 v2; // rdi
  INT v4; // edx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *DPIMETRICSForDpi; // rbp
  __int64 DPIServerInfoForDpi; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  INT *v17; // rax
  unsigned int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // eax
  unsigned int v27; // edi
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-8h]

  v2 = a1;
  if ( (unsigned int)GetDpiDepSysMetCacheMetricSlot(a1) == -1 )
  {
    if ( (unsigned int)v2 <= 0x60 )
      return *(unsigned int *)(gpsi + 4 * v2 + 1880);
    goto LABEL_4;
  }
  if ( (int)a2 <= 0 )
  {
LABEL_4:
    UserSetLastError(87LL);
    return 0LL;
  }
  v7 = EngMulDiv(*(_DWORD *)(gpsi + 4 * v2 + 2268), v4, 96);
  v10 = (unsigned int)(v2 - 31);
  if ( (unsigned int)v10 > 0x29 || (v11 = 0x30001400001LL, !_bittest64(&v11, v10)) )
  {
    if ( (int)v2 <= 38 )
    {
      if ( (_DWORD)v2 != 38 )
      {
        if ( (int)v2 > 15 )
        {
          if ( (int)v2 < 20 )
            return v7;
          if ( (int)v2 > 21 && (_DWORD)v2 != 30 )
          {
            if ( (_DWORD)v2 == 32 || (_DWORD)v2 == 33 )
            {
              v17 = (INT *)Get96DpiServerInfo();
              return (unsigned int)(EngMulDiv(*v17, a2, 96) + 3);
            }
            return v7;
          }
          goto LABEL_62;
        }
        if ( (_DWORD)v2 == 15 )
        {
          v16 = 55LL;
        }
        else
        {
          if ( (int)v2 < 2 )
            return v7;
          if ( (int)v2 <= 3 )
          {
LABEL_62:
            if ( (int)v7 <= 8 )
              return 8;
            return v7;
          }
          if ( (_DWORD)v2 != 4 )
          {
            if ( (int)v2 <= 8 )
              return v7;
            if ( (int)v2 > 10 )
            {
              if ( (unsigned int)(v2 - 13) <= 1 )
              {
                if ( (unsigned __int16)a2 >= 0x90u )
                {
                  if ( (unsigned __int16)a2 >= 0xC0u )
                  {
                    if ( (unsigned __int16)a2 >= 0x120u )
                      return (unsigned __int16)a2 < 0x180u ? 96 : 128;
                    else
                      return 64;
                  }
                  else
                  {
                    return 48;
                  }
                }
                else
                {
                  return 32;
                }
              }
              return v7;
            }
            goto LABEL_62;
          }
          v16 = 31LL;
        }
        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v16, a2) + 1;
      }
      v18 = 11;
      goto LABEL_72;
    }
    v19 = v2 - 39;
    if ( !v19 )
    {
      v18 = 12;
LABEL_72:
      if ( (int)v7 > (int)ScaleSystemMetricForDPIWithoutCache(v18, a2) )
        return v7;
      return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v18, a2);
    }
    v20 = v19 - 10;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 2;
            if ( v24 )
            {
              v25 = v24 - 4;
              if ( v25 )
              {
                if ( v25 == 34 )
                {
                  v26 = 100;
                  if ( (int)v7 < 100 )
                    v26 = v7;
                  if ( v26 <= 0 )
                  {
                    return 0;
                  }
                  else if ( (int)v7 >= 100 )
                  {
                    return 100;
                  }
                }
              }
              else
              {
                return (unsigned int)ScaleSystemMetricForDPIWithoutCache(31LL, a2) + 6;
              }
              return v7;
            }
          }
          goto LABEL_62;
        }
        v16 = 53LL;
        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v16, a2) + 1;
      }
      v27 = 12;
      v28 = ScaleSystemMetricForDPIWithoutCache(31LL, a2) - 2;
      v29 = ScaleSystemMetricForDPIWithoutCache(12LL, a2);
      v30 = a2;
      if ( v28 < v29 / 2 )
      {
        v31 = 31LL;
        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v31, v30) - 2;
      }
    }
    else
    {
      v27 = 11;
      v32 = ScaleSystemMetricForDPIWithoutCache(30LL, a2) - 2;
      v33 = ScaleSystemMetricForDPIWithoutCache(11LL, a2);
      v30 = a2;
      if ( v32 < v33 / 2 )
      {
        v31 = 30LL;
        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v31, v30) - 2;
      }
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v27, v30) / 2);
  }
  DPIMETRICSForDpi = (_DWORD *)GetDPIMETRICSForDpi(a2, v6, v8, v9, v34);
  DPIServerInfoForDpi = GetDPIServerInfoForDpi(a2);
  if ( (_DWORD)v2 == 31 )
  {
    v15 = *(_DWORD *)(DPIServerInfoForDpi + 20) + 2;
    if ( (int)v7 <= v15 )
      return (unsigned int)v15;
    return v7;
  }
  if ( (_DWORD)v2 != 53 )
  {
    if ( (_DWORD)v2 == 55 )
    {
      if ( (int)v7 <= DPIMETRICSForDpi[5] + DPIMETRICSForDpi[3] + 2 )
        return (unsigned int)(DPIMETRICSForDpi[5] + DPIMETRICSForDpi[3] + 2);
    }
    else if ( (unsigned int)(v2 - 71) <= 1 )
    {
      return (unsigned int)(DPIMETRICSForDpi[5] + DPIMETRICSForDpi[3] - 1);
    }
    return v7;
  }
  v14 = DPIMETRICSForDpi[11] + 2;
  if ( (int)v7 <= v14 )
    return (unsigned int)v14;
  return v7;
}
