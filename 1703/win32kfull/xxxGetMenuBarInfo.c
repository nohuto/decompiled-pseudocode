/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00C2D68
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00C2BC0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(ULONG_PTR a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int WindowDpiLastNotify; // esi
  __int64 v13; // r12
  int WindowBordersForDpi; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // esi
  __int64 SysMenu; // rax
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // ecx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v39; // r11
  __int64 v40; // r13
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r11
  __int64 v44; // r13
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  _QWORD *v50; // rcx
  _QWORD **v51; // rdx
  _QWORD **v52; // rax
  _QWORD *v53; // rcx
  int v54; // edx
  __int64 *v55; // rcx
  int v56; // ecx
  int v57; // eax
  __int64 v58; // r11
  __int64 v59; // r12
  __int64 v60; // rcx
  int v61; // eax
  int v62; // eax
  __int64 v63; // r11
  __int64 v64; // r12
  int v65; // eax
  __int64 v66; // r11
  __int64 v67; // r12
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // r11
  __int64 v71; // r12
  int v72; // eax
  __int64 v73; // r11
  __int64 v74; // r12
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // r11
  __int64 v78; // r12
  _QWORD *v79; // rcx
  _QWORD **v80; // rdx
  _QWORD **v81; // rax
  _QWORD *v82; // rcx
  int v83; // edx
  __int64 *v84; // rcx
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // rcx
  _QWORD **v96; // rdx
  _QWORD **v97; // rax
  _QWORD *v98; // rcx
  __int64 *v99; // rax
  __int64 v100; // rax
  int v101; // ecx
  __int64 *v102; // rax
  __int64 v103; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v104; // [rsp+58h] [rbp-18h] BYREF
  _QWORD **v105; // [rsp+60h] [rbp-10h]
  int v107; // [rsp+C8h] [rbp+58h]

  v5 = a3;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v103, 0LL);
  v9 = 0LL;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL);
    goto LABEL_31;
  }
  v10 = 1LL;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  if ( a2 == -3 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 )
    {
      v13 = *(_QWORD *)(a1 + 208);
      if ( v13 )
      {
        if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(v13 + 68) )
        {
          *(_QWORD *)(a4 + 24) = *(_QWORD *)v13;
          if ( !*(_DWORD *)(v13 + 72) || !*(_DWORD *)(v13 + 76) )
          {
LABEL_23:
            v18 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 528LL);
            if ( v18 )
              v19 = *v18;
            else
              v19 = 0LL;
            v20 = v103;
            if ( v103 != v19 )
            {
              if ( v103 )
              {
                v50 = v104;
                v51 = v105;
                if ( (_QWORD **)v104[1] != &v104 || *v105 != &v104 )
                  __fastfail(3u);
                *v105 = v104;
                v50[1] = v51;
              }
              v103 = v19;
              if ( !v19 )
                goto LABEL_27;
              v52 = (_QWORD **)(v19 + 88);
              v53 = *v52;
              if ( (_QWORD **)(*v52)[1] != v52 )
                __fastfail(3u);
              v104 = *v52;
              v105 = v52;
              v53[1] = &v104;
              *v52 = &v104;
              v20 = v103;
            }
            if ( v20 && (*(_DWORD *)v20 & 6) == 2 && *(_QWORD *)(v20 + 8) == a1 )
            {
              v54 = v10 | *(_DWORD *)(a4 + 40);
              *(_DWORD *)(a4 + 40) = v54;
              if ( (_DWORD)v5 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 80LL) == (_DWORD)v5 - 1 )
                {
                  *(_DWORD *)(a4 + 40) = v54 | 2;
                  v55 = *(__int64 **)(*(_QWORD *)(v20 + 64) + 24LL);
                  if ( v55 )
                    v9 = *v55;
                  *(_QWORD *)(a4 + 32) = v9;
                }
              }
              else
              {
                *(_DWORD *)(a4 + 40) = v54 | 2;
              }
            }
