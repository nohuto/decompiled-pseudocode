/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003E0D0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0042CE0 (GreReleaseSemaphoreInternal.c)
 *     DrvGetDeviceFromName @ 0x1C005A6D0 (DrvGetDeviceFromName.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0063F4C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C006E430 (DrvGetDisplayDriverNames.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C006EB8C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C0085E68 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C008AA14 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C008C7A0 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C008C88C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C008C934 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C008CA10 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C0091310 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     AlignRects @ 0x1C0092384 (AlignRects.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092450 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092598 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C009671C (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C0099D5C (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0099FD8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C009A0A8 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A5B48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00A7628 (wcsncmp.c)
 *     memcmp @ 0x1C00AA900 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F5DD8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        PDEV **a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rbx
  _QWORD *v12; // rax
  struct _MDEV *v13; // r14
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _devicemodeW *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  struct _MDEV *v20; // r10
  struct D3DKMT_GETPATHSMODALITY *v21; // r13
  unsigned int v22; // r11d
  __int64 v23; // r15
  int v24; // edi
  unsigned int v25; // ebx
  wchar_t *v26; // r8
  unsigned int v27; // r12d
  bool v28; // sf
  PDEV **HDEV; // rdi
  wchar_t *DeviceFromName; // r14
  __int64 v31; // rax
  int v32; // eax
  int v33; // r8d
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // r8d
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned int *DisplayDriverNames; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  struct _DRV_NAMES *v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  unsigned __int16 v47; // cx
  int v48; // edi
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int i; // eax
  int PruneFlag; // ebx
  unsigned __int16 v59; // cx
  int PrimaryAttachFlags; // eax
  int v61; // eax
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int *v66; // rax
  struct _DRV_NAMES *v67; // r13
  unsigned int v68; // edi
  unsigned int v69; // r15d
  __int64 v70; // rdx
  unsigned int v71; // r12d
  int v72; // eax
  struct _devicemodeW *v73; // rbx
  struct _devicemodeW *v74; // rbx
  struct _devicemodeW *v75; // rax
  struct _devicemodeW *v76; // rbx
  int v77; // eax
  int v78; // edi
  PDEV **v79; // rax
  struct _devicemodeW *v80; // rbx
  int v81; // eax
  bool v82; // cf
  int v83; // eax
  int v84; // eax
  DWORD dmPelsHeight; // r9d
  DWORD dmPelsWidth; // r8d
  unsigned int v87; // edx
  struct _devicemodeW *v88; // rbx
  __int64 v89; // rax
  unsigned int v90; // eax
  struct tagSIZE *v91; // rdx
  __int64 v92; // r8
  struct tagSIZE v93; // rcx
  struct tagSIZE v94; // rax
  unsigned int v95; // ecx
  unsigned int *v96; // rbx
  unsigned __int64 v97; // rax
  void *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned int v104; // ebx
  struct _MDEV *v105; // r14
  MULTIDEVLOCKOBJ *v106; // rax
  MULTIDEVLOCKOBJ *v107; // r15
  __int64 v108; // rax
  __int64 v109; // rdx
  int v110; // r8d
  unsigned int v111; // edx
  __int64 v112; // rcx
  int v113; // eax
  int v114; // eax
  unsigned int v115; // edi
  _DWORD *v116; // r12
  struct tagRECT *v117; // rax
  __int64 v118; // rdx
  int v119; // r8d
  struct tagRECT *v120; // r13
  unsigned int v121; // r10d
  unsigned int v122; // r9d
  __int64 v123; // rdx
  __int64 v124; // rax
  _DWORD *v125; // r8
  __int64 v126; // rcx
  unsigned int v127; // eax
  unsigned int v128; // r12d
  struct _devicemodeW *v129; // rdi
  unsigned int v130; // r13d
  __int64 v131; // rbx
  int v132; // ecx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  _QWORD *v136; // rax
  int v137; // r12d
  __int64 v138; // rcx
  __int64 v139; // rdx
  unsigned int v140; // edx
  int v141; // eax
  unsigned int k; // r8d
  int v143; // eax
  __int64 v144; // rcx
  __int64 v145; // rdx
  int v146; // edx
  unsigned int v147; // eax
  unsigned int v148; // edx
  unsigned int j; // edx
  int v150; // ecx
  __int64 v151; // rax
  __int64 v152; // rax
  unsigned int v153; // r13d
  __int64 v154; // rbx
  unsigned int v155; // r12d
  unsigned int v156; // kr04_4
  unsigned int v157; // ecx
  unsigned int v158; // eax
  unsigned int v159; // edx
  unsigned int v160; // ecx
  unsigned int v161; // eax
  __int64 v162; // rdx
  unsigned int v163; // r12d
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rax
  __int64 v172; // rax
  unsigned int v173; // r14d
  __int64 v174; // r12
  __int64 v175; // rbx
  void (__fastcall *v176)(__int64, __int64); // rax
  struct tagRECT v177; // xmm0
  __int64 v178; // rax
  unsigned int v180; // [rsp+30h] [rbp-C9h]
  int v181; // [rsp+38h] [rbp-C1h]
  int v182; // [rsp+38h] [rbp-C1h]
  int v183; // [rsp+40h] [rbp-B9h]
  int v184; // [rsp+58h] [rbp-A1h]
  unsigned int v185; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v186; // [rsp+60h] [rbp-99h] BYREF
  unsigned int v187; // [rsp+68h] [rbp-91h]
  int v188; // [rsp+6Ch] [rbp-8Dh]
  unsigned int v189; // [rsp+70h] [rbp-89h]
  int v190; // [rsp+74h] [rbp-85h]
  struct tagSIZE v191; // [rsp+78h] [rbp-81h] BYREF
  unsigned int v192; // [rsp+80h] [rbp-79h] BYREF
  int v193; // [rsp+84h] [rbp-75h] BYREF
  int v194; // [rsp+88h] [rbp-71h]
  unsigned int v195; // [rsp+8Ch] [rbp-6Dh]
  struct _devicemodeW *v196; // [rsp+90h] [rbp-69h]
  struct tagSIZE v197; // [rsp+98h] [rbp-61h] BYREF
  unsigned int v198; // [rsp+A0h] [rbp-59h] BYREF
  void *Buf2; // [rsp+A8h] [rbp-51h]
  int v200; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v201; // [rsp+B8h] [rbp-41h]
  struct tagRECT *v202; // [rsp+C0h] [rbp-39h] BYREF
  _QWORD v203[2]; // [rsp+C8h] [rbp-31h] BYREF
  _BYTE v204[96]; // [rsp+D8h] [rbp-21h] BYREF
  MULTIDEVLOCKOBJ *v206; // [rsp+148h] [rbp+4Fh]
  unsigned int v209; // [rsp+158h] [rbp+5Fh]
  unsigned int v210; // [rsp+160h] [rbp+67h] BYREF

  v210 = a4;
  v9 = a4;
  v184 = 0;
  v187 = 0;
  v190 = 0;
  v200 = 0;
  v194 = a4 & 1;
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
    goto LABEL_314;
  v14[5] = 0;
  *((_QWORD *)v14 + 3) = a3;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
  v20 = 0LL;
  v196 = v17;
  if ( !v17 )
    goto LABEL_310;
  v21 = a9;
  v22 = 1;
  v188 = a6 != 0;
  v23 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    v195 = v23;
LABEL_5:
    v24 = v184;
    v15 = v22;
    v25 = 0;
    v185 = v22;
    v189 = 0;
    v18 = 0xFFFFFFFFLL;
    v26 = 0LL;
    v201 = 0LL;
    v27 = 0;
    LODWORD(Buf2) = 0;
    v192 = 0;
    v198 = 0;
    v203[0] = v23;
    while ( 1 )
    {
      v28 = v24 < 0;
      if ( v24 )
        break;
      HDEV = (PDEV **)v20;
      v197 = (struct tagSIZE)v20;
      v191 = (struct tagSIZE)v20;
      if ( a1 )
      {
        if ( !v26 )
        {
          DeviceFromName = DrvGetDeviceFromName(a1, 0);
          v201 = (unsigned __int64)DeviceFromName;
          v20 = 0LL;
          v185 &= -(a5 != 0LL);
          v15 = v185;
          v22 = 1;
          goto LABEL_21;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_47;
      }
      if ( v13 )
      {
        if ( v27 >= *((_DWORD *)v13 + 5) )
          goto LABEL_94;
        v31 = v27;
        v27 += v22;
        LODWORD(Buf2) = v27;
        HDEV = (PDEV **)*((_QWORD *)v13 + 5 * v31 + 4);
        v197 = (struct tagSIZE)HDEV;
        DeviceFromName = (wchar_t *)HDEV[324];
        if ( DeviceFromName == v26 )
          goto LABEL_88;
        v32 = v187;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          v32 = v22 ^ v187;
        if ( v32 )
          goto LABEL_88;
        EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
        EngAcquireSemaphore((HSEMAPHORE)HDEV[5]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", (int)HDEV[5], 11);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        ++*((_DWORD *)HDEV + 3);
        PDEV::IncrementClientReferenceCount((PDEV *)HDEV);
        if ( ((_DWORD)HDEV[4] & 0x400) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v33);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          DrvEnableDisplay((HSEMAPHORE *)HDEV, v34);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v33);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", (int)HDEV[5], v35);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)HDEV[5]);
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v36);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        v22 = 1;
        v37 = (*((unsigned __int8 *)DeviceFromName + 160) >> 2) & 1;
        v192 = 1;
        v198 = v37;
        v20 = 0LL;
LABEL_20:
        v15 = v185;
LABEL_21:
        v18 = 0xFFFFFFFFLL;
        goto LABEL_22;
      }
LABEL_47:
      if ( v23 != 4 )
      {
        DeviceFromName = gpGraphicsDeviceList;
        for ( i = (int)v20; DeviceFromName && i != v27; i += v22 )
          DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
        v27 += v22;
        LODWORD(Buf2) = v27;
        if ( gbBaseVideo != (_DWORD)v20 && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_179;
LABEL_22:
        if ( v23 == 4 )
        {
          if ( HDEV )
          {
            v38 = WdLogNewEntry5_WdAssertion(v15, 0xFFFFFFFFLL, v26, v19);
            WdLogEvent5_WdAssertion(v38);
            v20 = 0LL;
          }
          if ( !DeviceFromName || (v15 = 1LL, (*((_DWORD *)DeviceFromName + 41) & 1) != 0) )
          {
LABEL_38:
            if ( HDEV )
              goto LABEL_68;
            if ( !IsPrimaryPathInCloneGroup(v21, v25)
              || (v52 = 264LL * v25, *(_DWORD *)((char *)v21 + v52 + 240) < (int)v20) )
            {
              v54 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v19);
              WdLogEvent5_WdAssertion(v54);
              v20 = 0LL;
            }
            v15 = (unsigned __int16)v20;
            v22 = 1;
            if ( (unsigned __int16)v20 < *((_WORD *)v21 + 10) )
            {
              do
              {
                v55 = 264LL * (unsigned __int16)v15;
                if ( *(_DWORD *)((char *)v21 + v55 + 232) == *((_DWORD *)v21 + 66 * v25 + 58) )
                  *(_DWORD *)((char *)v21 + v55 + 240) = -1073741823;
                LOWORD(v15) = v15 + 1;
              }
              while ( (unsigned __int16)v15 < *((_WORD *)v21 + 10) );
            }
          }
          else
          {
            DisplayDriverNames = DrvGetDisplayDriverNames((__int64)DeviceFromName);
            v20 = 0LL;
            v42 = (struct _DRV_NAMES *)DisplayDriverNames;
            if ( !DisplayDriverNames )
              goto LABEL_36;
            v43 = *((unsigned __int16 *)v21 + 10);
            if ( v25 >= (unsigned int)v43 )
            {
              v44 = WdLogNewEntry5_WdAssertion(v43, v40, v41, v19);
              WdLogEvent5_WdAssertion(v44);
            }
            v45 = 264LL * v25;
            if ( !*(_QWORD *)((char *)v21 + v45 + 264) )
            {
              v46 = WdLogNewEntry5_WdAssertion(v43, v40, v41, v19);
              WdLogEvent5_WdAssertion(v46);
            }
            v47 = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              GetDpiSetting(1LL, &v202);
              v47 = (unsigned __int16)v202;
              gdmLogPixels = (unsigned __int16)v202;
            }
            v48 = (v210 >> 2) & 1;
            *(_WORD *)(*(_QWORD *)((char *)v21 + v45 + 264) + 166LL) = v47;
            DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName, v40);
            DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            HDEV = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                     v42,
                     *(struct _devicemodeW **)((char *)v21 + v45 + 264),
                     a3,
                     DriverCapableOverRide,
                     DriverAccelerationsLevel,
                     v194,
                     v48,
                     1u,
                     (HDEV *)&v191);
            Win32FreePool((__int64)v42);
            v20 = 0LL;
            if ( !HDEV )
              goto LABEL_37;
            v15 = *(unsigned int *)((char *)v21 + v45 + 236);
            v25 = v189;
            *((_DWORD *)HDEV + 665) = v15;
LABEL_36:
            if ( !HDEV )
            {
LABEL_37:
              gpLastFailedPhysDisp = (__int64)DeviceFromName;
              DrvLogDisplayDriverEvent(2);
              v25 = v189;
              v20 = 0LL;
              goto LABEL_38;
            }
LABEL_68:
            v22 = 1;
          }
          v189 = v25 + 1;
LABEL_160:
          if ( !HDEV )
          {
            v15 = v185;
LABEL_179:
            v13 = a5;
            v24 = v184;
            goto LABEL_91;
          }
LABEL_161:
          v89 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v89);
          v20 = 0LL;
          v22 = 1;
          v190 = 1;
          if ( v198 )
            *((_DWORD *)DeviceFromName + 40) |= 4u;
          else
            *((_DWORD *)DeviceFromName + 40) &= ~4u;
          if ( !*(_QWORD *)&v191 )
          {
            if ( a5 )
            {
              v90 = *((_DWORD *)a5 + 5);
              if ( v90 )
              {
                v91 = (struct tagSIZE *)((char *)a5 + 32);
                v92 = v90;
                do
                {
                  v93 = *v91;
                  v91 += 5;
                  v94 = v191;
                  if ( DeviceFromName == *(wchar_t **)(*(_QWORD *)&v93 + 2592LL) )
                    v94 = v93;
                  v191 = v94;
                  --v92;
                }
                while ( v92 );
              }
            }
          }
          *(_QWORD *)(v16 + 40LL * *(unsigned int *)(v16 + 20) + 32) = HDEV;
          *(struct tagSIZE *)(v16 + 40 * (*(unsigned int *)(v16 + 20) + 1LL)) = v191;
          v95 = *(_DWORD *)(v16 + 20);
          if ( v95 + 2 >= v95 )
          {
            *(_DWORD *)(v16 + 20) = v95 + 1;
            v96 = (unsigned int *)v16;
            v97 = 72LL * (v95 + 2);
            if ( v97 > 0xFFFFFFFF )
            {
              v16 = 0LL;
            }
            else
            {
              v98 = PALLOCMEM2((unsigned int)v97, 1936876615LL, 1);
              v20 = 0LL;
              v16 = (__int64)v98;
              v22 = 1;
            }
            if ( !v16 )
            {
              v13 = a5;
              v24 = -1073741670;
              v184 = -1073741670;
              v16 = (__int64)v96;
              goto LABEL_90;
            }
            memmove((void *)v16, v96, 72LL * v96[5]);
            Win32FreePool((__int64)v96);
            v20 = 0LL;
LABEL_87:
            v22 = 1;
          }
LABEL_88:
          v13 = a5;
          goto LABEL_89;
        }
        if ( !DeviceFromName )
          goto LABEL_94;
        if ( ((unsigned __int8)*((_DWORD *)DeviceFromName + 41) & (unsigned __int8)v22) != 0 )
          goto LABEL_179;
        if ( a6 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v188 = PruneFlag;
          LODWORD(v20) = 0;
        }
        else
        {
          PruneFlag = v188;
        }
        if ( HDEV )
          goto LABEL_161;
        if ( gForceDisconnect != (_DWORD)v20 || v23 == 3 )
          v59 = -1;
        else
          v59 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v59, &v198, &v192);
        v20 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_94;
        if ( ((v23 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          if ( v23 == 2 )
          {
            v61 = *((_DWORD *)DeviceFromName + 40);
            if ( (v61 & 8) != 0 )
            {
              if ( !v192 )
                goto LABEL_87;
              v62 = v187 == 0;
            }
            else
            {
              if ( (v61 & 0x2000000) != 0 || v190 )
                goto LABEL_87;
              v62 = gProtocolType == -1;
            }
            if ( v62 )
              goto LABEL_87;
          }
          else
          {
            v64 = WdLogNewEntry5_WdAssertion(v15, v18, v26, v19);
            WdLogEvent5_WdAssertion(v64);
            v20 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v190 )
              goto LABEL_87;
          }
        }
        else
        {
          if ( !v192 )
            goto LABEL_87;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v65 = v187;
          }
          else
          {
            if ( !v187 )
              goto LABEL_110;
            v65 = 0;
          }
          if ( !v65 )
            goto LABEL_87;
        }
LABEL_110:
        v66 = DrvGetDisplayDriverNames((__int64)DeviceFromName);
        v20 = 0LL;
        v67 = (struct _DRV_NAMES *)v66;
        if ( !v66 )
          goto LABEL_87;
        v68 = (*((_DWORD *)DeviceFromName + 40) & 8) != 0 ? 4 : 1;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
        {
          v69 = 0;
          v71 = 0;
        }
        else
        {
          v69 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v71 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName, v70);
        }
        if ( a2 )
        {
          v72 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v186,
                  &v193,
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
          v73 = v196;
          memset(v196, 0, sizeof(struct _devicemodeW));
          v73->dmSize = 220;
          v72 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v186,
                  &v193,
                  0LL,
                  v73,
                  0,
                  v188,
                  a7,
                  a8,
                  0LL);
        }
        if ( v72 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4);
          goto LABEL_119;
        }
        if ( v72 == -1073741776 )
        {
          v88 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 32) + 2608LL);
          if ( v186 && v186 != v196 )
          {
            Win32FreePool((__int64)v186);
            v186 = 0LL;
          }
          v72 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v186,
                  &v193,
                  0LL,
                  v88,
                  0,
                  v188,
                  a7,
                  a8,
                  0LL);
        }
        if ( v72 >= 0 )
        {
LABEL_119:
          v74 = v186;
          HDEV = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                   v67,
                   v186,
                   a3,
                   v69,
                   v71,
                   v194,
                   (v210 >> 2) & 1,
                   v68,
                   (HDEV *)&v191);
          if ( !HDEV && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
        }
        else
        {
          DrvDxgkLogCodePointPacket(0x3Au, 2u, 0, 0);
          v74 = v186;
          HDEV = (PDEV **)v197;
          if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 4;
        }
        v75 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_153;
        if ( !HDEV )
        {
          DrvLogDisplayDriverEvent(4);
          if ( v74 )
          {
            if ( v74->dmBitsPerPel == 4 )
              DrvLogDisplayDriverEvent(5);
            if ( v74 != v196 )
            {
              Win32FreePool((__int64)v74);
              v186 = 0LL;
            }
          }
          v76 = v196;
          memset(v196, 0, sizeof(struct _devicemodeW));
          v76->dmSize = 220;
          v77 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v186,
                  &v193,
                  0LL,
                  v76,
                  1,
                  v188,
                  a7,
                  a8,
                  0LL);
          v74 = v186;
          if ( v77 >= 0 )
          {
            v78 = (v210 >> 2) & 1;
            v79 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                    v67,
                    v186,
                    a3,
                    v69,
                    v71,
                    v194,
                    v78,
                    1u,
                    (HDEV *)&v191);
            v197 = (struct tagSIZE)v79;
            if ( v79 || v74->dmPelsWidth == 640 && v74->dmPelsHeight == 480 && v74->dmBitsPerPel == 4 )
            {
LABEL_139:
              HDEV = v79;
            }
            else
            {
              if ( v74 != v196 )
              {
                Win32FreePool((__int64)v74);
                v186 = 0LL;
              }
              v80 = v196;
              memset(v196, 0, sizeof(struct _devicemodeW));
              v80->dmSize = 220;
              v81 = *((_DWORD *)DeviceFromName + 40) & 0x800000;
              v80->dmPelsWidth = 640;
              v82 = v81 != 0;
              v80->dmPelsHeight = 480;
              v83 = a8;
              v80->dmFields = 1835008;
              v183 = a7;
              v182 = v188;
              v80->dmBitsPerPel = v82 ? 32 : 4;
              v84 = DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                      &v186,
                      &v193,
                      0LL,
                      v80,
                      0,
                      v182,
                      v183,
                      v83,
                      0LL);
              v74 = v186;
              if ( v84 >= 0 )
              {
                v79 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        v67,
                        v186,
                        a3,
                        v69,
                        v71,
                        v194,
                        v78,
                        1u,
                        (HDEV *)&v191);
                goto LABEL_139;
              }
              HDEV = (PDEV **)v197;
            }
          }
          if ( v74 )
          {
            dmPelsHeight = v74->dmPelsHeight;
            dmPelsWidth = v74->dmPelsWidth;
            v87 = HDEV != 0LL;
          }
          else
          {
            v87 = 2;
            dmPelsHeight = v196->dmPelsHeight;
            dmPelsWidth = v196->dmPelsWidth;
          }
          DrvDxgkLogCodePointPacket(0x1Au, v87, dmPelsWidth, dmPelsHeight);
          v75 = 0LL;
