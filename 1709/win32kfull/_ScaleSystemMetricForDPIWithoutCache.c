/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C007C400 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00982B4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C009C178 (_AdjustWindowRectExForDpi.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01A1580 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v4; // ebx
  __int64 v5; // rax
  INT v6; // edi
  __int64 v7; // rcx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  INT DpiDependentMetric; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // edi
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v29; // edi
  int v30; // ebx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax

  v3 = a2;
  v4 = a1;
  if ( (unsigned int)a1 <= 0x1D && (int)a2 > 0 )
  {
    if ( (int)a1 <= 16 )
    {
      if ( (_DWORD)a1 != 16 )
      {
        if ( (_DWORD)a1 == 2 )
        {
          v7 = 13LL;
        }
        else
        {
          if ( (int)a1 <= 6 )
            goto LABEL_29;
          if ( (int)a1 <= 8 )
          {
            if ( (unsigned __int16)a2 >= 0x90u )
            {
              if ( (unsigned __int16)a2 >= 0xC0u )
              {
                if ( (unsigned __int16)a2 >= 0x120u )
                  return (unsigned int)((unsigned __int16)a2 < 0x180u ? 96 : 128);
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
          if ( (_DWORD)a1 != 9 )
          {
            if ( (_DWORD)a1 == 14 || (_DWORD)a1 == 15 )
            {
              v5 = Get96DpiServerInfo(a1, a2, a3);
              return (unsigned int)(EngMulDiv(*(_DWORD *)(v5 + 4), v3, 96) + 3);
            }
LABEL_29:
            DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
            v6 = EngMulDiv(DpiDependentMetric, v3, 96);
            if ( v4 > 19 )
            {
              v23 = v4 - 23;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( !v24 )
                {
                  if ( v6 > *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 44) + 2 )
                    return (unsigned int)v6;
                  v22 = *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 44);
                  return (unsigned int)(v22 + 2);
                }
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    if ( v26 == 3 )
                    {
                      v27 = 100;
                      if ( v6 < 100 )
                        v27 = v6;
                      if ( v27 <= 0 )
                      {
                        return 0;
                      }
                      else if ( v6 >= 100 )
                      {
                        return 100;
                      }
                    }
                  }
                  else
                  {
                    DPIMETRICSForDpi = GetDPIMETRICSForDpi(v3);
                    if ( v6 <= *(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 2 )
                      return (unsigned int)(*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 2);
                  }
                  return (unsigned int)v6;
                }
              }
            }
            else
            {
              if ( v4 == 19 )
              {
                v18 = 6;
LABEL_39:
                if ( v6 > (int)ScaleSystemMetricForDPIWithoutCache(v18, v3) )
                  return (unsigned int)v6;
                return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v18, v3);
              }
              if ( v4 > 1 )
              {
                if ( v4 <= 2 )
                  return (unsigned int)v6;
                if ( v4 > 4 )
                {
                  if ( v4 <= 9 )
                    return (unsigned int)v6;
                  if ( v4 > 12 )
                  {
                    if ( v4 != 13 )
                    {
                      if ( v4 != 18 )
                        return (unsigned int)v6;
                      v18 = 5;
                      goto LABEL_39;
                    }
                    if ( v6 > *(_DWORD *)(GetDPIServerInfoForDpi(v3, v16, v17) + 20) + 2 )
                      return (unsigned int)v6;
                    v22 = *(_DWORD *)(GetDPIServerInfoForDpi(v3, v20, v21) + 20);
                    return (unsigned int)(v22 + 2);
                  }
                }
              }
            }
            if ( v6 <= 8 )
              return 8;
            return (unsigned int)v6;
          }
          v7 = 26LL;
        }
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v7, a2) + 1);
      }
      v8 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi((unsigned int)a2, a2, a3) + 16);
      v9 = ScaleSystemMetricForDPIWithoutCache(29LL, v3) + v8;
      v10 = 2 * (ScaleSystemMetricForDPIWithoutCache(14LL, v3) + v9);
      v11 = ScaleSystemMetricForDPIWithoutCache(12LL, v3);
      v12 = 13LL;
      v13 = v11 + 4 + v10 + 2 * v11;
      return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v12, v3) + v13);
    }
    switch ( (_DWORD)a1 )
    {
      case 0x11:
        v36 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
        v37 = ScaleSystemMetricForDPIWithoutCache(15LL, v3);
        v12 = 2LL;
        v13 = 2 * (v37 + v36);
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v12, v3) + v13);
      case 0x14:
        v29 = 5;
        v34 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
        v35 = ScaleSystemMetricForDPIWithoutCache(5LL, v3);
        v32 = v3;
        if ( v34 < v35 / 2 )
        {
          v33 = 12LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v33, v32) - 2);
        }
        break;
      case 0x15:
        v29 = 6;
        v30 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
        v31 = ScaleSystemMetricForDPIWithoutCache(6LL, v3);
        v32 = v3;
        if ( v30 < v31 / 2 )
        {
          v33 = 13LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v33, v32) - 2);
        }
        break;
      case 0x16:
        v7 = 24LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v7, a2) + 1);
      default:
        if ( (unsigned int)(a1 - 27) <= 1 )
        {
          v14 = GetDPIMETRICSForDpi((unsigned int)a2);
          return (unsigned int)(*(_DWORD *)(v14 + 20) + *(_DWORD *)(v14 + 12) - 1);
        }
        goto LABEL_29;
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v29, v32) / 2);
  }
  UserSetLastError(87LL, a2);
  return 0LL;
}