LABEL_27:
            v21 = 1;
            goto LABEL_28;
          }
          if ( (_DWORD)v5 )
          {
            v45 = *(_QWORD *)(v13 + 96);
            v46 = 152 * v5;
            if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
            {
              v47 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(v46 + v45 - 80);
              *(_DWORD *)(a4 + 12) = v47;
              *(_DWORD *)(a4 + 4) = v47 - *(_DWORD *)(v46 + v45 - 72);
            }
            else
            {
              v48 = *(_DWORD *)(a1 + 128) + *(_DWORD *)(v46 + v45 - 80);
              *(_DWORD *)(a4 + 4) = v48;
              *(_DWORD *)(a4 + 12) = *(_DWORD *)(v46 + v45 - 72) + v48;
            }
            v49 = *(_DWORD *)(a1 + 132) + *(_DWORD *)(v46 + v45 - 76);
            *(_DWORD *)(a4 + 8) = v49;
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(v46 + v45 - 68) + v49;
            goto LABEL_23;
          }
          WindowBordersForDpi = GetWindowBordersForDpi(
                                  *(_DWORD *)(a1 + 68),
                                  *(_DWORD *)(a1 + 64),
                                  v8,
                                  v10,
                                  WindowDpiLastNotify);
          if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
          {
            v37 = *(_DWORD *)(a1 + 136) - WindowBordersForDpi;
            *(_DWORD *)(a4 + 12) = v37;
            *(_DWORD *)(a4 + 4) = v37 - *(_DWORD *)(v13 + 72);
          }
          else
          {
            v15 = WindowBordersForDpi + *(_DWORD *)(a1 + 128);
            *(_DWORD *)(a4 + 4) = v15;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v13 + 72) + v15;
          }
          *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(a1 + 132);
          if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
          {
LABEL_22:
            LODWORD(v10) = 1;
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(v13 + 76) + *(_DWORD *)(a4 + 8);
            goto LABEL_23;
          }
          v16 = *(unsigned __int16 *)(gpsi + 8678LL);
          if ( *(char *)(a1 + 64) < 0 )
          {
            if ( WindowDpiLastNotify == v16 )
            {
              v17 = *(_DWORD *)(gpsi + 2084LL);
              goto LABEL_21;
            }
            if ( WindowDpiLastNotify == 96 )
            {
              v17 = *(_DWORD *)(gpsi + 2472LL);
              goto LABEL_21;
            }
            DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
            if ( DpiDepSysMetCachePlateauSlot != -1 )
            {
              v40 = 112LL * DpiDepSysMetCachePlateauSlot;
              v17 = *(_DWORD *)(v39 + v40 + 3124);
              if ( v17 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
                v17 = *(_DWORD *)(gpsi + v40 + 3124);
                goto LABEL_70;
              }
LABEL_72:
              LODWORD(v5) = a3;
              goto LABEL_21;
            }
            v41 = 51LL;
          }
          else
          {
            if ( WindowDpiLastNotify == v16 )
            {
              v17 = *(_DWORD *)(gpsi + 1896LL);
LABEL_21:
              *(_DWORD *)(a4 + 8) += v17;
              goto LABEL_22;
            }
            if ( WindowDpiLastNotify == 96 )
            {
              v17 = *(_DWORD *)(gpsi + 2284LL);
              goto LABEL_21;
            }
            v42 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
            if ( v42 != -1 )
            {
              v44 = 112LL * v42;
              v17 = *(_DWORD *)(v43 + v44 + 3052);
              if ( v17 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
                v17 = *(_DWORD *)(gpsi + v44 + 3052);
LABEL_70:
                if ( v17 == -1 )
                  v17 = 0;
                goto LABEL_72;
              }
              goto LABEL_72;
            }
            v41 = 4LL;
          }
          v17 = ScaleSystemMetricForDPIWithoutCache(v41, WindowDpiLastNotify);
          goto LABEL_21;
        }
      }
    }