LABEL_153:
          if ( !HDEV && !v75 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2);
          }
        }
        if ( v74 && v74 != v196 )
          Win32FreePool((__int64)v74);
        Win32FreePool((__int64)v67);
        v20 = 0LL;
        v22 = 1;
        goto LABEL_160;
      }
      if ( v25 >= *((unsigned __int16 *)v21 + 10) )
        goto LABEL_94;
      if ( IsPrimaryPathInCloneGroup(v21, v25) )
      {
        v56 = 264LL * v25;
        if ( *(_DWORD *)((char *)v21 + v56 + 240) >= (int)v20 )
        {
          for ( DeviceFromName = gpGraphicsDeviceList;
                DeviceFromName
             && ((*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0
              || *((_DWORD *)DeviceFromName + 66) != *(_DWORD *)((char *)v21 + v56 + 64)
              || *((_DWORD *)DeviceFromName + 67) != *(_DWORD *)((char *)v21 + v56 + 68)
              || *((_DWORD *)DeviceFromName + 68) != *(_DWORD *)((char *)v21 + v56 + 72));
                DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16) )
          {
            ;
          }
          goto LABEL_20;
        }
      }
      v189 = v22 + v25;
LABEL_89:
      v24 = v184;
LABEL_90:
      v15 = v185;
