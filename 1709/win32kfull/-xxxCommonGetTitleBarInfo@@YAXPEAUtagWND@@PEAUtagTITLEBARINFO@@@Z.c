/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C004A0DC (xxxGetTitleBarInfoEx.c)
 *     NtUserGetTitleBarInfo @ 0x1C0077520 (NtUserGetTitleBarInfo.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011DAE4 (xxxLoadSysDesktopMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01A1580 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  int v12; // r14d
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  int v16; // r13d
  int v17; // ebp
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r12d
  int DpiDependentMetric; // eax
  int v22; // r14d
  int v23; // eax
  int v24; // ebp
  int v25; // r14d
  int v26; // eax
  __int64 v27; // rbp
  int v28; // ecx
  char v29; // al
  char v30; // cl
  __int64 Prop; // rax
  int v32; // r8d
  __int64 v33; // r11
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // r11
  __int64 v37; // r8
  char v38; // dl
  __int64 SysDesktopMenu; // r11
  __int64 *v40; // rcx
  int v41; // eax
  __int64 v42; // rbp
  __int64 v43; // r10
  int v44; // esi
  __int64 v45; // rcx
  int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r11
  char v50; // cl
  char v51; // cl
  unsigned int v52; // [rsp+60h] [rbp+8h]

  v6 = *((unsigned int *)a2 + 5);
  LODWORD(v6) = v6 | 0x100000;
  *((_DWORD *)a2 + 5) = v6;
  if ( (*((_BYTE *)a1 + 70) & 0xC0) != 0xC0 )
  {
    *((_DWORD *)a2 + 5) = v6 | 0x8000;
    return;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 && (*((_BYTE *)a1 + 56) & 8) == 0 )
  {
    *((_DWORD *)a2 + 5) = v6 | 0x10000;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    return;
  }
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    v7 = *((_WORD *)a1 + 187);
    if ( !v7 )
      v7 = *((_WORD *)a1 + 186);
    v8 = v7;
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
         && (v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
         && (v6 = **(_QWORD **)(v9 + 8), (*(_DWORD *)(v6 + 52) & 1) != 0) )
  {
    v8 = 96;
  }
  else
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
    v8 = *(unsigned __int16 *)(v6 + 284);
  }
  v10 = 0LL;
  v11 = 0LL;
  *(_OWORD *)((char *)a2 + 4) = *((_OWORD *)a1 + 8);
  v12 = *((_DWORD *)a1 + 16);
  CurrentThread = KeGetCurrentThread();
  v52 = *((_DWORD *)a1 + 17);
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v16 = 0;
  if ( *(_DWORD *)(v11 + 608) <= 0x9900u )
    v16 = *(_DWORD *)(v11 + 624);
  if ( (v12 & 0x100) != 0 )
    v17 = 2;
  else
    v17 = (v12 & 0x20000) != 0;
  v18 = v52;
  v19 = v52 & 0xC00000;
  if ( (v52 & 0xC00000) != 0 || (v12 & 1) != 0 )
    ++v17;
  if ( (v16 & 0x10000000) != 0 )
  {
    v20 = 0;
  }
  else if ( (v16 & 0x20000000) != 0 )
  {
    v20 = 0;
  }
  else
  {
    v14 = gpsi;
    if ( v8 == *(unsigned __int16 *)(gpsi + 9974LL) )
    {
      v20 = *(_DWORD *)(gpsi + 2384LL);
    }
    else if ( v8 == 96 )
    {
      v20 = *(_DWORD *)(gpsi + 2504LL);
    }
    else
    {
      if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(v8) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
      else
        DpiDependentMetric = GetDpiDependentMetric(29LL, v8);
      v18 = v52;
      v20 = DpiDependentMetric;
    }
    v19 = v52 & 0xC00000;
  }
  if ( (v18 & 0x40000) != 0
    || v20 > 0 && (LOBYTE(v14) = v19 != 12582912, v19 == 12582912 || (v18 & 0x40000) != 0) && (v16 & 0x30000000) == 0 )
  {
    if ( (v16 & 0x10000000) != 0 )
    {
      v22 = 1;
    }
    else
    {
      v22 = (int)(v8 * *(_DWORD *)(Get96DpiServerInfo(v14, v18, 1LL) + 4) + 48) / 96;
      if ( (v16 & 0x20000000) != 0 )
      {
        if ( v8 == *(unsigned __int16 *)(gpsi + 9974LL) )
        {
          v23 = *(_DWORD *)(gpsi + 2384LL);
        }
        else if ( v8 == 96 )
        {
          v23 = *(_DWORD *)(gpsi + 2504LL);
        }
        else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(v8) == -1 )
        {
          v23 = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
        }
        else
        {
          v23 = GetDpiDependentMetric(29LL, v8);
        }
        v22 += v23;
      }
    }
    v17 += v20 + v22;
  }
  v24 = -v17;
  *((_DWORD *)a2 + 1) -= v24;
  *((_DWORD *)a2 + 3) += v24;
  *((_DWORD *)a2 + 2) -= v24;
  *((_DWORD *)a2 + 4) += v24;
  if ( *((char *)a1 + 64) >= 0 )
  {
    v27 = 120LL * (int)GetDpiDepSysMetCachePlateauSlot(v8);
    v28 = *(_DWORD *)(gpsi + v27 + 2276);
    if ( v28 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v8);
      v28 = *(_DWORD *)(gpsi + v27 + 2276);
      if ( v28 == -1 )
        v28 = 0;
    }
    v25 = *((_DWORD *)a2 + 2);
    v26 = v25 + v28;
  }
  else
  {
    v25 = *((_DWORD *)a2 + 2);
    v26 = v25 + GetDpiDependentMetric(22LL, v8);
  }
  *((_DWORD *)a2 + 4) = v26;
  v29 = *((_BYTE *)a1 + 70);
  if ( (v29 & 8) != 0 )
  {
    v30 = *((_BYTE *)a1 + 64);
    if ( v30 >= 0 )
    {
      if ( (v29 & 0xC0) != 0x40 && (v30 & 1) == 0 )
        goto LABEL_74;
      if ( (*((_BYTE *)a1 + 61) & 2) != 0 || *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) != 0x8002 )
      {
        Prop = GetProp((__int64)a1, *(_WORD *)(gpsi + 1356LL), 1);
        if ( Prop )
        {
          v34 = Prop == *(_QWORD *)(v33 + 6968);
LABEL_73:
          if ( v34 )
            goto LABEL_77;
          goto LABEL_74;
        }
        v35 = GetProp((__int64)a1, *(_WORD *)(v33 + 1358), v32);
        if ( !v35 || v35 == *(_QWORD *)(v36 + 6976) )
        {
          v37 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 168LL);
          if ( !v37 )
            goto LABEL_77;
          v34 = v37 == *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(v36 + 6968));
          goto LABEL_73;
        }