LABEL_31:
    v21 = 0;
    goto LABEL_28;
  }
  if ( a2 == -1 )
  {
    if ( (*(_BYTE *)(a1 + 70) & 8) == 0 )
      goto LABEL_31;
    SysMenu = xxxGetSysMenu(a1, 0LL, v8, v10);
    if ( !SysMenu || (int)v5 < 0 || (unsigned int)v5 > *(_DWORD *)(SysMenu + 68) )
      goto LABEL_31;
    *(_QWORD *)(a4 + 24) = *(_QWORD *)SysMenu;
    if ( !(unsigned int)HasCaptionIcon(a1) )
      goto LABEL_48;
    v26 = GetWindowBordersForDpi(*(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 64), v24, v25, WindowDpiLastNotify);
    v27 = v26;
    v107 = v26;
    if ( (*(_BYTE *)(a1 + 66) & 0x40) == 0 )
    {
      *(_DWORD *)(a4 + 4) = v26 + *(_DWORD *)(a1 + 128);
      v28 = *(unsigned __int16 *)(gpsi + 8678LL);
      if ( *(char *)(a1 + 64) < 0 )
      {
        if ( WindowDpiLastNotify == v28 )
        {
          v30 = *(_DWORD *)(gpsi + 2088LL);
          goto LABEL_42;
        }
        if ( WindowDpiLastNotify == 96 )
        {
          v30 = *(_DWORD *)(gpsi + 2476LL);
          goto LABEL_42;
        }
        v65 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( v65 != -1 )
        {
          v67 = 112LL * v65;
          v30 = *(_DWORD *)(v67 + v66 + 3128);
          if ( v30 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v30 = *(_DWORD *)(v67 + gpsi + 3128);
            if ( v30 == -1 )
              v30 = 0;
          }
          v27 = v107;
          goto LABEL_42;
        }
        v68 = 52LL;
      }
      else
      {
        if ( WindowDpiLastNotify == v28 )
        {
          v29 = *(_DWORD *)(gpsi + 2000LL);
LABEL_41:
          v30 = v29;
LABEL_42:
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + v30;
          goto LABEL_43;
        }
        if ( WindowDpiLastNotify == 96 )
        {
          v29 = *(_DWORD *)(gpsi + 2388LL);
          goto LABEL_41;
        }
        v69 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( v69 != -1 )
        {
          v71 = 112LL * v69;
          v29 = *(_DWORD *)(v71 + v70 + 3092);
          if ( v29 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v29 = *(_DWORD *)(v71 + gpsi + 3092);
            if ( v29 == -1 )
              v29 = 0;
          }
          goto LABEL_141;
        }
        v68 = 30LL;
      }
      v29 = ScaleSystemMetricForDPIWithoutCache(v68, WindowDpiLastNotify);
LABEL_141:
      v27 = v107;
      goto LABEL_41;
    }
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a1 + 136) - v26;
    if ( *(char *)(a1 + 64) < 0 )
    {
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v56 = *(_DWORD *)(gpsi + 2088LL);
LABEL_121:
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - v56;
LABEL_43:
        *(_DWORD *)(a4 + 8) = v27 + *(_DWORD *)(a1 + 132);
        v31 = *(unsigned __int16 *)(gpsi + 8678LL);
        if ( *(char *)(a1 + 64) < 0 )
        {
          if ( WindowDpiLastNotify == v31 )
          {
            v33 = *(_DWORD *)(gpsi + 2092LL);
            goto LABEL_47;
          }
          if ( WindowDpiLastNotify == 96 )
          {
            v33 = *(_DWORD *)(gpsi + 2480LL);
            goto LABEL_47;
          }
          v72 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
          if ( v72 != -1 )
          {
            v74 = 112LL * v72;
            v33 = *(_DWORD *)(v74 + v73 + 3132);
            if ( v33 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
              v33 = *(_DWORD *)(v74 + gpsi + 3132);
              if ( v33 == -1 )
                v33 = 0;
            }
            goto LABEL_47;
          }
          v75 = 53LL;
        }
        else
        {
          if ( WindowDpiLastNotify == v31 )
          {
            v32 = *(_DWORD *)(gpsi + 2004LL);
LABEL_46:
            v33 = v32;
LABEL_47:
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + v33;
LABEL_48:
            v34 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 528LL);
            if ( v34 )
              v35 = *v34;
            else
              v35 = 0LL;
            v36 = v103;
            if ( v103 != v35 )
            {
              if ( v103 )
              {
                v79 = v104;
                v80 = v105;
                if ( (_QWORD **)v104[1] != &v104 || *v105 != &v104 )
                  __fastfail(3u);
                *v105 = v104;
                v79[1] = v80;
              }
              v103 = v35;
              if ( !v35 )
                goto LABEL_27;
              v81 = (_QWORD **)(v35 + 88);
              v82 = *v81;
              if ( (_QWORD **)(*v81)[1] != v81 )
                __fastfail(3u);
              v104 = *v81;
              v105 = v81;
              v82[1] = &v104;
              *v81 = &v104;
              v36 = v103;
            }
            if ( !v36 || (*(_BYTE *)v36 & 6) != 6 )
              goto LABEL_27;
            v21 = 1;
            if ( *(_QWORD *)(v36 + 8) != a1 )
              goto LABEL_28;
            v83 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v83;
            if ( !(_DWORD)v5 )
            {
              *(_DWORD *)(a4 + 40) = v83 | 2;
              goto LABEL_28;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v36 + 64) + 80LL) != (_DWORD)v5 - 1 )
              goto LABEL_28;
            *(_DWORD *)(a4 + 40) = v83 | 2;
            v84 = *(__int64 **)(*(_QWORD *)(v36 + 64) + 24LL);
            if ( v84 )
              v9 = *v84;
