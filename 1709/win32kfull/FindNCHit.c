/*
 * XREFs of FindNCHit @ 0x1C0111248
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     SizeBoxHwnd @ 0x1C023A580 (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned int WindowDpiLastNotify; // edi
  int v5; // r14d
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r9
  __int128 v8; // xmm6
  __int64 v10; // rax
  int v11; // eax
  int v12; // r14d
  int v13; // r13d
  _DWORD *v14; // r9
  int v15; // r10d
  unsigned __int8 v16; // dl
  int v17; // r13d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  int WindowBordersForDpi; // eax
  int v25; // edx
  int v26; // eax
  unsigned __int8 v27; // al
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // ebx
  int v37; // r14d
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // r13d
  int v42; // ecx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v44; // rcx
  int v45; // eax
  int DpiDependentMetric; // eax
  char v47; // r8
  int v48; // r14d
  int v49; // r14d
  char v50; // al
  __int64 v51; // rax
  int v52; // eax
  __int128 v53; // [rsp+38h] [rbp-29h] BYREF
  int v54; // [rsp+48h] [rbp-19h]
  int v55; // [rsp+4Ch] [rbp-15h]
  unsigned __int64 v56; // [rsp+50h] [rbp-11h]
  int v57; // [rsp+58h] [rbp-9h]
  __int64 v58; // [rsp+60h] [rbp-1h]
  __int128 v59; // [rsp+68h] [rbp+7h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
  }
  v5 = (__int16)a2;
  LODWORD(v56) = (__int16)a2;
  HIDWORD(v56) = SHIWORD(a2);
  v6 = v56;
  v55 = (__int16)a2;
  if ( !PtInRect((_DWORD *)(a1 + 128), v56) )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    v11 = v7[3] - 4;
    v12 = v7[2] - 4;
    v13 = v7[1] + 4;
    v54 = *v7 + 4;
    LODWORD(v53) = v54;
    *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v12, v13);
    HIDWORD(v53) = v11;
    if ( !PtInRect(&v53, v56) )
      return 2LL;
LABEL_92:
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      v38 = *v14 + *(_DWORD *)(a1 + 136) - v55;
    else
      v38 = v55;
    if ( v15 < v13 )
      return 2LL;
    v39 = *(unsigned __int16 *)(gpsi + 9974LL);
    if ( *(char *)(a1 + 64) >= 0 )
    {
      if ( WindowDpiLastNotify == v39 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2276LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2396LL);
      }
      else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(2LL, WindowDpiLastNotify);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
      }
      v41 = DpiDependentMetric + v13;
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 9974LL) )
      {
        v42 = *(_DWORD *)(gpsi + 2316LL);
        goto LABEL_125;
      }
      if ( WindowDpiLastNotify == 96 )
      {
        v42 = *(_DWORD *)(gpsi + 2436LL);
        goto LABEL_125;
      }
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      v44 = 12LL;
    }
    else
    {
      if ( WindowDpiLastNotify == v39 )
      {
        v40 = *(_DWORD *)(gpsi + 2356LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v40 = *(_DWORD *)(gpsi + 2476LL);
      }
      else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
      {
        v40 = ScaleSystemMetricForDPIWithoutCache(22LL, WindowDpiLastNotify);
      }
      else
      {
        v40 = GetDpiDependentMetric(22LL, WindowDpiLastNotify);
      }
      v41 = v40 + v13;
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 9974LL) )
      {
        v42 = *(_DWORD *)(gpsi + 2360LL);
        goto LABEL_125;
      }
      if ( WindowDpiLastNotify == 96 )
      {
        v42 = *(_DWORD *)(gpsi + 2480LL);
        goto LABEL_125;
      }
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      v44 = 23LL;
    }
    if ( DpiDepSysMetCachePlateauSlot == -1 )
      v45 = ScaleSystemMetricForDPIWithoutCache(v44, WindowDpiLastNotify);
    else
      v45 = GetDpiDependentMetric(v44, WindowDpiLastNotify);
    v42 = v45;
LABEL_125:
    if ( SHIDWORD(v56) >= v41 && (*(_BYTE *)(a1 + 56) & 1) != 0 )
      return 5LL;
    if ( v38 >= v54 && v38 < v12 && SHIDWORD(v56) < v41 )
    {
      v47 = *(_BYTE *)(a1 + 70);
      if ( (v47 & 8) != 0 )
      {
        if ( v38 < v42 + v54 )
          return (unsigned int)((unsigned int)HasCaptionIcon(a1) != 0) + 2;
      }
      else if ( (*(_BYTE *)(a1 + 61) & 2) != 0 )
      {
        return 2LL;
      }
      v48 = v12 - v42;
      if ( v38 >= v48 )
        return 20LL;
      if ( *(char *)(a1 + 64) >= 0 )
      {
        if ( (v47 & 3) != 0 )
        {
          v49 = v48 - v42;
          if ( v38 >= v49 )
            return 9LL;
          if ( v38 >= v49 - v42 )
            return 8LL;
        }
        else if ( (*(_BYTE *)(a1 + 65) & 4) != 0 && v38 >= v48 - v42 )
        {
          return 21LL;
        }
      }
    }
    return 2LL;
  }
  v8 = *(_OWORD *)(a1 + 144);
  v59 = v8;
  if ( PtInRect(&v59, v56) )
    return 1LL;
  v16 = *(_BYTE *)(a1 + 65);
  if ( (v16 & 2) != 0 )
  {
    LODWORD(v53) = v59 - 2;
    v17 = HIDWORD(v59) + 2;
    v58 = (unsigned int)(DWORD1(v59) - 2);
    HIDWORD(v53) = HIDWORD(v59) + 2;
    DWORD2(v53) = DWORD2(v59) + 2;
    DWORD1(v53) = DWORD1(v59) - 2;
  }
  else
  {
    v53 = v8;
    v17 = HIDWORD(v8);
    v58 = DWORD1(v8);
  }
  if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
  {
    v18 = *(unsigned __int16 *)(gpsi + 9974LL);
    if ( ((v16 ^ *(_BYTE *)(a1 + 66)) & 0x40) != 0 )
    {
      if ( WindowDpiLastNotify == v18 )
      {
        v19 = *(_DWORD *)(gpsi + 2268LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v19 = *(_DWORD *)(gpsi + 2388LL);
      }
      else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
      {
        v19 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
      }
      else
      {
        v19 = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
      }
      LODWORD(v53) = v53 - v19;
    }
    else
    {
      if ( WindowDpiLastNotify == v18 )
      {
        v20 = *(_DWORD *)(gpsi + 2268LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v20 = *(_DWORD *)(gpsi + 2388LL);
      }
      else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
      {
        v20 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
      }
      else
      {
        v20 = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
      }
      DWORD2(v53) += v20;
    }
  }
  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
  {
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 9974LL) )
    {
      v21 = *(_DWORD *)(gpsi + 2272LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v21 = *(_DWORD *)(gpsi + 2392LL);
    }
    else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
    {
      v21 = ScaleSystemMetricForDPIWithoutCache(1LL, WindowDpiLastNotify);
    }
    else
    {
      v21 = GetDpiDependentMetric(1LL, WindowDpiLastNotify);
    }
    v17 += v21;
    HIDWORD(v53) = v17;
  }
  if ( PtInRect(&v53, v56) )
  {
    if ( (*(_BYTE *)(a1 + 65) & 2) != 0 )
    {
      LODWORD(v53) = v53 + 2;
      DWORD2(v53) -= 2;
      DWORD1(v53) = v58 + 2;
      HIDWORD(v53) = v17 - 2;
      if ( !PtInRect(&v53, v6) )
        return 18LL;
    }
    v50 = *(_BYTE *)(a1 + 56);
    if ( (v50 & 4) == 0 || SHIDWORD(v56) < SHIDWORD(v59) )
      return 7LL;
    if ( (v50 & 2) != 0 )
    {
      v51 = SizeBoxHwnd(a1);
      if ( v5 >= SDWORD2(v59) )
      {
        v52 = v51 != 0 ? 0xD : 0;
        return (unsigned int)(v52 + 4);
      }
      if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 && v5 < (int)v59 )
      {
        v52 = v51 != 0 ? 0xC : 0;
        return (unsigned int)(v52 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(a1 + 68),
                          *(_DWORD *)(a1 + 64),
                          v22,
                          v23,
                          WindowDpiLastNotify);
  v25 = -WindowBordersForDpi;
  v26 = *(_DWORD *)(a1 + 128) + WindowBordersForDpi;
  v12 = v25 + *(_DWORD *)(a1 + 136);
  v13 = *(_DWORD *)(a1 + 132) - v25;
  HIDWORD(v53) = v25 + *(_DWORD *)(a1 + 140);
  v57 = HIDWORD(v53);
  v54 = v26;
  LODWORD(v53) = v26;
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v12, v13);
  if ( PtInRect(&v53, v6) )
  {
    v15 = HIDWORD(v56);
    if ( SHIDWORD(v56) >= (int)v58 )
      return 0LL;
    if ( (*(_BYTE *)(a1 + 70) & 0xC0) != 0xC0 )
    {
      if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
        return 5LL;
      return 0LL;
    }
    goto LABEL_92;
  }
  v27 = *(_BYTE *)(a1 + 70);
  if ( (v27 & 4) == 0 )
    return ((unsigned __int8)~*(_BYTE *)(a1 + 64) & (unsigned __int8)(~(v27 >> 6) & ~(*(_BYTE *)(a1 + 61) >> 1)) & 1) == 0
         ? 0x12
         : 0;
  v28 = *(unsigned __int16 *)(gpsi + 9974LL);
  if ( *(char *)(a1 + 64) >= 0 )
  {
    if ( WindowDpiLastNotify == v28 )
    {
      v29 = *(_DWORD *)(gpsi + 2320LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v29 = *(_DWORD *)(gpsi + 2440LL);
    }
    else
    {
      if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
        v34 = ScaleSystemMetricForDPIWithoutCache(13LL, WindowDpiLastNotify);
      else
        v34 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
      v29 = v34;
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 9974LL) )
    {
      v31 = *(_DWORD *)(gpsi + 2316LL);
      goto LABEL_79;
    }
    if ( WindowDpiLastNotify == 96 )
    {
      v31 = *(_DWORD *)(gpsi + 2436LL);
      goto LABEL_79;
    }
    v32 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    v33 = 12LL;
    goto LABEL_76;
  }
  if ( WindowDpiLastNotify == v28 )
  {
    v29 = *(_DWORD *)(gpsi + 2364LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v29 = *(_DWORD *)(gpsi + 2484LL);
  }
  else
  {
    if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
      v30 = ScaleSystemMetricForDPIWithoutCache(24LL, WindowDpiLastNotify);
    else
      v30 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
    v29 = v30;
  }
  if ( WindowDpiLastNotify != *(unsigned __int16 *)(gpsi + 9974LL) )
  {
    if ( WindowDpiLastNotify == 96 )
    {
      v31 = *(_DWORD *)(gpsi + 2480LL);
      goto LABEL_79;
    }
    v32 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    v33 = 23LL;
LABEL_76:
    if ( v32 == -1 )
      v31 = ScaleSystemMetricForDPIWithoutCache(v33, WindowDpiLastNotify);
    else
      v31 = GetDpiDependentMetric(v33, WindowDpiLastNotify);
    goto LABEL_79;
  }
  v31 = *(_DWORD *)(gpsi + 2360LL);
LABEL_79:
  v35 = -v31;
  v36 = -v29;
  v37 = v35 + v12;
  if ( SHIDWORD(v56) >= v13 - v36 )
  {
    if ( SHIDWORD(v56) >= v36 + v57 )
      v2 = 6;
  }
  else
  {
    v2 = 3;
  }
  if ( v55 >= v54 - v35 )
  {
    if ( v55 >= v37 )
      v2 += 2;
  }
  else
  {
    ++v2;
  }
  return (unsigned int)(v2 + 9);
}
