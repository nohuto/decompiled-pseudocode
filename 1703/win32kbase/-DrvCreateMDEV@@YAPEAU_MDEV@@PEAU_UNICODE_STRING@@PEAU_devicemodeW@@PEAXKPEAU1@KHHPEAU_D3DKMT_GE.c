/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C002CDD0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C005AEB4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C005AFA0 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C005B048 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C005B124 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C005FE90 (DrvGetDisplayDriverNames.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006954C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0083650 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008A6E4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008A820 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     AlignRects @ 0x1C008B9BC (AlignRects.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C008C1E0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008D588 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C008E770 (-IsPrimaryPathInCloneGroup@@YAEPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C0091004 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00912F0 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00913C0 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C009BB08 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C009D52C (wcsncmp.c)
 *     memcmp @ 0x1C00A1480 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F4DB8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct _D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rbx
  _QWORD *v12; // rax
  struct _MDEV *v13; // r14
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _devicemodeW *v17; // rax
  __int64 v18; // rdx
  struct _MDEV *v19; // r10
  struct _D3DKMT_GETPATHSMODALITY *v20; // r13
  unsigned int v21; // r11d
  __int64 v22; // r15
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // r8
  unsigned int v26; // r12d
  bool v27; // sf
  HDEV HDEV; // rdi
  wchar_t *j; // r14
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rax
  unsigned int *DisplayDriverNames; // rax
  struct _DRV_NAMES *v36; // r12
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  unsigned __int16 v41; // cx
  int v42; // edi
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  int i; // eax
  int PruneFlag; // ebx
  unsigned __int16 v50; // cx
  int PrimaryAttachFlags; // eax
  int v52; // eax
  bool v53; // zf
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned int *v56; // rax
  struct _DRV_NAMES *v57; // r13
  unsigned int v58; // edi
  unsigned int v59; // r15d
  unsigned int v60; // r12d
  int v61; // eax
  struct _devicemodeW *v62; // rbx
  struct _devicemodeW *v63; // rbx
  struct _devicemodeW *v64; // rax
  struct _devicemodeW *v65; // rbx
  int v66; // eax
  int v67; // edi
  HDEV v68; // rax
  struct _devicemodeW *v69; // rbx
  int v70; // eax
  bool v71; // cf
  int v72; // eax
  int v73; // eax
  DWORD dmPelsHeight; // r9d
  DWORD dmPelsWidth; // r8d
  unsigned int v76; // edx
  struct _devicemodeW *v77; // rbx
  __int64 v78; // rax
  unsigned int v79; // eax
  struct tagSIZE v80; // rcx
  struct tagSIZE v81; // rax
  unsigned int v82; // ecx
  unsigned int *v83; // rbx
  unsigned __int64 v84; // rax
  void *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // edi
  struct _MDEV *v93; // r14
  __int64 v94; // rax
  MULTIDEVLOCKOBJ *v95; // r15
  __int64 v96; // rax
  unsigned int v97; // edx
  __int64 v98; // rcx
  int v99; // eax
  int v100; // eax
  unsigned int v101; // ebx
  _DWORD *v102; // r12
  void *v103; // rax
  void *v104; // r13
  unsigned int v105; // r10d
  unsigned int v106; // r9d
  __int64 v107; // rdx
  __int64 v108; // rax
  _DWORD *v109; // r8
  __int64 v110; // rcx
  unsigned int v111; // eax
  unsigned int v112; // r12d
  struct _devicemodeW *v113; // rdi
  unsigned int v114; // r13d
  __int64 v115; // rbx
  int v116; // ecx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  _QWORD *v120; // rax
  int v121; // r12d
  __int64 v122; // rcx
  __int64 v123; // rdx
  unsigned int v124; // edx
  int v125; // eax
  unsigned int v126; // r8d
  int v127; // eax
  __int64 v128; // rcx
  __int64 v129; // rdx
  int v130; // edx
  unsigned int v131; // eax
  unsigned int v132; // edx
  unsigned int v133; // r8d
  __int64 v134; // rax
  __int64 v135; // rax
  unsigned int v136; // r13d
  __int64 v137; // rbx
  unsigned int v138; // r12d
  unsigned int v139; // kr04_4
  unsigned int v140; // ecx
  unsigned int v141; // eax
  unsigned int v142; // edx
  unsigned int v143; // ecx
  unsigned int v144; // eax
  __int64 v145; // rdx
  unsigned int v146; // r12d
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r9
  __int64 v151; // rax
  __int64 v152; // rax
  unsigned int v153; // r14d
  __int64 v154; // r12
  __int64 v155; // rbx
  void (__fastcall *v156)(__int64, __int64); // rax
  __int128 v157; // xmm0
  __int64 v158; // rax
  unsigned int v160; // [rsp+30h] [rbp-C9h]
  int v161; // [rsp+38h] [rbp-C1h]
  int v162; // [rsp+58h] [rbp-A1h]
  unsigned int v163; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v164; // [rsp+60h] [rbp-99h] BYREF
  unsigned int v165; // [rsp+68h] [rbp-91h]
  int v166; // [rsp+6Ch] [rbp-8Dh]
  unsigned int v167; // [rsp+70h] [rbp-89h]
  int v168; // [rsp+74h] [rbp-85h]
  struct tagSIZE v169; // [rsp+78h] [rbp-81h] BYREF
  unsigned int v170; // [rsp+80h] [rbp-79h] BYREF
  int v171; // [rsp+84h] [rbp-75h] BYREF
  int v172; // [rsp+88h] [rbp-71h]
  unsigned int v173; // [rsp+8Ch] [rbp-6Dh]
  struct _devicemodeW *v174; // [rsp+90h] [rbp-69h]
  struct tagSIZE v175; // [rsp+98h] [rbp-61h] BYREF
  void *Buf2; // [rsp+A0h] [rbp-59h]
  unsigned int v177; // [rsp+A8h] [rbp-51h] BYREF
  int v178; // [rsp+ACh] [rbp-4Dh]
  unsigned __int64 v179; // [rsp+B0h] [rbp-49h]
  void *v180; // [rsp+B8h] [rbp-41h] BYREF
  _QWORD v181[2]; // [rsp+C0h] [rbp-39h] BYREF
  _BYTE v182[104]; // [rsp+D0h] [rbp-29h] BYREF
  struct tagSIZE v184; // [rsp+148h] [rbp+4Fh]
  unsigned int v187; // [rsp+158h] [rbp+5Fh]
  unsigned int v188; // [rsp+160h] [rbp+67h] BYREF

  v188 = a4;
  v9 = a4;
  v162 = 0;
  v165 = 0;
  v168 = 0;
  v178 = 0;
  v172 = a4 & 1;
  v166 = a6 != 0;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = v13;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x48uLL, 1936876615LL, 1);
  v16 = (__int64)v14;
  if ( !v14 )
    goto LABEL_317;
  v14[5] = 0;
  *((_QWORD *)v14 + 3) = a3;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
  v19 = 0LL;
  v174 = v17;
  if ( !v17 )
    goto LABEL_313;
  v20 = a9;
  v21 = 1;
  v22 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    LODWORD(Buf2) = v22;
LABEL_5:
    v23 = v162;
    v15 = v21;
    v24 = 0;
    v163 = v21;
    v167 = 0;
    v25 = 0LL;
    v179 = 0LL;
    v26 = 0;
    v173 = 0;
    v170 = 0;
    v177 = 0;
    v181[0] = v22;
    while ( 1 )
    {
      v18 = 0xFFFFFFFFLL;
      v27 = v23 < 0;
      if ( v23 )
        break;
      HDEV = (HDEV)v19;
      v175 = (struct tagSIZE)v19;
      v169 = (struct tagSIZE)v19;
      if ( !a1 )
      {
        if ( v25 )
        {
LABEL_11:
          if ( v13 )
          {
            if ( v26 >= *((_DWORD *)v13 + 5) )
              goto LABEL_178;
            v30 = v26;
            v26 += v21;
            v173 = v26;
            HDEV = (HDEV)*((_QWORD *)v13 + 5 * v30 + 4);
            v175 = (struct tagSIZE)HDEV;
            j = (wchar_t *)*((_QWORD *)HDEV + 324);
            if ( j == (wchar_t *)v25 )
              goto LABEL_89;
            v31 = v165;
            if ( (*((_DWORD *)j + 40) & 8) != 0 )
              v31 = v21 ^ v165;
            if ( v31 )
              goto LABEL_89;
            EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
            EngAcquireSemaphore(*((HSEMAPHORE *)HDEV + 5));
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", *((_QWORD *)HDEV + 5), 11);
            EngAcquireSemaphore(ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
            ++*((_DWORD *)HDEV + 3);
            PDEV::IncrementClientReferenceCount((PDEV *)HDEV);
            if ( ((_DWORD)HDEV[8] & 0x400) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
              DrvEnableDisplay((HSEMAPHORE *)HDEV, v32);
              EngAcquireSemaphore(ghsemDriverMgmt);
              EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
            EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()");
            GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)HDEV + 5));
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            v21 = 1;
            v33 = (*((unsigned __int8 *)j + 160) >> 2) & 1;
            v170 = 1;
            v177 = v33;
            v19 = 0LL;
LABEL_20:
            v15 = v163;
            goto LABEL_21;
          }
        }
        if ( v22 != 4 )
        {
          j = gpGraphicsDeviceList;
          for ( i = (int)v19; j && i != v26; i += v21 )
            j = (wchar_t *)*((_QWORD *)j + 16);
          v26 += v21;
          v173 = v26;
          if ( gbBaseVideo != (_DWORD)v19 && j && (*((_DWORD *)j + 40) & 0x2800000) == 0 )
            goto LABEL_175;
          goto LABEL_22;
        }
        if ( v24 >= *((unsigned __int16 *)v20 + 10) )
          goto LABEL_178;
        if ( !IsPrimaryPathInCloneGroup(v20, v24)
          || (v47 = 264LL * v24, *(_DWORD *)((char *)v20 + v47 + 288) < (int)v19) )
        {
          v167 = v21 + v24;
          goto LABEL_90;
        }
        for ( j = gpGraphicsDeviceList;
              j
           && ((*((_DWORD *)j + 40) & 0x800000) == 0
            || *((_DWORD *)j + 66) != *(_DWORD *)((char *)v20 + v47 + 64)
            || *((_DWORD *)j + 67) != *(_DWORD *)((char *)v20 + v47 + 68)
            || *((_DWORD *)j + 68) != *(_DWORD *)((char *)v20 + v47 + 72));
              j = (wchar_t *)*((_QWORD *)j + 16) )
        {
          ;
        }
        goto LABEL_20;
      }
      if ( v25 )
        goto LABEL_11;
      j = DrvGetDeviceFromName(a1, 0);
      v179 = (unsigned __int64)j;
      v19 = 0LL;
      v163 &= -(a5 != 0LL);
      v15 = v163;
      v21 = 1;
LABEL_21:
      v18 = 0xFFFFFFFFLL;
LABEL_22:
      if ( v22 == 4 )
      {
        if ( HDEV )
        {
          v34 = WdLogNewEntry5_WdAssertion(v15, 0xFFFFFFFFLL);
          WdLogEvent5_WdAssertion(v34);
          v19 = 0LL;
        }
        if ( !j || (v15 = 1LL, (*((_DWORD *)j + 41) & 1) != 0) )
        {
LABEL_38:
          if ( HDEV )
            goto LABEL_69;
          if ( !IsPrimaryPathInCloneGroup(v20, v24)
            || (v45 = 264LL * v24, *(_DWORD *)((char *)v20 + v45 + 288) < (int)v19) )
          {
            v46 = WdLogNewEntry5_WdAssertion(v45, v18);
            WdLogEvent5_WdAssertion(v46);
            v19 = 0LL;
          }
          v15 = (unsigned __int16)v19;
          if ( (unsigned __int16)v19 >= *((_WORD *)v20 + 10) )
            goto LABEL_69;
          v21 = 1;
          v25 = 264LL * v24;
          do
          {
            v18 = 264LL * (unsigned __int16)v15;
            if ( *(_DWORD *)((char *)v20 + v18 + 280) == *(_DWORD *)((char *)v20 + v25 + 280) )
              *(_DWORD *)((char *)v20 + v18 + 288) = -1073741823;
            LOWORD(v15) = v15 + 1;
          }
          while ( (unsigned __int16)v15 < *((_WORD *)v20 + 10) );
        }
        else
        {
          DisplayDriverNames = DrvGetDisplayDriverNames((__int64)j);
          v19 = 0LL;
          v36 = (struct _DRV_NAMES *)DisplayDriverNames;
          if ( !DisplayDriverNames )
            goto LABEL_36;
          v37 = *((unsigned __int16 *)v20 + 10);
          if ( v24 >= (unsigned int)v37 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v37, v18);
            WdLogEvent5_WdAssertion(v38);
          }
          v39 = 264LL * v24;
          if ( !*(_QWORD *)((char *)v20 + v39 + 232) )
          {
            v40 = WdLogNewEntry5_WdAssertion(v37, v18);
            WdLogEvent5_WdAssertion(v40);
          }
          v41 = gdmLogPixels;
          if ( !gdmLogPixels )
          {
            GetDpiSetting(1LL, &v180);
            v41 = (unsigned __int16)v180;
            gdmLogPixels = (unsigned __int16)v180;
          }
          v42 = (v188 >> 2) & 1;
          *(_WORD *)(*(_QWORD *)((char *)v20 + v39 + 232) + 166LL) = v41;
          DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)j);
          DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)j);
          HDEV = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)j,
                   v36,
                   *(struct _devicemodeW **)((char *)v20 + v39 + 232),
                   a3,
                   DriverCapableOverRide,
                   DriverAccelerationsLevel,
                   v172,
                   v42,
                   1u,
                   (HDEV *)&v169);
          Win32FreePool((__int64)v36);
          v19 = 0LL;
          if ( !HDEV )
            goto LABEL_37;
          v15 = *(unsigned int *)((char *)v20 + v39 + 284);
          v24 = v167;
          *((_DWORD *)HDEV + 665) = v15;
