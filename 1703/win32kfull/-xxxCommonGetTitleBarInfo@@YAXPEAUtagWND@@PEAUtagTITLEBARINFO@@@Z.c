/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C0041080 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00E7EA8 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     GetWindowFrameMetricInternal @ 0x1C00418B0 (GetWindowFrameMetricInternal.c)
 *     MNLookUpItem @ 0x1C004192C (MNLookUpItem.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BE4 (xxxLoadSysDesktopMenu.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // ecx
  unsigned __int16 v5; // ax
  unsigned int v6; // r15d
  __int64 v7; // rsi
  int v8; // r13d
  __int64 *ThreadWin32Thread; // rax
  unsigned int v10; // r12d
  int v11; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v17; // ebp
  int v18; // esi
  int WindowFrameMetricInternal; // r12d
  int v20; // r14d
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // r10d
  char v25; // al
  char v26; // cl
  char v27; // dl
  __int64 SysDesktopMenu; // r10
  int v29; // eax
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // r11
  int v33; // ebp
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int8 v36; // dl
  unsigned __int8 v37; // dl
  __int64 v38; // rax
  int v39; // eax
  __int64 *v40; // rcx
  __int64 Prop; // rax
  __int64 v42; // r8
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // r11
  __int64 v46; // r8
  int *v47; // rcx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v49; // r11
  __int64 v50; // rbp
  int v51; // eax
  __int64 v52; // r11
  __int64 v53; // rsi
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // r10
  int v57; // [rsp+50h] [rbp+8h]

  v4 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  if ( (*((_BYTE *)a1 + 70) & 0xC0) != 0xC0 )
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
    return;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 && (*((_BYTE *)a1 + 56) & 8) == 0 )
  {
    *((_DWORD *)a2 + 5) = v4 | 0x10000;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    return;
  }
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    v5 = *((_WORD *)a1 + 187);
    if ( !v5 )
      v5 = *((_WORD *)a1 + 186);
    v6 = v5;
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
         && (v38 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 52LL) & 1) != 0 )
  {
    v6 = 96;
  }
  else
  {
    v6 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  v7 = 0LL;
  *(_OWORD *)((char *)a2 + 4) = *((_OWORD *)a1 + 8);
  v8 = *((_DWORD *)a1 + 16);
  v57 = *((_DWORD *)a1 + 17);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  if ( *(_DWORD *)(v7 + 552) > 0x9900u )
    v10 = 0;
  else
    v10 = *(_DWORD *)(v7 + 568);
  LOBYTE(v11) = 18;
  v12 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v12 )
  {
    v15 = *v12;
    if ( *v12 )
    {
      if ( *(_QWORD *)(v15 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*v12);
      if ( *(_DWORD *)(v15 + 340) )
      {
        LOBYTE(v11) = *(_DWORD *)(v15 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13);
        if ( CurrentProcessWin32Process )
          v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  v17 = v10 | 0x2000000;
  if ( (v11 & 0xF) == 0 )
    v17 = v10;
  if ( (v8 & 0x100) != 0 )
    v18 = 2;
  else
    v18 = (v8 & 0x20000) != 0;
  LOBYTE(v14) = (v57 & 0xC00000) == 0;
  if ( ((unsigned __int8)v14 & ((v8 & 1) == 0)) == 0 )
    ++v18;
  WindowFrameMetricInternal = GetWindowFrameMetricInternal(v14, v17, v6);
  if ( (v57 & 0x40000) != 0
    || WindowFrameMetricInternal > 0
    && ((v57 & 0xC00000) == 12582912 || (v57 & 0x40000) != 0)
    && (v17 & 0x30000000) == 0 )
  {
    if ( (v17 & 0x10000000) != 0 )
    {
      v20 = 1;
    }
    else
    {
      v20 = (int)(v6 * *(_DWORD *)Get96DpiServerInfo() + 48) / 96;
      if ( (v17 & 0x20000000) != 0 )
      {
        if ( v6 )
        {
          if ( v6 == *(unsigned __int16 *)(gpsi + 8678LL) )
          {
            v39 = *(_DWORD *)(gpsi + 2248LL);
          }
          else if ( v6 == 96 )
          {
            v39 = *(_DWORD *)(gpsi + 2636LL);
          }
          else
          {
            DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v6);
            if ( DpiDepSysMetCachePlateauSlot == -1 )
            {
              v39 = ScaleSystemMetricForDPIWithoutCache(92LL, v6);
            }
            else
            {
              v50 = 112LL * DpiDepSysMetCachePlateauSlot + 3152;
              v39 = *(_DWORD *)(v49 + v50);
              if ( v39 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(v6);
                v39 = *(_DWORD *)(gpsi + v50);
                if ( v39 == -1 )
                  v39 = 0;
              }
            }
          }
        }
        else
        {
          if ( (v17 & 0x2000000) != 0 )
            v47 = (int *)(gpsi + 2248LL);
          else
            v47 = (int *)(gpsi + 2636LL);
          v39 = *v47;
        }
        v20 += v39;
      }
    }
    v18 += v20 + WindowFrameMetricInternal;
  }
  v21 = -v18;
  *((_DWORD *)a2 + 1) -= v21;
  *((_DWORD *)a2 + 3) += v21;
  *((_DWORD *)a2 + 2) -= v21;
  *((_DWORD *)a2 + 4) += v21;
  v22 = *(unsigned __int16 *)(gpsi + 8678LL);
  if ( *((char *)a1 + 64) < 0 )
  {
    if ( v6 == v22 )
    {
      v23 = *(_DWORD *)(gpsi + 2084LL);
      goto LABEL_31;
    }
    if ( v6 == 96 )
    {
      v23 = *(_DWORD *)(gpsi + 2472LL);
      goto LABEL_31;
    }
    v51 = GetDpiDepSysMetCachePlateauSlot(v6);
    if ( v51 != -1 )
    {
      v53 = 112LL * v51 + 3124;
LABEL_126:
      v23 = *(_DWORD *)(v53 + v52);
      if ( v23 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v6);
        v23 = *(_DWORD *)(v53 + gpsi);
        if ( v23 == -1 )
          v23 = 0;
      }
      goto LABEL_31;
    }
    v54 = 51LL;
  }
  else
  {
    if ( v6 == v22 )
    {
      v23 = *(_DWORD *)(gpsi + 1896LL);
      goto LABEL_31;
    }
    if ( v6 == 96 )
    {
      v23 = *(_DWORD *)(gpsi + 2284LL);
      goto LABEL_31;
    }
    v55 = GetDpiDepSysMetCachePlateauSlot(v6);
    if ( v55 != -1 )
    {
      v53 = 112LL * v55 + 3052;
      goto LABEL_126;
    }
    v54 = 4LL;
  }
  v23 = ScaleSystemMetricForDPIWithoutCache(v54, v6);
LABEL_31:
  v24 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 4) = v24 + v23;
  v25 = *((_BYTE *)a1 + 70);
  if ( (v25 & 8) != 0 )
  {
    v26 = *((_BYTE *)a1 + 64);
    if ( v26 >= 0 )
    {
      if ( (v25 & 0xC0) != 0x40 && (v26 & 1) == 0 )
        goto LABEL_35;
      if ( (*((_BYTE *)a1 + 61) & 2) != 0 || *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) != 0x8002 )
      {
        Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
        if ( Prop )
        {
          if ( Prop == *(_QWORD *)(v43 + 5672) )
            goto LABEL_37;
          goto LABEL_35;
        }
        if ( (v44 = GetProp(a1, *(unsigned __int16 *)(v43 + 1358), v42)) != 0 && v44 != *(_QWORD *)(v45 + 5680)
          || (v46 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 160LL)) != 0
          && v46 != *(_QWORD *)(16LL * (unsigned __int16)*(_DWORD *)(v45 + 5672) + gpKernelHandleTable) )
        {
LABEL_35:
          if ( (*((_BYTE *)a1 + 66) & 0x40) != 0 )
            *((_DWORD *)a2 + 3) += v24 - *((_DWORD *)a2 + 4) + 1;
          else
            *((_DWORD *)a2 + 1) += *((_DWORD *)a2 + 4) - v24 - 1;
        }
      }
    }
  }
