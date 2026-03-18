/*
 * XREFs of ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4
 * Callers:
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 * Callees:
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C004372C (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIServerInfoForDpi @ 0x1C010350C (GetDPIServerInfoForDpi.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     FindCharPosition @ 0x1C0239328 (FindCharPosition.c)
 *     GreGetTextCharacterExtra @ 0x1C0298794 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02987E4 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU *a1,
        struct tagWND *a2,
        unsigned int a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        struct tagPOINT *a7)
{
  unsigned int cx; // r14d
  LONG v12; // ebp
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  __int64 v23; // r11
  __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r11
  __int64 v28; // rbx
  bool v29; // zf
  __int64 *v30; // rbx
  int v31; // eax
  int v32; // eax
  __int64 v33; // r11
  __int64 v34; // r14
  __int64 v35; // r11
  int v36; // eax
  int v37; // eax
  __int64 v38; // r11
  __int64 v39; // rbx
  __int64 DPIMETRICSForDpi; // rbx
  __int64 v41; // rbx
  unsigned int CharPosition; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  _DWORD *v50; // rax
  struct tagSIZE v52; // [rsp+38h] [rbp-60h] BYREF
  __int64 v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+4Ch] [rbp-4Ch]
  int v55; // [rsp+50h] [rbp-48h]
  unsigned int v56; // [rsp+C0h] [rbp+28h]

  cx = 0;
  v12 = 0;
  if ( !a6 )
  {
    if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v12 = *(_DWORD *)(gpsi + 2100LL);
    }
    else if ( a3 == 96 )
    {
      v12 = *(_DWORD *)(gpsi + 2488LL);
    }
    else
    {
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a3);
      if ( DpiDepSysMetCachePlateauSlot == -1 )
      {
        v12 = ScaleSystemMetricForDPIWithoutCache(55LL, a3);
      }
      else
      {
        v15 = 112LL * DpiDepSysMetCachePlateauSlot;
        v12 = *(_DWORD *)(v14 + v15 + 3140);
        if ( v12 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(a3);
          v12 = *(_DWORD *)(v15 + gpsi + 3140);
          if ( v12 == -1 )
            v12 = 0;
        }
      }
    }
  }
  v53 = 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(a3) + 48) )
    {
      v53 = GreSelectFontInternal(a4);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi(a3);
      GreSetTextCharacterExtra(a4);
    }
  }
  v56 = MNIsOwnerDrawItem((__int64)a1, a5);
  v18 = v56;
  if ( *((_QWORD *)a5 + 13) )
  {
    v19 = MNIsUAHMenu((__int64)a1);
    if ( !v19 || (v17 = (unsigned int)v20, !(_DWORD)v20) || (_DWORD)v20 == 4 || (unsigned int)v20 >= 0xC )
    {
      if ( v20 == -1 )
        goto LABEL_23;
      if ( *((_DWORD *)a5 + 28) == -1 )
      {
        if ( (*((_DWORD *)a5 + 1) & 0x20000000) != 0 )
        {
          if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
          {
            v21 = *(_DWORD *)(gpsi + 2096LL);
          }
          else if ( a3 == 96 )
          {
            v21 = *(_DWORD *)(gpsi + 2484LL);
          }
          else
          {
            v22 = GetDpiDepSysMetCachePlateauSlot(a3);
            if ( v22 == -1 )
            {
              v21 = ScaleSystemMetricForDPIWithoutCache(54LL, a3);
            }
            else
            {
              v24 = 112 * (v22 + 28LL);
              v21 = *(_DWORD *)(v23 + v24);
              if ( v21 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(a3);
                v21 = *(_DWORD *)(v24 + gpsi);
                if ( v21 == -1 )
                  v21 = 0;
              }
            }
          }
          *((_DWORD *)a5 + 28) = v21;
          if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
          {
            v25 = *(_DWORD *)(gpsi + 2100LL);
          }
          else if ( a3 == 96 )
          {
            v25 = *(_DWORD *)(gpsi + 2488LL);
          }
          else
          {
            v26 = GetDpiDepSysMetCachePlateauSlot(a3);
            if ( v26 == -1 )
            {
              v25 = ScaleSystemMetricForDPIWithoutCache(55LL, a3);
            }
            else
            {
              v28 = 112LL * v26;
              v25 = *(_DWORD *)(v27 + v28 + 3140);
              if ( v25 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(a3);
                v25 = *(_DWORD *)(v28 + gpsi + 3140);
                if ( v25 == -1 )
                  v25 = 0;
              }
            }
          }
          v29 = *((_QWORD *)a5 + 13) == 1LL;
          v18 = v56;
          *((_DWORD *)a5 + 29) = v25;
          if ( v29 )
            *((_DWORD *)a5 + 28) += 2;
        }
        else
        {
          if ( v19 )
          {
LABEL_23:
            xxxMNGetBitmapSize(a1, a5, a2, a3, a4);
            if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a5) == -1 )
              goto LABEL_110;
            goto LABEL_24;
          }
          if ( (unsigned int)GreExtGetObjectW(v20) )
          {
            *((_DWORD *)a5 + 28) = v54;
            *((_DWORD *)a5 + 29) = v55;
          }
          else
          {
            v30 = (__int64 *)gpsi;
            if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
            {
              v31 = *(_DWORD *)(gpsi + 2096LL);
            }
            else if ( a3 == 96 )
            {
              v31 = *(_DWORD *)(gpsi + 2484LL);
            }
            else
            {
              v32 = GetDpiDepSysMetCachePlateauSlot(a3);
              if ( v32 == -1 )
              {
                v31 = ScaleSystemMetricForDPIWithoutCache(54LL, a3);
                v30 = (__int64 *)gpsi;
              }
              else
              {
                v34 = 112 * (v32 + 28LL);
                v31 = *(_DWORD *)(v33 + v34);
                if ( v31 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(a3);
                  v30 = (__int64 *)gpsi;
                  v31 = *(_DWORD *)(v34 + gpsi);
                  if ( v31 == -1 )
                    v31 = 0;
                }
              }
            }
            *((_DWORD *)a5 + 28) = v31;
            v35 = *v30;
            if ( a3 == *(unsigned __int16 *)(*v30 + 8678) )
            {
              v36 = *(_DWORD *)(v35 + 2100);
            }
            else if ( a3 == 96 )
            {
              v36 = *(_DWORD *)(v35 + 2488);
            }
            else
            {
              v37 = GetDpiDepSysMetCachePlateauSlot(a3);
              if ( v37 == -1 )
              {
                v36 = ScaleSystemMetricForDPIWithoutCache(55LL, a3);
              }
              else
              {
                v39 = 112LL * v37;
                v36 = *(_DWORD *)(v38 + v39 + 3140);
                if ( v36 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(a3);
                  v36 = *(_DWORD *)(v39 + gpsi + 3140);
                  if ( v36 == -1 )
                    v36 = 0;
                }
              }
            }
            v18 = v56;
            *((_DWORD *)a5 + 29) = v36;
          }
        }
      }
LABEL_24:
      cx = *((_DWORD *)a5 + 28);
      v17 = cx;
      if ( *((_DWORD *)a1 + 20) > cx )
        v17 = *((unsigned int *)a1 + 20);
      *((_DWORD *)a1 + 20) = v17;
      if ( a6 )
      {
        v12 = *((_DWORD *)a5 + 29);
      }
      else if ( *((_DWORD *)a5 + 29) > v12 )
      {
        v12 = *((_DWORD *)a5 + 29);
      }
      goto LABEL_85;
    }
  }
  if ( !v56 )
    goto LABEL_86;
  xxxMNGetBitmapSize(a1, a5, a2, a3, a4);
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a5) == -1 )
    goto LABEL_110;
  cx = *((_DWORD *)a5 + 28);
  if ( a6 )
  {
    v12 = *((_DWORD *)a5 + 29);
    v17 = *(unsigned int *)(GetDPIMETRICSForDpi(a3) + 8);
    cx += 2 * v17;
  }
  else if ( (unsigned int)MNIsUAHMenu((__int64)a1) )
  {
    v12 = *((_DWORD *)a5 + 29);
  }
LABEL_85:
  if ( !v18 )
  {
LABEL_86:
    if ( *((_QWORD *)a5 + 5) )
    {
      v52 = 0LL;
      if ( a6 )
      {
        DPIMETRICSForDpi = GetDPIMETRICSForDpi(a3);
        if ( v12 <= *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 12) + *(_DWORD *)(DPIMETRICSForDpi + 20) + 2 )
        {
          v41 = GetDPIMETRICSForDpi(a3);
          v12 = *(_DWORD *)(v41 + 20) + *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 12) + 2;
        }
        v18 = v56;
      }
      CharPosition = FindCharPosition(*((_QWORD *)a5 + 5), 9LL);
      xxxPSMGetTextExtent(a4, *((unsigned __int16 **)a5 + 5), CharPosition, &v52);
      if ( cx )
        cx += v52.cx + 2;
      else
        cx = v52.cx;
    }
    if ( !a6 )
      goto LABEL_105;
    if ( (*((_DWORD *)a1 + 14) & 0x84000000) == 0x80000000 )
      goto LABEL_104;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v43, v44, v45) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v46, v47, v48) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v49 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v50 = (_DWORD *)(gpsi + 8204LL);
LABEL_103:
        cx += *v50;
LABEL_104:
        cx += 6;
        v12 += 2;
        goto LABEL_105;
      }
    }
    else
    {
      v49 = (_QWORD *)gpsi;
    }
    v50 = (_DWORD *)(*v49 + 6716LL);
    goto LABEL_103;
  }
LABEL_105:
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a5) != -1 && (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( v53 )
      GreSelectFontInternal(a4);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_110:
  a7->y = v12;
  a7->x = cx;
  return v18;
}