LABEL_36:
          if ( !HDEV )
          {
LABEL_37:
            gpLastFailedPhysDisp = (__int64)j;
            DrvLogDisplayDriverEvent(2);
            v24 = v167;
            v19 = 0LL;
            goto LABEL_38;
          }
LABEL_69:
          v21 = 1;
        }
        v167 = v24 + 1;
        goto LABEL_156;
      }
      if ( !j )
        goto LABEL_178;
      if ( ((unsigned __int8)*((_DWORD *)j + 41) & (unsigned __int8)v21) == 0 )
      {
        if ( a6 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)j);
          v166 = PruneFlag;
          LODWORD(v19) = 0;
        }
        else
        {
          PruneFlag = v166;
        }
        if ( HDEV )
          goto LABEL_157;
        if ( gForceDisconnect != (_DWORD)v19 || v22 == 3 )
          v50 = -1;
        else
          v50 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)j, v50, &v177, &v170);
        v19 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_178;
        if ( ((v22 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          if ( v22 == 2 )
          {
            v52 = *((_DWORD *)j + 40);
            if ( (v52 & 8) != 0 )
            {
              if ( v170 )
              {
                v53 = v165 == 0;
                goto LABEL_87;
              }
              goto LABEL_88;
            }
            if ( (v52 & 0x2000000) != 0 || v168 )
              goto LABEL_88;
            v53 = gProtocolType == -1;
LABEL_87:
            if ( v53 )
            {
LABEL_88:
              v21 = 1;
              goto LABEL_89;
            }
          }
          else
          {
            v54 = WdLogNewEntry5_WdAssertion(v15, v18);
            WdLogEvent5_WdAssertion(v54);
            v19 = 0LL;
            if ( (*((_DWORD *)j + 40) & 8) != 0 || v168 )
              goto LABEL_88;
          }
          goto LABEL_106;
        }
        if ( v170 )
        {
          if ( (*((_DWORD *)j + 40) & 8) != 0 )
          {
            v55 = v165;
          }
          else
          {
            if ( !v165 )
              goto LABEL_106;
            v55 = 0;
          }
          if ( !v55 )
            goto LABEL_88;
LABEL_106:
          v56 = DrvGetDisplayDriverNames((__int64)j);
          v19 = 0LL;
          v57 = (struct _DRV_NAMES *)v56;
          if ( !v56 )
            goto LABEL_88;
          v58 = (*((_DWORD *)j + 40) & 8) != 0 ? 4 : 1;
          if ( (*((_DWORD *)j + 40) & 8) != 0 )
          {
            v59 = 0;
            v60 = 0;
          }
          else
          {
            v59 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)j);
            v60 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)j);
          }
          if ( a2 )
          {
            v61 = DrvProbeAndCaptureDevmode(
                    (struct tagGRAPHICS_DEVICE *)j,
                    &v164,
                    &v171,
                    0LL,
                    a2,
                    0,
                    PruneFlag,
                    a7,
                    a8,
                    0LL);
          }
          else
          {
            v62 = v174;
            memset(v174, 0, sizeof(struct _devicemodeW));
            v62->dmSize = 220;
            v61 = DrvProbeAndCaptureDevmode(
                    (struct tagGRAPHICS_DEVICE *)j,
                    &v164,
                    &v171,
                    0LL,
                    v62,
                    0,
                    v166,
                    a7,
                    a8,
                    0LL);
          }
          if ( v61 == 1073741839 )
          {
            DrvLogDisplayDriverEvent(4);
            goto LABEL_115;
          }
          if ( v61 == -1073741776 )
          {
            v77 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 32) + 2608LL);
            if ( v164 && v164 != v174 )
            {
              Win32FreePool((__int64)v164);
              v164 = 0LL;
            }
            v61 = DrvProbeAndCaptureDevmode(
                    (struct tagGRAPHICS_DEVICE *)j,
                    &v164,
                    &v171,
                    0LL,
                    v77,
                    0,
                    v166,
                    a7,
                    a8,
                    0LL);
          }
          if ( v61 >= 0 )
          {
LABEL_115:
            v63 = v164;
            HDEV = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)j,
                     v57,
                     v164,
                     a3,
                     v59,
                     v60,
                     v172,
                     (v188 >> 2) & 1,
                     v58,
                     (HDEV *)&v169);
            if ( !HDEV && (*((_DWORD *)j + 40) & 0x2000000) != 0 )
              gulDriverFailureReason = 5;
          }
          else
          {
            DrvDxgkLogCodePointPacket(0x3Au, 2u, 0, 0);
            v63 = v164;
            HDEV = (HDEV)v175;
            if ( (*((_DWORD *)j + 40) & 0x2000000) != 0 )
              gulDriverFailureReason = 4;
          }
          v64 = a2;
          if ( (*((_DWORD *)j + 40) & 8) != 0 || a2 )
            goto LABEL_149;
          if ( !HDEV )
          {
            DrvLogDisplayDriverEvent(4);
            if ( v63 )
            {
              if ( v63->dmBitsPerPel == 4 )
                DrvLogDisplayDriverEvent(5);
              if ( v63 != v174 )
              {
                Win32FreePool((__int64)v63);
                v164 = 0LL;
              }
            }
            v65 = v174;
            memset(v174, 0, sizeof(struct _devicemodeW));
            v65->dmSize = 220;
            v66 = DrvProbeAndCaptureDevmode(
                    (struct tagGRAPHICS_DEVICE *)j,
                    &v164,
                    &v171,
                    0LL,
                    v65,
                    1,
                    v166,
                    a7,
                    a8,
                    0LL);
            v63 = v164;
            if ( v66 >= 0 )
            {
              v67 = (v188 >> 2) & 1;
              v68 = hCreateHDEV((struct tagGRAPHICS_DEVICE *)j, v57, v164, a3, v59, v60, v172, v67, 1u, (HDEV *)&v169);
              v175 = (struct tagSIZE)v68;
              if ( v68 || v63->dmPelsWidth == 640 && v63->dmPelsHeight == 480 && v63->dmBitsPerPel == 4 )
              {
LABEL_135:
                HDEV = v68;
              }
              else
              {
                if ( v63 != v174 )
                {
                  Win32FreePool((__int64)v63);
                  v164 = 0LL;
                }
                v69 = v174;
                memset(v174, 0, sizeof(struct _devicemodeW));
                v69->dmSize = 220;
                v70 = *((_DWORD *)j + 40) & 0x800000;
                v69->dmPelsWidth = 640;
                v71 = v70 != 0;
                v69->dmPelsHeight = 480;
                v72 = a8;
                v69->dmFields = 1835008;
                v69->dmBitsPerPel = v71 ? 32 : 4;
                v73 = DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)j,
                        &v164,
                        &v171,
                        0LL,
                        v69,
                        0,
                        v166,
                        a7,
                        v72,
                        0LL);
                v63 = v164;
                if ( v73 >= 0 )
                {
                  v68 = hCreateHDEV(
                          (struct tagGRAPHICS_DEVICE *)j,
                          v57,
                          v164,
                          a3,
                          v59,
                          v60,
                          v172,
                          v67,
                          1u,
                          (HDEV *)&v169);
                  goto LABEL_135;
                }
                HDEV = (HDEV)v175;
              }
            }
            if ( v63 )
            {
              dmPelsHeight = v63->dmPelsHeight;
              dmPelsWidth = v63->dmPelsWidth;
              v76 = HDEV != 0LL;
            }
            else
            {
              v76 = 2;
              dmPelsHeight = v174->dmPelsHeight;
              dmPelsWidth = v174->dmPelsWidth;
            }
            DrvDxgkLogCodePointPacket(0x1Au, v76, dmPelsWidth, dmPelsHeight);
            v64 = 0LL;