LABEL_37:
  v27 = *((_BYTE *)a1 + 70) & 8;
  if ( ((*((_BYTE *)a1 + 61) >> 1) & (v27 == 0)) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 93LL) & 2) != 0 )
      goto LABEL_74;
    if ( !v27 )
      goto LABEL_74;
    SysDesktopMenu = *((_QWORD *)a1 + 25);
    if ( !SysDesktopMenu )
    {
      v40 = (__int64 *)(*((_QWORD *)a1 + 3) + 56LL);
      SysDesktopMenu = *v40;
      if ( !*v40 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 5) != 0 )
          goto LABEL_74;
        SysDesktopMenu = xxxLoadSysDesktopMenu(v40, 16LL);
        if ( !SysDesktopMenu )
          goto LABEL_74;
      }
    }
    v29 = *(_DWORD *)(SysDesktopMenu + 68);
    v30 = 0LL;
    v31 = 0LL;
    if ( !v29 )
      goto LABEL_145;
    v32 = *(_QWORD *)(SysDesktopMenu + 96);
    v33 = 0;
    if ( v29 <= 0 )
      goto LABEL_145;
    do
    {
      v34 = *(_QWORD *)(v32 + 16);
      if ( v34 )
      {
        if ( *(_DWORD *)(v32 + 8) == 61536 )
        {
          v31 = SysDesktopMenu;
          v30 = v32;
        }
        v35 = MNLookUpItem(v34, 61536LL, 0LL, 0LL);
        if ( v35 )
          goto LABEL_47;
      }
      else if ( *(_DWORD *)(v32 + 8) == 61536 )
      {
        v35 = v32;
        goto LABEL_144;
      }
      ++v33;
      v32 += 152LL;
    }
    while ( v33 < *(_DWORD *)(SysDesktopMenu + 68) );
    if ( !v31 )
      goto LABEL_145;
    v35 = v30;