LABEL_91:
      v21 = a9;
      v18 = 0xFFFFFFFFLL;
      v25 = v189;
      v27 = (unsigned int)Buf2;
      v23 = v203[0];
      v26 = (wchar_t *)v201;
      if ( !(_DWORD)v15 )
      {
        v28 = v24 < 0;
        break;
      }
    }
    if ( v28 )
      goto LABEL_192;
LABEL_94:
    v23 = v195;
    if ( v195 != 4 )
    {
      if ( v190 != (_DWORD)v20 )
      {
        if ( v187 == (_DWORD)v20 )
        {
          v101 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v101);
          v22 = 1;
          goto LABEL_97;
        }
        v184 = (int)v20;
        goto LABEL_193;
      }
      if ( v195 == 1 )
      {
        v99 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v99);
        v20 = 0LL;
        v23 = 2LL;
        a8 = 0;
LABEL_186:
        v13 = a5;
        v22 = 1;
        continue;
      }
      if ( v195 == 2 && gProtocolType == (_WORD)v20 )
      {
        v100 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v100);
        v20 = 0LL;
        v23 = 3LL;
        goto LABEL_186;
      }
      if ( !v27 )
      {
        v108 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v108);
        goto LABEL_310;
      }
      v103 = WdLogNewEntry5_WdTrace(v15);
      WdLogEvent5_WdTrace(v103);
      v24 = -1073741204;
      v20 = 0LL;
      v184 = -1073741204;