LABEL_149:
            if ( !HDEV && !v64 )
            {
              gpLastFailedPhysDisp = (__int64)j;
              DrvLogDisplayDriverEvent(2);
            }
          }
          if ( v63 && v63 != v174 )
            Win32FreePool((__int64)v63);
          Win32FreePool((__int64)v57);
          v19 = 0LL;
          v21 = 1;
LABEL_156:
          if ( HDEV )
          {
LABEL_157:
            v78 = WdLogNewEntry5_WdTrace(v15);
            WdLogEvent5_WdTrace(v78);
            v19 = 0LL;
            v21 = 1;
            v168 = 1;
            if ( v177 )
              *((_DWORD *)j + 40) |= 4u;
            else
              *((_DWORD *)j + 40) &= ~4u;
            if ( !*(_QWORD *)&v169 )
            {
              if ( a5 )
              {
                v79 = *((_DWORD *)a5 + 5);
                if ( v79 )
                {
                  v18 = (__int64)a5 + 32;
                  v25 = v79;
                  do
                  {
                    v80 = *(struct tagSIZE *)v18;
                    v18 += 40LL;
                    v81 = v169;
                    if ( j == *(wchar_t **)(*(_QWORD *)&v80 + 2592LL) )
                      v81 = v80;
                    v169 = v81;
                    --v25;
                  }
                  while ( v25 );
                }
              }
            }
            *(_QWORD *)(v16 + 40LL * *(unsigned int *)(v16 + 20) + 32) = HDEV;
            *(struct tagSIZE *)(v16 + 40 * (*(unsigned int *)(v16 + 20) + 1LL)) = v169;
            v82 = *(_DWORD *)(v16 + 20);
            if ( v82 + 2 >= v82 )
            {
              v83 = (unsigned int *)v16;
              *(_DWORD *)(v16 + 20) = v82 + 1;
              v84 = 72LL * (v82 + 2);
              if ( v84 > 0xFFFFFFFF )
              {
                v16 = 0LL;
              }
              else
              {
                v85 = PALLOCMEM2((unsigned int)v84, 1936876615LL, 1);
                v19 = 0LL;
                v16 = (__int64)v85;
                v21 = 1;
              }
              if ( v16 )
              {
                memmove((void *)v16, v83, 72LL * v83[5]);
                Win32FreePool((__int64)v83);
                v19 = 0LL;
                goto LABEL_88;
              }
              v13 = a5;
              v23 = -1073741670;
              v162 = -1073741670;
              v16 = (__int64)v83;
LABEL_91:
              v15 = v163;
              goto LABEL_92;
            }
          }