LABEL_177:
            *(_QWORD *)(a4 + 32) = v9;
            goto LABEL_28;
          }
          if ( WindowDpiLastNotify == 96 )
          {
            v32 = *(_DWORD *)(gpsi + 2392LL);
            goto LABEL_46;
          }
          v76 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
          if ( v76 != -1 )
          {
            v78 = 112LL * v76;
            v32 = *(_DWORD *)(v78 + v77 + 3096);
            if ( v32 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
              v32 = *(_DWORD *)(v78 + gpsi + 3096);
              if ( v32 == -1 )
                v32 = 0;
            }
            goto LABEL_46;
          }
          v75 = 31LL;
        }
        v32 = ScaleSystemMetricForDPIWithoutCache(v75, WindowDpiLastNotify);
        goto LABEL_46;
      }
      if ( WindowDpiLastNotify == 96 )
      {
        v56 = *(_DWORD *)(gpsi + 2476LL);
        goto LABEL_121;
      }
      v57 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( v57 != -1 )
      {
        v59 = 112LL * v57;
        v56 = *(_DWORD *)(v59 + v58 + 3128);
        if ( v56 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
          v56 = *(_DWORD *)(v59 + gpsi + 3128);
          if ( v56 == -1 )
            v56 = 0;
        }
        v27 = v107;
        goto LABEL_121;
      }
      v60 = 52LL;
      goto LABEL_118;
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v61 = *(_DWORD *)(gpsi + 2000LL);
    }
    else
    {
      if ( WindowDpiLastNotify != 96 )
      {
        v62 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( v62 != -1 )
        {
          v64 = 112LL * v62;
          v61 = *(_DWORD *)(v64 + v63 + 3092);
          if ( v61 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v61 = *(_DWORD *)(v64 + gpsi + 3092);
            if ( v61 == -1 )
              v61 = 0;
          }
          goto LABEL_119;
        }
        v60 = 30LL;
LABEL_118:
        v61 = ScaleSystemMetricForDPIWithoutCache(v60, WindowDpiLastNotify);
LABEL_119:
        v27 = v107;
        goto LABEL_120;
      }
      v61 = *(_DWORD *)(gpsi + 2388LL);
    }
LABEL_120:
    v56 = v61;
    goto LABEL_121;
  }
  if ( a2 != -4 )
    goto LABEL_31;
  _InterlockedAdd(&glSendMessage, v10);
  v85 = xxxSendTransformableMessageTimeout(a1, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, v10, v10);
  v86 = ValidateHmenu(v85);
  if ( !v86 || (int)v5 < 0 || (unsigned int)v5 > *(_DWORD *)(v86 + 68) )
    goto LABEL_31;
  *(_QWORD *)(a4 + 24) = v85;
  if ( (_DWORD)v5 )
  {
    v87 = *(_QWORD *)(v86 + 96);
    v88 = 152 * v5;
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
    {
      v89 = *(_DWORD *)(a1 + 152) - *(_DWORD *)(v88 + v87 - 80);
      *(_DWORD *)(a4 + 12) = v89;
      *(_DWORD *)(a4 + 4) = v89 - *(_DWORD *)(v88 + v87 - 72);
    }
    else
    {
      v90 = *(_DWORD *)(a1 + 144) + *(_DWORD *)(v88 + v87 - 80);
      *(_DWORD *)(a4 + 4) = v90;
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(v88 + v87 - 72) + v90;
    }
    v91 = *(_DWORD *)(a1 + 148) + *(_DWORD *)(v88 + v87 - 76);
    *(_DWORD *)(a4 + 8) = v91;
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(v88 + v87 - 68) + v91;
  }
  else
  {
    *(_OWORD *)(a4 + 4) = *(_OWORD *)(a1 + 144);
  }
  v92 = safe_cast_fnid_to_PMENUWND(a1);
  if ( !v92 )
    goto LABEL_27;
  v93 = *(_QWORD *)(v92 + 8);
  v94 = v103;
  if ( v103 != v93 )
  {
    if ( v103 )
    {
      v95 = v104;
      v96 = v105;
      if ( (_QWORD **)v104[1] != &v104 || *v105 != &v104 )
        __fastfail(3u);
      *v105 = v104;
      v95[1] = v96;
    }
    v103 = v93;
    if ( !v93 )
      goto LABEL_27;
    v97 = (_QWORD **)(v93 + 88);
    v98 = *v97;
    if ( (_QWORD **)(*v97)[1] != v97 )
      __fastfail(3u);
    v104 = *v97;
    v105 = v97;
    v98[1] = &v104;
    *v97 = &v104;
    v94 = v103;
  }
  if ( !v94 )
    goto LABEL_27;
  v99 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 528LL);
  if ( v99 )
    v100 = *v99;
  else
    v100 = 0LL;
  v21 = 1;
  if ( *(_QWORD *)(v94 + 64) == v100 )
  {
    v101 = *(_DWORD *)(a4 + 40) | 1;
    *(_DWORD *)(a4 + 40) = v101;
    if ( !(_DWORD)v5 )
    {
      *(_DWORD *)(a4 + 40) = v101 | 2;
      goto LABEL_28;
    }
    if ( (_DWORD)v5 != *(_DWORD *)(v94 + 80) + 1 )
      goto LABEL_28;
    *(_DWORD *)(a4 + 40) = v101 | 2;
    v102 = *(__int64 **)(v94 + 24);
    if ( v102 )
      v9 = *v102;
    goto LABEL_177;
  }
LABEL_28:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v103);
  return v21;
}