LABEL_192:
      if ( v24 )
        goto LABEL_309;
LABEL_193:
      if ( (v210 & 2) != 0 )
        goto LABEL_309;
      v104 = (unsigned int)v20;
      a5 = v20;
      a6 = (unsigned int)v20;
      v105 = v20;
      v106 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
      v206 = v106;
      v107 = v106;
      if ( v106 )
      {
        *(_QWORD *)v106 = 1LL;
        *((_QWORD *)v106 + 1) = 0LL;
        *((_QWORD *)v106 + 2) = 0LL;
      }
      else
      {
        v107 = 0LL;
        v206 = 0LL;
      }
      if ( !v107 )
        goto LABEL_310;
      MULTIDEVLOCKOBJ::vInit(v107, (struct _MDEV *)v16);
      if ( (*(_DWORD *)v107 & 1) == 0 )
      {
LABEL_308:
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v107, v109, v110);
LABEL_309:
        if ( v184 < 0 )
          goto LABEL_310;
        goto LABEL_312;
      }
      MULTIDEVLOCKOBJ::vLock(v107);
      v111 = 0;
      if ( *(_DWORD *)(v16 + 20) )
      {
        do
        {
          v112 = *(_QWORD *)(*(_QWORD *)(v16 + 40LL * v111 + 32) + 2592LL);
          v113 = *(_DWORD *)(v112 + 160);
          if ( (v113 & 8) != 0 )
          {
            if ( (v113 & 4) != 0 )
              *(_DWORD *)(v112 + 160) = v113 & 0xFFFFFFFB;
          }
          else if ( !v105 )
          {
            v104 = v111;
          }
          v114 = *(_DWORD *)(v112 + 160);
          if ( (v114 & 4) != 0 )
          {
            if ( v105 )
            {
              v184 = -1073741438;
              *(_DWORD *)(v112 + 160) = v114 & 0xFFFFFFFB;
            }
            else
            {
              v105 = (struct _MDEV *)v112;
              v104 = v111;
            }
          }
          ++v111;
        }
        while ( v111 < *(_DWORD *)(v16 + 20) );
        a6 = v104;
        a5 = v105;
      }
      v115 = 16 * *(_DWORD *)(v16 + 20);
      Buf2 = PALLOCMEM2(v115, 1936876615LL, 0);
      v116 = Buf2;
      v117 = (struct tagRECT *)PALLOCMEM2(v115, 1936876615LL, 0);
      v202 = v117;
      v120 = v117;
      if ( !v116 )
      {
LABEL_304:
        if ( v120 )
          Win32FreePool((__int64)v120);
        MULTIDEVLOCKOBJ::vUnlock(v107, v118, v119);
        if ( v200 )
          ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
        goto LABEL_308;
      }
      if ( !v117 )
      {
LABEL_303:
        Win32FreePool((__int64)v116);
        goto LABEL_304;
      }
      v121 = 0;
      v209 = 0;
      v122 = 0;
      if ( *(_DWORD *)(v16 + 20) )
      {
        do
        {
          v123 = 2LL * v122;
          v124 = *(_QWORD *)(v16 + 40LL * v122 + 32);
          v125 = *(_DWORD **)(v124 + 2608);
          v116[2 * v123] = v125[19];
          v116[2 * v123 + 1] = v125[20];
          v116[2 * v123 + 2] = v125[19] + v125[43];
          v116[2 * v123 + 3] = v125[20] + v125[44];
          if ( (*(_DWORD *)(*(_QWORD *)(v124 + 2592) + 160LL) & 8) == 0 )
          {
            if ( !v105 && !v125[19] && !v125[20] )
            {
              v104 = v122;
              v105 = *(struct _MDEV **)(v124 + 2592);
            }
            ++v121;
          }
          ++v122;
        }
        while ( v122 < *(_DWORD *)(v16 + 20) );
        v107 = v206;
        v209 = v121;
        a6 = v104;
        a5 = v105;
      }
      memmove(v120, v116, v115);
      if ( !gDrvDpiAdjusted )
      {
        gDrvDpiWin8Style = 0;
        v210 = 0;
        if ( ((gProtocolType + 1) & 0xFFFE) == 0
          && (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v126, 65534LL) >= 0 )
        {
          GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
          if ( gDrvDpiWin8Style )
          {
            if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
              GetDpiSettingWithNoDefault(0LL, &v210);
            v127 = v210;
            if ( v210 <= 0x60 )
              v127 = 96;
            if ( v127 >= 0x1E0 )
              LOWORD(v127) = 480;
            gdmLogPixels = v127;
          }
        }
      }
      v128 = 0;
      v129 = *(struct _devicemodeW **)(v16 + 40LL * v104 + 32);
      v186 = v129;
      *(_DWORD *)(*(_QWORD *)&v129[11].dmPelsWidth + 160LL) |= 4u;
      if ( *(_DWORD *)(v16 + 20) )
      {
        v130 = a6;
        do
        {
          v131 = *(_QWORD *)(v16 + 40LL * v128 + 32);
          if ( (*(_DWORD *)(*(_QWORD *)(v131 + 2592) + 160LL) & 0x800000) != 0 )
          {
            v132 = 0;
            if ( v128 == v130 )
              v132 = 32;
            *(_DWORD *)(v131 + 2564) = *(_DWORD *)(v131 + 2564) & 0xFFFFFFDF | v132;
            v210 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))qword_1C01908E0)(
                     *(_QWORD *)(*(_QWORD *)(v131 + 2592) + 256LL),
                     *(unsigned int *)(*(_QWORD *)(v131 + 2592) + 272LL),
                     0xFFFFFFFFLL,
                     v131 + 2152,
                     v131 + 2472);
            if ( (v210 & 0x80000000) != 0 )
            {
              v136 = (_QWORD *)WdLogNewEntry5_WdError(v134, v133, v135);
              v136[3] = (int)v210;
              v136[4] = *(_QWORD *)(*(_QWORD *)(v131 + 2592) + 256LL);
              v136[5] = *(unsigned int *)(*(_QWORD *)(v131 + 2592) + 272LL);
              WdLogEvent5_WdError(v136);
            }
          }
          ++v128;
        }
        while ( v128 < *(_DWORD *)(v16 + 20) );
        v129 = v186;
        v107 = v206;
        v105 = a5;
        v120 = v202;
      }
      v137 = 1;
      if ( gDrvDpiAdjusted )
      {
LABEL_280:
        if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
        {
          *((_DWORD *)gpsi + 555) &= ~0x40u;
        }
        else
        {
          LODWORD(a5) = 1;
          if ( *(_DWORD *)(v16 + 20) )
          {
            v153 = 0;
            do
            {
              v154 = *(_QWORD *)(v16 + 40LL * v153 + 32);
              v155 = *(_DWORD *)(v154 + 3544);
              v156 = *(_DWORD *)(v154 + 2164);
              LOBYTE(v210) = ((*(_DWORD *)(*(_QWORD *)(v154 + 2608) + 84LL) - 1) & 0xFFFFFFFD) == 0;
              v157 = v156 / 0x3E8;
              v158 = *(_DWORD *)(v154 + 2160) / 0x3E8u;
              if ( (_BYTE)v210 )
              {
                v158 = v156 / 0x3E8;
                v157 = *(_DWORD *)(v154 + 2160) / 0x3E8u;
              }
              v159 = *(_DWORD *)(v154 + 2172);
              a9 = (struct D3DKMT_GETPATHSMODALITY *)__PAIR64__(v157, v158);
              v160 = *(_DWORD *)(v154 + 2168);
              v191 = (struct tagSIZE)a9;
              v161 = v160;
              if ( (_BYTE)v210 )
              {
                v161 = v159;
                v159 = v160;
              }
              v201 = __PAIR64__(v159, v161);
              v197 = (struct tagSIZE)__PAIR64__(v159, v161);
              if ( v155 )
              {
                FillPhysicalDpiOnly(&v191, &v197, (struct tagSIZE *)(v154 + 2472));
                v163 = HIWORD(v155);
                *(_DWORD *)(v154 + 2564) |= 0x200u;
                *(_DWORD *)(v154 + 2480) = v163;
                *(_DWORD *)(v154 + 2484) = v163;
                *(_DWORD *)(v154 + 2532) = v163;
                *(_DWORD *)(v154 + 2528) = v163;
                v137 = (int)a5;
              }
              else
              {
                *(_DWORD *)(v154 + 2564) &= ~0x200u;
                LODWORD(a5) = 0;
                v137 = 0;
                memset(v204, 0, 0x20uLL);
                v203[0] = 0x2000000001LL;
                v203[1] = v204;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v203, v164, v165, v166) < 0 )
                {
                  v171 = WdLogNewEntry5_WdAssertion(v168, v167, v169, v170);
                  WdLogEvent5_WdAssertion(v171);
                }
                FillDpiInfo(
                  &v191,
                  &v197,
                  (const struct _DPI_SCALE_FACTOR_COLLECTION *)v204,
                  v170,
                  gdmLogPixels,
                  v180,
                  v181,
                  (struct _DPI_INFORMATION *)(v154 + 2472));
              }
              GetRemoteScaleOverrideTestHook(
                (STRSAFE_PCNZWCH)(*(_QWORD *)(v154 + 2592) + 64LL),
                v162,
                (struct _DPI_INFORMATION *)(v154 + 2472));
              ++v153;
              *(_DWORD *)(v154 + 2564) = *(_DWORD *)(v154 + 2564) & 0xFFFFFF7F | ((unsigned __int8)v210 << 7);
            }
            while ( v153 < *(_DWORD *)(v16 + 20) );
            v129 = v186;
            v107 = v206;
            v120 = v202;
          }
          UserSetScaleFactorsFromRemoteMetric(v137);
          v200 = 1;
        }
        gdmLogPixelsOfPrimary = (96 * *(_DWORD *)&v129[11].dmSpecVersion + 50) / 0x64u;
        AlignRects(v120, v209, a6);
        v116 = Buf2;
        if ( memcmp(v120, Buf2, 16LL * v209) )
        {
          v172 = WdLogNewEntry5_WdWarning(0LL);
          WdLogEvent5_WdWarning(v172);
        }
        v173 = 0;
        if ( *(_DWORD *)(v16 + 20) )
        {
          do
          {
            v174 = 5LL * v173;
            v175 = *(_QWORD *)(v16 + 40LL * v173 + 32);
            *(_QWORD *)(v175 + 2600) = *(_QWORD *)&v120[v173].left;
            v176 = *(void (__fastcall **)(__int64, __int64))(v175 + 3400);
            if ( v176 )
              v176((*(_QWORD *)(v175 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v175 + 2568) != 0LL), 2LL);
            v177 = v120[v173++];
            *(struct tagRECT *)(v16 + 8 * v174 + 48) = v177;
            *(_DWORD *)(v16 + 8 * v174 + 64) = *(_DWORD *)(v175 + 2480);
          }
          while ( v173 < *(_DWORD *)(v16 + 20) );
          v107 = v206;
          v116 = Buf2;
        }
        goto LABEL_303;
      }
      gDrvDpiWin8Style = 0;
      v210 = 0;
      if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
      {
        v147 = *(_DWORD *)&v129[16].dmDeviceName[12];
        if ( v147 )
        {
          v148 = (96 * HIWORD(v147) + 50) / 0x64u;
        }
        else
        {
          if ( wcsncmp(*((const wchar_t **)v105 + 26), L"WORKERDD", *((unsigned int *)v105 + 70))
            && wcsncmp(*((const wchar_t **)v105 + 26), L"TSDDD", *((unsigned int *)v105 + 70)) )
          {
            gDrvDpiWin8Style = 1;
          }
          GetDpiSetting(2LL, &v210);
          v148 = v210;
          if ( v210 <= 0x60 )
            v148 = 96;
          if ( v148 >= 0x1E0 )
            v148 = 480;
          v210 = v148;
        }
        gdmLogPixels = v148;
        for ( j = 0; j < *(_DWORD *)(v16 + 20); *(_WORD *)(*(_QWORD *)(v152 + 2608) + 166LL) = gdmLogPixels )
        {
          v150 = gdmLogPixels;
          v151 = j++;
          v152 = *(_QWORD *)(v16 + 40 * v151 + 32);
          *(_DWORD *)(v152 + 2196) = gdmLogPixels;
          *(_DWORD *)(v152 + 2192) = v150;
        }
        goto LABEL_279;
      }
      v138 = (unsigned int)(96 * *(_DWORD *)&v129[11].dmSpecVersion + 50);
      v139 = (unsigned int)v138 / 0x64;
      if ( (_WORD)v139 )
        SetDpiSetting(1LL, (unsigned __int16)v139);
      if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v138, v139) >= 0 )
        GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
      if ( gDrvDpiWin8Style )
      {
        if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
          GetDpiSettingWithNoDefault(0LL, &v210);
        v140 = v210;
        if ( v210 <= 0x60 )
          v140 = 96;
        if ( v140 >= 0x1E0 )
          v140 = 480;
        v210 = v140;
      }
      else
      {
        v141 = *(_DWORD *)&v129[11].dmDeviceName[30];
        if ( !v141 )
        {
          gdmLogPixels = 96;
LABEL_262:
          for ( k = 0; k < *(_DWORD *)(v16 + 20); ++k )
          {
            v143 = gdmLogPixels;
            v144 = *(_QWORD *)(v16 + 40LL * k + 32);
            v145 = *(_QWORD *)(v144 + 2608);
            *(_DWORD *)(v144 + 2196) = gdmLogPixels;
            *(_DWORD *)(v144 + 2192) = v143;
            *(_WORD *)(v145 + 166) = gdmLogPixels;
            if ( gDrvDpiWin8Style )
            {
              v146 = 100 * gdmLogPixels;
              *(_DWORD *)(v144 + 2556) = 1234568;
              *(_DWORD *)(v144 + 2480) = (v146 + 48) / 0x60u;
            }
          }
LABEL_279:
          gDrvDpiAdjusted = 1;
          goto LABEL_280;
        }
        v140 = (96 * v141 + 50) / 0x64u;
      }
      gdmLogPixels = v140;
      goto LABEL_262;
    }
    break;
  }
  if ( v190 != (_DWORD)v20 )
  {
    v63 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v63);
    v22 = v23 - 3;
    v23 = (unsigned int)(v23 - 3);
    v195 = v22;
LABEL_97:
    v13 = a5;
    v20 = 0LL;
    v187 = v22;
    goto LABEL_5;
  }
  v102 = WdLogNewEntry5_WdError(v15, v18, v26);
  *(_QWORD *)(v102 + 24) = -1073741823LL;
  WdLogEvent5_WdError(v102);
LABEL_310:
  if ( v16 )
  {
    DrvBackoutMDEV((struct _MDEV *)v16, v18);
    Win32FreePool(v16);
    v16 = 0LL;
  }
LABEL_312:
  if ( v196 )
    Win32FreePool((__int64)v196);
LABEL_314:
  v178 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v178 + 24) = v16;
  WdLogEvent5_WdTrace(v178);
  return (struct _MDEV *)v16;
}