LABEL_89:
          v13 = a5;
LABEL_90:
          v23 = v162;
          goto LABEL_91;
        }
        v15 = v163;
        v21 = 1;
      }
LABEL_175:
      v13 = a5;
      v23 = v162;
LABEL_92:
      v20 = a9;
      v26 = v173;
      if ( !(_DWORD)v15 )
      {
        v27 = v23 < 0;
        break;
      }
      v24 = v167;
      v22 = v181[0];
      v25 = v179;
    }
    if ( v27 )
      goto LABEL_194;
LABEL_178:
    v22 = (unsigned int)Buf2;
    if ( (_DWORD)Buf2 != 4 )
    {
      if ( v168 != (_DWORD)v19 )
      {
        if ( v165 == (_DWORD)v19 )
        {
          v89 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v89);
          v21 = 1;
          goto LABEL_181;
        }
        v162 = (int)v19;
        goto LABEL_195;
      }
      if ( (_DWORD)Buf2 == 1 )
      {
        v87 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v87);
        v19 = 0LL;
        v22 = 2LL;
        a8 = 0;
LABEL_188:
        v13 = a5;
        v21 = 1;
        continue;
      }
      if ( (_DWORD)Buf2 == 2 && gProtocolType == (_WORD)v19 )
      {
        v88 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v88);
        v19 = 0LL;
        v22 = 3LL;
        goto LABEL_188;
      }
      if ( !v26 )
      {
        v96 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v96);
        goto LABEL_313;
      }
      v91 = WdLogNewEntry5_WdTrace(v15);
      WdLogEvent5_WdTrace(v91);
      v23 = -1073741204;
      v19 = 0LL;
      v162 = -1073741204;