LABEL_144:
    if ( !v35 )
    {
LABEL_145:
      v35 = MNLookUpItem(SysDesktopMenu, 32864LL, 0LL, 0LL);
      if ( !v35 )
      {
        v35 = MNLookUpItem(v56, 49264LL, 0LL, 0LL);
        if ( !v35 )
        {
LABEL_74:
          *((_DWORD *)a2 + 10) |= 1u;
LABEL_48:
          if ( (*((_BYTE *)a1 + 61) & 0x10) != 0 )
            *((_DWORD *)a2 + 10) |= 8u;
          goto LABEL_50;
        }
      }
    }
LABEL_47:
    if ( (*(_DWORD *)(v35 + 4) & 3) == 0 )
      goto LABEL_48;
    goto LABEL_74;
  }
  *((_DWORD *)a2 + 10) |= 0x8000u;
LABEL_50:
  v36 = *((_BYTE *)a1 + 70);
  if ( ((*((_BYTE *)a1 + 61) >> 1) & (unsigned __int8)~(v36 >> 3) & 1) != 0 )
  {
    *((_DWORD *)a2 + 8) |= 0x8000u;
  }
  else
  {
    if ( (v36 & 1) == 0 )
    {
      if ( (v36 & 2) != 0 )
        *((_DWORD *)a2 + 8) |= 1u;
      else
        *((_DWORD *)a2 + 8) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 61) & 0x20) != 0 )
      *((_DWORD *)a2 + 8) |= 8u;
  }
  v37 = *((_BYTE *)a1 + 70);
  if ( ((*((_BYTE *)a1 + 61) >> 1) & (unsigned __int8)~(v37 >> 3) & 1) != 0 )
  {
    *((_DWORD *)a2 + 7) |= 0x8000u;
  }
  else
  {
    if ( (v37 & 2) == 0 )
    {
      if ( (v37 & 1) != 0 )
        *((_DWORD *)a2 + 7) |= 1u;
      else
        *((_DWORD *)a2 + 7) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 61) & 0x40) != 0 )
      *((_DWORD *)a2 + 7) |= 8u;
  }
  if ( ((*((_BYTE *)a1 + 65) >> 2) & ((*((_BYTE *)a1 + 70) & 3) == 0)) != 0 )
  {
    if ( *((char *)a1 + 61) < 0 )
      *((_DWORD *)a2 + 9) |= 8u;
  }
  else
  {
    *((_DWORD *)a2 + 9) |= 0x8000u;
  }
  *((_DWORD *)a2 + 6) = 0x8000;
}