LABEL_74:
        if ( (*((_BYTE *)a1 + 66) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v25 - *((_DWORD *)a2 + 4) + 1;
        else
          *((_DWORD *)a2 + 1) += *((_DWORD *)a2 + 4) - v25 - 1;
      }
    }
  }
LABEL_77:
  v38 = *((_BYTE *)a1 + 70) & 8;
  if ( !v38 && (*((_BYTE *)a1 + 61) & 2) != 0 )
  {
    *((_DWORD *)a2 + 10) |= 0x8000u;
    goto LABEL_107;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 101LL) & 2) == 0 )
  {
    if ( v38 )
    {
      SysDesktopMenu = *((_QWORD *)a1 + 25);
      if ( SysDesktopMenu
        || (v40 = (__int64 *)(*((_QWORD *)a1 + 3) + 56LL), (SysDesktopMenu = *v40) != 0)
        || (*(_DWORD *)(gptiCurrent + 464LL) & 5) == 0 && (SysDesktopMenu = xxxLoadSysDesktopMenu(v40, 16LL)) != 0 )
      {
        v41 = *(_DWORD *)(SysDesktopMenu + 68);
        v42 = 0LL;
        if ( v41 )
        {
          v43 = *(_QWORD *)(SysDesktopMenu + 96);
          v44 = 0;
          if ( v41 > 0 )
          {
            do
            {
              v45 = *(_QWORD *)(v43 + 16);
              if ( v45 )
              {
                v46 = *(_DWORD *)(v43 + 8);
                if ( v46 == 61536 )
                  v10 = v43;
                v47 = MNLookUpItem(v45, 61536LL, 0LL, 0LL);
                if ( v47 )
                  goto LABEL_103;
                v48 = SysDesktopMenu;
                if ( v46 != 61536 )
                  v48 = v42;
                v42 = v48;
              }
              else if ( *(_DWORD *)(v43 + 8) == 61536 )
              {
                v47 = v43;
                goto LABEL_100;
              }
              ++v44;
              v43 += 152LL;
            }
            while ( v44 < *(_DWORD *)(SysDesktopMenu + 68) );
            if ( !v42 )
              goto LABEL_101;
            v47 = v10;
LABEL_100:
            if ( v47 )
            {
LABEL_103:
              if ( (*(_DWORD *)(v47 + 4) & 3) == 0 )
                goto LABEL_105;
              goto LABEL_104;
            }
          }
        }
LABEL_101:
        v47 = MNLookUpItem(SysDesktopMenu, 32864LL, 0LL, 0LL);
        if ( v47 )
          goto LABEL_103;
        v47 = MNLookUpItem(v49, 49264LL, 0LL, 0LL);
        if ( v47 )
          goto LABEL_103;
      }
    }
  }