LABEL_194:
      if ( v23 )
        goto LABEL_312;
LABEL_195:
      if ( (v188 & 2) != 0 )
        goto LABEL_312;
      a6 = (unsigned int)v19;
      a5 = v19;
      v92 = (unsigned int)v19;
      v93 = v19;
      v94 = Win32AllocPool(104LL, 0x6C6D6847u);
      a9 = (struct _D3DKMT_GETPATHSMODALITY *)v94;
      v95 = (MULTIDEVLOCKOBJ *)v94;
      if ( v94 )
      {
        *(_QWORD *)v94 = 1LL;
        *(_QWORD *)(v94 + 8) = 0LL;
        *(_QWORD *)(v94 + 16) = 0LL;
      }
      else
      {
        v95 = 0LL;
        a9 = 0LL;
      }
      if ( !v95 )
        goto LABEL_313;
      MULTIDEVLOCKOBJ::vInit(v95, (struct _MDEV *)v16);
      if ( (*(_DWORD *)v95 & 1) == 0 )
      {
LABEL_311:
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v95);
LABEL_312:
        if ( v162 < 0 )
          goto LABEL_313;
        goto LABEL_315;
      }
      MULTIDEVLOCKOBJ::vLock(v95);
      v97 = 0;
      if ( *(_DWORD *)(v16 + 20) )
      {
        do
        {
          v98 = *(_QWORD *)(*(_QWORD *)(v16 + 40LL * v97 + 32) + 2592LL);
          v99 = *(_DWORD *)(v98 + 160);
          if ( (v99 & 8) != 0 )
          {
            if ( (v99 & 4) != 0 )
              *(_DWORD *)(v98 + 160) = v99 & 0xFFFFFFFB;
          }
          else if ( !v93 )
          {
            v92 = v97;
          }
          v100 = *(_DWORD *)(v98 + 160);
          if ( (v100 & 4) != 0 )
          {
            if ( v93 )
            {
              v162 = -1073741438;
              *(_DWORD *)(v98 + 160) = v100 & 0xFFFFFFFB;
            }
            else
            {
              v93 = (struct _MDEV *)v98;
              v92 = v97;
            }
          }
          ++v97;
        }
        while ( v97 < *(_DWORD *)(v16 + 20) );
        a6 = v92;
        a5 = v93;
      }
      v101 = 16 * *(_DWORD *)(v16 + 20);
      Buf2 = PALLOCMEM2(v101, 1936876615LL, 0);
      v102 = Buf2;
      v103 = PALLOCMEM2(v101, 1936876615LL, 0);
      v180 = v103;
      v104 = v103;
      if ( !v102 )
      {
LABEL_307:
        if ( v104 )
          Win32FreePool((__int64)v104);
        MULTIDEVLOCKOBJ::vUnlock(v95);
        if ( v178 )
          ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
        goto LABEL_311;
      }
      if ( !v103 )
      {
LABEL_306:
        Win32FreePool((__int64)v102);
        goto LABEL_307;
      }
      v105 = 0;
      v187 = 0;
      v106 = 0;
      if ( *(_DWORD *)(v16 + 20) )
      {
        do
        {
          v107 = 2LL * v106;
          v108 = *(_QWORD *)(v16 + 40LL * v106 + 32);
          v109 = *(_DWORD **)(v108 + 2608);
          v102[2 * v107] = v109[19];
          v102[2 * v107 + 1] = v109[20];
          v102[2 * v107 + 2] = v109[19] + v109[43];
          v102[2 * v107 + 3] = v109[20] + v109[44];
          if ( (*(_DWORD *)(*(_QWORD *)(v108 + 2592) + 160LL) & 8) == 0 )
          {
            if ( !v93 && !v109[19] && !v109[20] )
            {
              v92 = v106;
              v93 = *(struct _MDEV **)(v108 + 2592);
            }
            ++v105;
          }
          ++v106;
        }
        while ( v106 < *(_DWORD *)(v16 + 20) );
        v95 = a9;
        v187 = v105;
        a6 = v92;
        a5 = v93;
      }
      memmove(v104, v102, v101);
      if ( !gDrvDpiAdjusted )
      {
        gDrvDpiWin8Style = 0;
        v188 = 0;
        if ( ((gProtocolType + 1) & 0xFFFE) == 0
          && (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v110, 65534LL) >= 0 )
        {
          GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
          if ( gDrvDpiWin8Style )
          {
            if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
              GetDpiSettingWithNoDefault(0LL, &v188);
            v111 = v188;
            if ( v188 <= 0x60 )
              v111 = 96;
            if ( v111 >= 0x1E0 )
              LOWORD(v111) = 480;
            gdmLogPixels = v111;
          }
        }
      }
      v112 = 0;
      v113 = *(struct _devicemodeW **)(v16 + 40LL * v92 + 32);
      v164 = v113;
      *(_DWORD *)(*(_QWORD *)&v113[11].dmPelsWidth + 160LL) |= 4u;
      if ( *(_DWORD *)(v16 + 20) )
      {
        v114 = a6;
        do
        {
          v115 = *(_QWORD *)(v16 + 40LL * v112 + 32);
          if ( (*(_DWORD *)(*(_QWORD *)(v115 + 2592) + 160LL) & 0x800000) != 0 )
          {
            v116 = 0;
            if ( v112 == v114 )
              v116 = 32;
            *(_DWORD *)(v115 + 2564) = *(_DWORD *)(v115 + 2564) & 0xFFFFFFDF | v116;
            v188 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))qword_1C018BC78)(
                     *(_QWORD *)(*(_QWORD *)(v115 + 2592) + 256LL),
                     *(unsigned int *)(*(_QWORD *)(v115 + 2592) + 272LL),
                     0xFFFFFFFFLL,
                     v115 + 2152,
                     v115 + 2472);
            if ( (v188 & 0x80000000) != 0 )
            {
              v120 = (_QWORD *)WdLogNewEntry5_WdError(v118, v117, v119);
              v120[3] = (int)v188;
              v120[4] = *(_QWORD *)(*(_QWORD *)(v115 + 2592) + 256LL);
              v120[5] = *(unsigned int *)(*(_QWORD *)(v115 + 2592) + 272LL);
              WdLogEvent5_WdError(v120);
            }
          }
          ++v112;
        }
        while ( v112 < *(_DWORD *)(v16 + 20) );
        v113 = v164;
        v95 = a9;
        v93 = a5;
        v104 = v180;
      }
      v121 = 1;
      if ( gDrvDpiAdjusted )
      {
LABEL_283:
        if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
        {
          *((_DWORD *)gpsi + 555) &= ~0x40u;
        }
        else
        {
          LODWORD(a5) = 1;
          if ( *(_DWORD *)(v16 + 20) )
          {
            v136 = 0;
            do
            {
              v137 = *(_QWORD *)(v16 + 40LL * v136 + 32);
              v138 = *(_DWORD *)(v137 + 3544);
              v139 = *(_DWORD *)(v137 + 2164);
              LOBYTE(v188) = ((*(_DWORD *)(*(_QWORD *)(v137 + 2608) + 84LL) - 1) & 0xFFFFFFFD) == 0;
              v140 = v139 / 0x3E8;
              v141 = *(_DWORD *)(v137 + 2160) / 0x3E8u;
              if ( (_BYTE)v188 )
              {
                v141 = v139 / 0x3E8;
                v140 = *(_DWORD *)(v137 + 2160) / 0x3E8u;
              }
              v142 = *(_DWORD *)(v137 + 2172);
              v184 = (struct tagSIZE)__PAIR64__(v140, v141);
              v143 = *(_DWORD *)(v137 + 2168);
              v169 = v184;
              v144 = v143;
              if ( (_BYTE)v188 )
              {
                v144 = v142;
                v142 = v143;
              }
              v179 = __PAIR64__(v142, v144);
              v175 = (struct tagSIZE)__PAIR64__(v142, v144);
              if ( v138 )
              {
                FillPhysicalDpiOnly(&v169, &v175, (struct tagSIZE *)(v137 + 2472));
                v146 = HIWORD(v138);
                *(_DWORD *)(v137 + 2564) |= 0x200u;
                *(_DWORD *)(v137 + 2480) = v146;
                *(_DWORD *)(v137 + 2484) = v146;
                *(_DWORD *)(v137 + 2532) = v146;
                *(_DWORD *)(v137 + 2528) = v146;
                v121 = (int)a5;
              }
              else
              {
                *(_DWORD *)(v137 + 2564) &= ~0x200u;
                LODWORD(a5) = 0;
                v121 = 0;
                memset(v182, 0, 0x20uLL);
                v181[0] = 0x2000000001LL;
                v181[1] = v182;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v181, v147) < 0 )
                {
                  v151 = WdLogNewEntry5_WdAssertion(v149, v148);
                  WdLogEvent5_WdAssertion(v151);
                }
                FillDpiInfo(
                  &v169,
                  &v175,
                  (const struct _DPI_SCALE_FACTOR_COLLECTION *)v182,
                  v150,
                  gdmLogPixels,
                  v160,
                  v161,
                  (struct _DPI_INFORMATION *)(v137 + 2472));
              }
              GetRemoteScaleOverrideTestHook(
                (size_t *)(*(_QWORD *)(v137 + 2592) + 64LL),
                v145,
                (struct _DPI_INFORMATION *)(v137 + 2472));
              ++v136;
              *(_DWORD *)(v137 + 2564) = *(_DWORD *)(v137 + 2564) & 0xFFFFFF7F | ((unsigned __int8)v188 << 7);
            }
            while ( v136 < *(_DWORD *)(v16 + 20) );
            v113 = v164;
            v95 = a9;
            v104 = v180;
          }
          UserSetScaleFactorsFromRemoteMetric(v121);
          v178 = 1;
        }
        gdmLogPixelsOfPrimary = (96 * *(_DWORD *)&v113[11].dmSpecVersion + 50) / 0x64u;
        AlignRects((unsigned __int64)v104, v187, a6);
        v102 = Buf2;
        if ( memcmp(v104, Buf2, 16LL * v187) )
        {
          v152 = WdLogNewEntry5_WdWarning(0LL);
          WdLogEvent5_WdWarning(v152);
        }
        v153 = 0;
        if ( *(_DWORD *)(v16 + 20) )
        {
          do
          {
            v154 = 5LL * v153;
            v155 = *(_QWORD *)(v16 + 40LL * v153 + 32);
            *(_QWORD *)(v155 + 2600) = *((_QWORD *)v104 + 2 * v153);
            v156 = *(void (__fastcall **)(__int64, __int64))(v155 + 3400);
            if ( v156 )
              v156((*(_QWORD *)(v155 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v155 + 2568) != 0LL), 2LL);
            v157 = *((_OWORD *)v104 + v153++);
            *(_OWORD *)(v16 + 8 * v154 + 48) = v157;
            *(_DWORD *)(v16 + 8 * v154 + 64) = *(_DWORD *)(v155 + 2480);
          }
          while ( v153 < *(_DWORD *)(v16 + 20) );
          v95 = a9;
          v102 = Buf2;
        }
        goto LABEL_306;
      }
      gDrvDpiWin8Style = 0;
      v188 = 0;
      if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
      {
        v131 = *(_DWORD *)&v113[16].dmDeviceName[12];
        if ( v131 )
        {
          v132 = (96 * HIWORD(v131) + 50) / 0x64u;
        }
        else
        {
          if ( wcsncmp(*((const wchar_t **)v93 + 26), L"WORKERDD", *((unsigned int *)v93 + 70))
            && wcsncmp(*((const wchar_t **)v93 + 26), L"TSDDD", *((unsigned int *)v93 + 70)) )
          {
            gDrvDpiWin8Style = 1;
          }
          GetDpiSetting(2LL, &v188);
          v132 = v188;
          if ( v188 <= 0x60 )
            v132 = 96;
          if ( v132 >= 0x1E0 )
            v132 = 480;
          v188 = v132;
        }
        gdmLogPixels = v132;
        v133 = 0;
        if ( *(_DWORD *)(v16 + 20) )
        {
          while ( 1 )
          {
            v134 = v133++;
            v135 = *(_QWORD *)(v16 + 40 * v134 + 32);
            *(_DWORD *)(v135 + 2196) = (unsigned __int16)v132;
            *(_DWORD *)(v135 + 2192) = (unsigned __int16)v132;
            *(_WORD *)(*(_QWORD *)(v135 + 2608) + 166LL) = gdmLogPixels;
            if ( v133 >= *(_DWORD *)(v16 + 20) )
              break;
            LOWORD(v132) = gdmLogPixels;
          }
        }
        goto LABEL_282;
      }
      v122 = (unsigned int)(96 * *(_DWORD *)&v113[11].dmSpecVersion + 50);
      v123 = (unsigned int)v122 / 0x64;
      if ( (_WORD)v123 )
        SetDpiSetting(1LL, (unsigned __int16)v123);
      if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v122, v123) >= 0 )
        GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
      if ( gDrvDpiWin8Style )
      {
        if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
          GetDpiSettingWithNoDefault(0LL, &v188);
        v124 = v188;
        if ( v188 <= 0x60 )
          v124 = 96;
        if ( v124 >= 0x1E0 )
          v124 = 480;
        v188 = v124;
      }
      else
      {
        v125 = *(_DWORD *)&v113[11].dmDeviceName[30];
        if ( !v125 )
        {
          LOWORD(v124) = 96;
          gdmLogPixels = 96;
LABEL_264:
          v126 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            while ( 1 )
            {
              v127 = (unsigned __int16)v124;
              v128 = *(_QWORD *)(v16 + 40LL * v126 + 32);
              v129 = *(_QWORD *)(v128 + 2608);
              *(_DWORD *)(v128 + 2196) = v127;
              *(_DWORD *)(v128 + 2192) = v127;
              *(_WORD *)(v129 + 166) = gdmLogPixels;
              if ( gDrvDpiWin8Style )
              {
                v130 = 100 * gdmLogPixels;
                *(_DWORD *)(v128 + 2556) = 1234568;
                *(_DWORD *)(v128 + 2480) = (v130 + 48) / 0x60u;
              }
              if ( ++v126 >= *(_DWORD *)(v16 + 20) )
                break;
              LOWORD(v124) = gdmLogPixels;
            }
          }
LABEL_282:
          gDrvDpiAdjusted = 1;
          goto LABEL_283;
        }
        v124 = (96 * v125 + 50) / 0x64u;
      }
      gdmLogPixels = v124;
      goto LABEL_264;
    }
    break;
  }
  if ( v168 != (_DWORD)v19 )
  {
    v86 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v86);
    v21 = v22 - 3;
    v22 = (unsigned int)(v22 - 3);
    LODWORD(Buf2) = v21;
LABEL_181:
    v13 = a5;
    v19 = 0LL;
    v165 = v21;
    goto LABEL_5;
  }
  v90 = WdLogNewEntry5_WdError(v15, v18, v25);
  *(_QWORD *)(v90 + 24) = -1073741823LL;
  WdLogEvent5_WdError(v90);
LABEL_313:
  if ( v16 )
  {
    DrvBackoutMDEV((struct _MDEV *)v16, v18);
    Win32FreePool(v16);
    v16 = 0LL;
  }
LABEL_315:
  if ( v174 )
    Win32FreePool((__int64)v174);
LABEL_317:
  v158 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v158 + 24) = v16;
  WdLogEvent5_WdTrace(v158);
  return (struct _MDEV *)v16;
}
