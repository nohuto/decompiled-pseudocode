/*
 * XREFs of FindNCHit @ 0x1C0106D94
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     SizeBoxHwnd @ 0x1C0239024 (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  unsigned int WindowDpiLastNotify; // edi
  int v4; // r13d
  unsigned __int64 v5; // rbx
  _DWORD *v6; // r9
  __int128 v7; // xmm6
  __int64 *v8; // r11
  __int64 v10; // rax
  int v11; // eax
  int v12; // r14d
  int v13; // r12d
  _DWORD *v14; // r9
  int v15; // r10d
  __int64 *v16; // r11
  unsigned __int8 v17; // dl
  __int64 v18; // r12
  int v19; // r14d
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r11
  int v27; // eax
  int v28; // eax
  __int64 v29; // r11
  __int64 v30; // r9
  int WindowBordersForDpi; // eax
  int v32; // edx
  int v33; // eax
  unsigned __int8 v34; // cl
  __int64 *v35; // r11
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // r11
  int v42; // eax
  int v43; // eax
  __int64 v44; // r11
  __int64 v45; // rsi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rsi
  int v49; // eax
  __int64 v50; // r11
  int v51; // eax
  __int64 v52; // r11
  __int64 v53; // rsi
  int v54; // eax
  int v55; // ebx
  int v56; // r14d
  int v57; // r8d
  _DWORD *v58; // rbx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // r11
  int v63; // r12d
  int v64; // ecx
  int v65; // eax
  __int64 v66; // r11
  __int64 v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v71; // r11
  int v72; // eax
  __int64 v73; // r11
  __int64 v74; // rbx
  char v75; // r8
  int v76; // r14d
  int v77; // r14d
  char v78; // al
  __int64 v79; // rax
  int v80; // eax
  __int128 v81; // [rsp+38h] [rbp-29h] BYREF
  __int64 v82; // [rsp+48h] [rbp-19h]
  __int64 v83; // [rsp+50h] [rbp-11h]
  unsigned __int64 v84; // [rsp+58h] [rbp-9h]
  __int64 v85; // [rsp+60h] [rbp-1h]
  __int128 v86; // [rsp+68h] [rbp+7h] BYREF

  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  v4 = (__int16)a2;
  HIDWORD(v84) = SHIWORD(a2);
  LODWORD(v84) = (__int16)a2;
  v5 = v84;
  if ( !PtInRect((_DWORD *)(a1 + 128), v84) )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    v11 = v6[3] - 4;
    v12 = v6[2] - 4;
    v13 = v6[1] + 4;
    LODWORD(v82) = *v6 + 4;
    LODWORD(v81) = v82;
    *(_QWORD *)((char *)&v81 + 4) = __PAIR64__(v12, v13);
    HIDWORD(v81) = v11;
    if ( !PtInRect(&v81, v84) )
      return 2LL;
LABEL_111:
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      v4 = *v14 + *(_DWORD *)(a1 + 136) - v4;
    if ( v15 < v13 )
      return 2LL;
    v58 = (_DWORD *)*v16;
    v59 = *(unsigned __int16 *)(*v16 + 8678);
    if ( *(char *)(a1 + 64) >= 0 )
    {
      if ( WindowDpiLastNotify == v59 )
      {
        v69 = v58[474];
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v69 = v58[571];
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v69 = ScaleSystemMetricForDPIWithoutCache(4LL, WindowDpiLastNotify);
          v16 = (__int64 *)gpsi;
        }
        else
        {
          v85 = 112LL * DpiDepSysMetCachePlateauSlot;
          v69 = *(_DWORD *)((char *)v58 + v85 + 3052);
          if ( v69 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v16 = (__int64 *)gpsi;
            v69 = *(_DWORD *)(v85 + gpsi + 3052);
            if ( v69 == -1 )
              v69 = 0;
          }
        }
      }
      v71 = *v16;
      v63 = v69 + v13;
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(v71 + 8678) )
      {
        v64 = *(_DWORD *)(v71 + 2000);
        goto LABEL_155;
      }
      if ( WindowDpiLastNotify == 96 )
      {
        v64 = *(_DWORD *)(v71 + 2388);
        goto LABEL_155;
      }
      v72 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( v72 != -1 )
      {
        v74 = 112LL * v72;
        v64 = *(_DWORD *)(v74 + v73 + 3092);
        if ( v64 != -1 )
          goto LABEL_155;
        EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
        v64 = *(_DWORD *)(v74 + gpsi + 3092);
LABEL_132:
        if ( v64 == -1 )
          v64 = 0;
LABEL_155:
        if ( SHIDWORD(v84) >= v63 && (*(_BYTE *)(a1 + 56) & 1) != 0 )
          return 5LL;
        if ( v4 >= (int)v82 && v4 < v12 && SHIDWORD(v84) < v63 )
        {
          v75 = *(_BYTE *)(a1 + 70);
          if ( (v75 & 8) != 0 )
          {
            if ( v4 < v64 + (int)v82 )
              return (unsigned int)((unsigned int)HasCaptionIcon(a1) != 0) + 2;
          }
          else if ( (*(_BYTE *)(a1 + 61) & 2) != 0 )
          {
            return 2LL;
          }
          v76 = v12 - v64;
          if ( v4 >= v76 )
            return 20LL;
          if ( *(char *)(a1 + 64) >= 0 )
          {
            if ( (v75 & 3) != 0 )
            {
              v77 = v76 - v64;
              if ( v4 >= v77 )
                return 9LL;
              if ( v4 >= v77 - v64 )
                return 8LL;
            }
            else if ( (*(_BYTE *)(a1 + 65) & 4) != 0 && v4 >= v76 - v64 )
            {
              return 21LL;
            }
          }
        }
        return 2LL;
      }
      v68 = 30LL;
    }
    else
    {
      if ( WindowDpiLastNotify == v59 )
      {
        v60 = v58[521];
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v60 = v58[618];
      }
      else
      {
        v61 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( v61 == -1 )
        {
          v60 = ScaleSystemMetricForDPIWithoutCache(51LL, WindowDpiLastNotify);
          v16 = (__int64 *)gpsi;
        }
        else
        {
          v85 = 112LL * v61;
          v60 = *(_DWORD *)((char *)v58 + v85 + 3124);
          if ( v60 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v16 = (__int64 *)gpsi;
            v60 = *(_DWORD *)(v85 + gpsi + 3124);
            if ( v60 == -1 )
              v60 = 0;
          }
        }
      }
      v62 = *v16;
      v63 = v60 + v13;
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(v62 + 8678) )
      {
        v64 = *(_DWORD *)(v62 + 2088);
        goto LABEL_155;
      }
      if ( WindowDpiLastNotify == 96 )
      {
        v64 = *(_DWORD *)(v62 + 2476);
        goto LABEL_155;
      }
      v65 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( v65 != -1 )
      {
        v67 = 112LL * v65;
        v64 = *(_DWORD *)(v67 + v66 + 3128);
        if ( v64 != -1 )
          goto LABEL_155;
        EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
        v64 = *(_DWORD *)(v67 + gpsi + 3128);
        goto LABEL_132;
      }
      v68 = 52LL;
    }
    v64 = ScaleSystemMetricForDPIWithoutCache(v68, WindowDpiLastNotify);
    goto LABEL_155;
  }
  v7 = *(_OWORD *)(a1 + 144);
  v86 = v7;
  if ( PtInRect(&v86, v84) )
    return 1LL;
  v17 = *(_BYTE *)(a1 + 65);
  if ( (v17 & 2) != 0 )
  {
    v18 = (unsigned int)(DWORD1(v86) - 2);
    DWORD1(v81) = DWORD1(v86) - 2;
    LODWORD(v81) = v86 - 2;
    v19 = HIDWORD(v86) + 2;
    HIDWORD(v81) = HIDWORD(v86) + 2;
    DWORD2(v81) = DWORD2(v86) + 2;
  }
  else
  {
    v81 = v7;
    v19 = HIDWORD(v7);
    v18 = DWORD1(v7);
  }
  v85 = v18;
  if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
  {
    v20 = *v8;
    v21 = *(unsigned __int16 *)(*v8 + 8678);
    if ( ((v17 ^ *(_BYTE *)(a1 + 66)) & 0x40) != 0 )
    {
      v83 = *v8;
      if ( WindowDpiLastNotify == v21 )
      {
        v22 = *(_DWORD *)(v20 + 1888);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v22 = *(_DWORD *)(v20 + 2276);
      }
      else
      {
        v23 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( v23 == -1 )
        {
          v22 = ScaleSystemMetricForDPIWithoutCache(2LL, WindowDpiLastNotify);
          v8 = (__int64 *)gpsi;
        }
        else
        {
          v82 = 112LL * v23;
          v22 = *(_DWORD *)(v83 + v82 + 3044);
          if ( v22 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v8 = (__int64 *)gpsi;
            v22 = *(_DWORD *)(v82 + gpsi + 3044);
            if ( v22 == -1 )
              v22 = 0;
          }
        }
      }
      LODWORD(v81) = v81 - v22;
    }
    else
    {
      v83 = *v8;
      if ( WindowDpiLastNotify == v21 )
      {
        v24 = *(_DWORD *)(v20 + 1888);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v24 = *(_DWORD *)(v20 + 2276);
      }
      else
      {
        v25 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( v25 == -1 )
        {
          v24 = ScaleSystemMetricForDPIWithoutCache(2LL, WindowDpiLastNotify);
          v8 = (__int64 *)gpsi;
        }
        else
        {
          v82 = 112LL * v25;
          v24 = *(_DWORD *)(v83 + v82 + 3044);
          if ( v24 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v8 = (__int64 *)gpsi;
            v24 = *(_DWORD *)(v82 + gpsi + 3044);
            if ( v24 == -1 )
              v24 = 0;
          }
        }
      }
      DWORD2(v81) += v24;
    }
  }
  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
  {
    v26 = *v8;
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(v26 + 8678) )
    {
      v27 = *(_DWORD *)(v26 + 1892);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v27 = *(_DWORD *)(v26 + 2280);
    }
    else
    {
      v28 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( v28 == -1 )
      {
        v27 = ScaleSystemMetricForDPIWithoutCache(3LL, WindowDpiLastNotify);
      }
      else
      {
        v83 = 112LL * v28;
        v27 = *(_DWORD *)(v29 + v83 + 3048);
        if ( v27 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
          v27 = *(_DWORD *)(v83 + gpsi + 3048);
          if ( v27 == -1 )
            v27 = 0;
        }
      }
    }
    v19 += v27;
    HIDWORD(v81) = v19;
  }
  if ( PtInRect(&v81, v84) )
  {
    if ( (*(_BYTE *)(a1 + 65) & 2) != 0 )
    {
      LODWORD(v81) = v81 + 2;
      DWORD2(v81) -= 2;
      DWORD1(v81) = v18 + 2;
      HIDWORD(v81) = v19 - 2;
      if ( !PtInRect(&v81, v5) )
        return 18LL;
    }
    v78 = *(_BYTE *)(a1 + 56);
    if ( (v78 & 4) == 0 || SHIDWORD(v84) < SHIDWORD(v86) )
      return 7LL;
    if ( (v78 & 2) != 0 )
    {
      v79 = SizeBoxHwnd(a1);
      if ( v4 >= SDWORD2(v86) )
      {
        v80 = v79 != 0 ? 0xD : 0;
        return (unsigned int)(v80 + 4);
      }
      if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 && v4 < (int)v86 )
      {
        v80 = v79 != 0 ? 0xC : 0;
        return (unsigned int)(v80 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(a1 + 68),
                          *(_DWORD *)(a1 + 64),
                          0LL,
                          v30,
                          WindowDpiLastNotify);
  v32 = -WindowBordersForDpi;
  v33 = *(_DWORD *)(a1 + 128) + WindowBordersForDpi;
  v12 = v32 + *(_DWORD *)(a1 + 136);
  v13 = *(_DWORD *)(a1 + 132) - v32;
  HIDWORD(v81) = v32 + *(_DWORD *)(a1 + 140);
  LODWORD(v83) = HIDWORD(v81);
  LODWORD(v82) = v33;
  LODWORD(v81) = v33;
  *(_QWORD *)((char *)&v81 + 4) = __PAIR64__(v12, v13);
  if ( PtInRect(&v81, v5) )
  {
    v15 = HIDWORD(v84);
    if ( SHIDWORD(v84) < (int)v85 )
    {
      if ( (*(_BYTE *)(a1 + 70) & 0xC0) == 0xC0 )
      {
        v16 = (__int64 *)gpsi;
        goto LABEL_111;
      }
      if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
        return 5LL;
    }
    return 0LL;
  }
  v34 = *(_BYTE *)(a1 + 70);
  if ( (v34 & 4) == 0 )
    return ((unsigned __int8)~*(_BYTE *)(a1 + 64) & (unsigned __int8)(~(*(_BYTE *)(a1 + 61) >> 1) & ~(v34 >> 6)) & 1) == 0
         ? 0x12
         : 0;
  v35 = (__int64 *)gpsi;
  v36 = *(unsigned __int16 *)(gpsi + 8678LL);
  if ( *(char *)(a1 + 64) >= 0 )
  {
    if ( WindowDpiLastNotify == v36 )
    {
      v37 = *(_DWORD *)(gpsi + 2004LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v37 = *(_DWORD *)(gpsi + 2392LL);
    }
    else
    {
      v47 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( v47 == -1 )
      {
        v49 = ScaleSystemMetricForDPIWithoutCache(31LL, WindowDpiLastNotify);
        v35 = (__int64 *)gpsi;
        v37 = v49;
      }
      else
      {
        v48 = 112LL * v47;
        v37 = *(_DWORD *)(v48 + gpsi + 3096);
        if ( v37 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
          v35 = (__int64 *)gpsi;
          v37 = *(_DWORD *)(v48 + gpsi + 3096);
          if ( v37 == -1 )
            v37 = 0;
        }
      }
    }
    v50 = *v35;
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(v50 + 8678) )
    {
      v42 = *(_DWORD *)(v50 + 2000);
      goto LABEL_99;
    }
    if ( WindowDpiLastNotify == 96 )
    {
      v42 = *(_DWORD *)(v50 + 2388);
      goto LABEL_99;
    }
    v51 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    if ( v51 != -1 )
    {
      v53 = 112LL * v51;
      v42 = *(_DWORD *)(v53 + v52 + 3092);
      if ( v42 != -1 )
        goto LABEL_99;
      EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
      v42 = *(_DWORD *)(v53 + gpsi + 3092);
      goto LABEL_94;
    }
    v46 = 30LL;
LABEL_98:
    v42 = ScaleSystemMetricForDPIWithoutCache(v46, WindowDpiLastNotify);
    goto LABEL_99;
  }
  if ( WindowDpiLastNotify == v36 )
  {
    v37 = *(_DWORD *)(gpsi + 2092LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v37 = *(_DWORD *)(gpsi + 2480LL);
  }
  else
  {
    v38 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    if ( v38 == -1 )
    {
      v40 = ScaleSystemMetricForDPIWithoutCache(53LL, WindowDpiLastNotify);
      v35 = (__int64 *)gpsi;
      v37 = v40;
    }
    else
    {
      v39 = 112LL * v38;
      v37 = *(_DWORD *)(v39 + gpsi + 3132);
      if ( v37 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
        v35 = (__int64 *)gpsi;
        v37 = *(_DWORD *)(v39 + gpsi + 3132);
        if ( v37 == -1 )
          v37 = 0;
      }
    }
  }
  v41 = *v35;
  if ( WindowDpiLastNotify != *(unsigned __int16 *)(v41 + 8678) )
  {
    if ( WindowDpiLastNotify == 96 )
    {
      v42 = *(_DWORD *)(v41 + 2476);
      goto LABEL_99;
    }
    v43 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    if ( v43 != -1 )
    {
      v45 = 112LL * v43;
      v42 = *(_DWORD *)(v45 + v44 + 3128);
      if ( v42 != -1 )
        goto LABEL_99;
      EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
      v42 = *(_DWORD *)(v45 + gpsi + 3128);
LABEL_94:
      if ( v42 == -1 )
        v42 = 0;
      goto LABEL_99;
    }
    v46 = 52LL;
    goto LABEL_98;
  }
  v42 = *(_DWORD *)(v41 + 2088);
LABEL_99:
  v54 = -v42;
  v55 = -v37;
  v56 = v54 + v12;
  if ( SHIDWORD(v84) >= v13 - v55 )
  {
    v57 = 0;
    if ( SHIDWORD(v84) >= v55 + (int)v83 )
      v57 = 6;
  }
  else
  {
    v57 = 3;
  }
  if ( v4 >= (int)v82 - v54 )
  {
    if ( v4 >= v56 )
      v57 += 2;
  }
  else
  {
    ++v57;
  }
  return (unsigned int)(v57 + 9);
}