LABEL_104:
  *((_DWORD *)a2 + 10) |= 1u;
LABEL_105:
  if ( (*((_BYTE *)a1 + 61) & 0x10) != 0 )
    *((_DWORD *)a2 + 10) |= 8u;
LABEL_107:
  v50 = *((_BYTE *)a1 + 70);
  if ( (v50 & 8) != 0 || (*((_BYTE *)a1 + 61) & 2) == 0 )
  {
    if ( (v50 & 1) == 0 )
    {
      if ( (v50 & 2) != 0 )
        *((_DWORD *)a2 + 8) |= 1u;
      else
        *((_DWORD *)a2 + 8) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 61) & 0x20) != 0 )
      *((_DWORD *)a2 + 8) |= 8u;
  }
  else
  {
    *((_DWORD *)a2 + 8) |= 0x8000u;
  }
  v51 = *((_BYTE *)a1 + 70);
  if ( (v51 & 8) != 0 || (*((_BYTE *)a1 + 61) & 2) == 0 )
  {
    if ( (v51 & 2) == 0 )
    {
      if ( (v51 & 1) != 0 )
        *((_DWORD *)a2 + 7) |= 1u;
      else
        *((_DWORD *)a2 + 7) |= 0x8000u;
    }
    if ( (*((_BYTE *)a1 + 61) & 0x40) != 0 )
      *((_DWORD *)a2 + 7) |= 8u;
  }
  else
  {
    *((_DWORD *)a2 + 7) |= 0x8000u;
  }
  if ( (*((_BYTE *)a1 + 65) & 4) == 0 || (*((_BYTE *)a1 + 70) & 3) != 0 )
  {
    *((_DWORD *)a2 + 9) |= 0x8000u;
  }
  else if ( *((char *)a1 + 61) < 0 )
  {
    *((_DWORD *)a2 + 9) |= 8u;
    *((_DWORD *)a2 + 6) = 0x8000;
    return;
  }
  *((_DWORD *)a2 + 6) = 0x8000;
}
