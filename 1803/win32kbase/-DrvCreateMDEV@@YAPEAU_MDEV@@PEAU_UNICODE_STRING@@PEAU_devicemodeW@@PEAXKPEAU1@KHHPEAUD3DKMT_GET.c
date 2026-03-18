/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344
 * Callers:
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0033610 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0042578 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C004E990 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00533C0 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0068250 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00690B0 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C006919C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0069240 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C006931C (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     AlignRects @ 0x1C006C274 (AlignRects.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006CE78 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C006CF80 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D650 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C006DE2C (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C006E48C (UserSetScaleFactorsFromRemoteMetric.c)
 *     wcsncmp @ 0x1C00741E4 (wcsncmp.c)
 *     memcmp @ 0x1C0078C50 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00CCB9C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CED80 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00CFE64 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D16D8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00D182C (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D1E74 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct PDEV *a3,
        unsigned int a4,
        struct _MDEV *a5,
        int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rbx
  _QWORD *v12; // rax
  struct _MDEV *v13; // r14
  _DWORD *v14; // rax
  __int64 cx_low; // rcx
  __int64 v16; // rsi
  struct _devicemodeW *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct tagSIZE v20; // r11
  unsigned int v21; // r10d
  struct D3DKMT_GETPATHSMODALITY *v22; // r13
  unsigned int v23; // ebx
  int v24; // edi
  unsigned int v25; // r12d
  unsigned int v26; // r15d
  bool v27; // sf
  struct PDEV *HDEV; // rdi
  wchar_t *DeviceFromName; // r14
  __int64 v30; // rax
  int v31; // ebx
  int v32; // ecx
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // r10
  LONG i; // eax
  __int64 v40; // rax
  unsigned int *DisplayDriverNames; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _DRV_NAMES *v45; // r12
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  int PruneFlag; // eax
  unsigned __int16 v62; // cx
  int PrimaryAttachFlags; // eax
  __int64 v64; // r9
  int v65; // eax
  bool v66; // zf
  __int64 v67; // rax
  int v68; // eax
  unsigned int *v69; // rax
  struct _DRV_NAMES *v70; // r13
  unsigned int v71; // edi
  unsigned int v72; // r15d
  unsigned int v73; // r12d
  struct _devicemodeW *Src; // rax
  struct _devicemodeW *v75; // rbx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // r8
  struct _devicemodeW *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // r8
  struct _devicemodeW *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  struct _devicemodeW *v85; // rbx
  int v86; // eax
  struct PDEV *v87; // rax
  struct _devicemodeW *v88; // rbx
  int v89; // eax
  int v90; // eax
  __int64 dmPelsWidth; // r8
  __int64 v92; // rdx
  struct _devicemodeW *v93; // rbx
  __int64 v94; // rax
  int v95; // eax
  unsigned int v96; // eax
  unsigned int v97; // eax
  struct tagSIZE *v98; // rdx
  __int64 v99; // r8
  struct tagSIZE v100; // rcx
  struct tagSIZE v101; // rax
  unsigned int v102; // ecx
  unsigned int *v103; // rbx
  unsigned __int64 v104; // rax
  void *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // r13d
  struct _MDEV *v113; // r15
  MULTIDEVLOCKOBJ *v114; // rax
  MULTIDEVLOCKOBJ *v115; // r14
  __int64 v116; // rax
  __int64 v117; // rdx
  int v118; // r8d
  unsigned int v119; // ebx
  unsigned int v120; // edx
  __int64 v121; // rcx
  int v122; // eax
  unsigned int v123; // ebx
  __int64 v124; // rdi
  struct _devicemodeW *v125; // rax
  __int64 v126; // rdx
  int v127; // r8d
  struct tagRECT *v128; // r12
  unsigned int v129; // r10d
  unsigned int v130; // r9d
  __int64 v131; // rdx
  __int64 v132; // rax
  _DWORD *v133; // r8
  __int64 v134; // rcx
  unsigned int v135; // eax
  __int64 v136; // rax
  unsigned int v137; // r13d
  struct D3DKMT_GETPATHSMODALITY *v138; // rdi
  unsigned int v139; // ecx
  __int64 v140; // rbx
  int v141; // ecx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  _QWORD *v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdx
  unsigned int v148; // edx
  int v149; // eax
  unsigned int j; // r8d
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rdx
  int v154; // edx
  unsigned int v155; // eax
  unsigned int v156; // edx
  unsigned int v157; // edx
  int v158; // ecx
  __int64 v159; // rax
  __int64 v160; // rax
  int v161; // eax
  unsigned int v162; // r13d
  __int64 v163; // rbx
  unsigned int v164; // r15d
  bool v165; // r9
  unsigned int v166; // kr04_4
  unsigned int v167; // ecx
  unsigned int v168; // eax
  unsigned int v169; // edx
  unsigned int v170; // ecx
  unsigned int v171; // eax
  unsigned __int64 v172; // rdx
  unsigned int v173; // r15d
  struct _DPI_INFORMATION *v174; // r15
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  __int64 v183; // rax
  unsigned int v184; // r15d
  __int64 v185; // r13
  __int64 v186; // rbx
  void (__fastcall *v187)(__int64, __int64); // rax
  struct tagRECT v188; // xmm0
  __int64 v189; // rax
  unsigned int v191; // [rsp+30h] [rbp-D8h]
  int v192; // [rsp+38h] [rbp-D0h]
  int v193; // [rsp+38h] [rbp-D0h]
  int v194; // [rsp+40h] [rbp-C8h]
  int cx; // [rsp+58h] [rbp-B0h]
  unsigned int v196; // [rsp+5Ch] [rbp-ACh]
  void *Buf2; // [rsp+60h] [rbp-A8h]
  _DWORD *Buf2a; // [rsp+60h] [rbp-A8h]
  int v199; // [rsp+68h] [rbp-A0h]
  struct _devicemodeW *v200; // [rsp+70h] [rbp-98h] BYREF
  int v201; // [rsp+78h] [rbp-90h]
  int v202; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v203; // [rsp+80h] [rbp-88h]
  int v204; // [rsp+84h] [rbp-84h]
  struct tagSIZE v205; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v206; // [rsp+90h] [rbp-78h] BYREF
  int v207; // [rsp+94h] [rbp-74h]
  int v208; // [rsp+98h] [rbp-70h]
  struct _devicemodeW *v209; // [rsp+A0h] [rbp-68h]
  struct tagSIZE v210; // [rsp+A8h] [rbp-60h] BYREF
  int v211; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v212; // [rsp+B4h] [rbp-54h] BYREF
  int v213; // [rsp+B8h] [rbp-50h]
  int v214; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v215; // [rsp+C0h] [rbp-48h]
  unsigned __int16 v216; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v217[2]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v218[104]; // [rsp+E0h] [rbp-28h] BYREF
  MULTIDEVLOCKOBJ *v220; // [rsp+158h] [rbp+50h]
  unsigned int v223; // [rsp+168h] [rbp+60h]
  unsigned int v225; // [rsp+170h] [rbp+68h]
  struct _MDEV *v226; // [rsp+178h] [rbp+70h]
  int v227; // [rsp+178h] [rbp+70h]

  v9 = a4;
  cx = 0;
  v199 = 0;
  v204 = 0;
  v214 = 0;
  v207 = a4 & 1;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x48uLL, 0x73726447u, 1);
  v16 = (__int64)v14;
  if ( !v14 )
    goto LABEL_310;
  v14[5] = 0;
  *((_QWORD *)v14 + 3) = a3;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x76656447u, 0);
  v20 = 0LL;
  v209 = v17;
  if ( !v17 )
    goto LABEL_306;
  v21 = a6;
  v22 = a9;
  v201 = a8;
  v202 = a6 != 0;
  v23 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    v208 = v23;
LABEL_5:
    v24 = cx;
    v18 = 1LL;
    cx_low = v23;
    v19 = 0LL;
    v196 = 1;
    v25 = 0;
    Buf2 = (void *)v23;
    v26 = 0;
    v215 = 0LL;
    v213 = 0;
    v206 = 0;
    v212 = 0;
    v203 = 0;
    while ( 1 )
    {
      v27 = v24 < 0;
      if ( v24 )
        break;
      HDEV = (struct PDEV *)v20;
      v210 = v20;
      v205 = v20;
      if ( a1 )
      {
        if ( !v19 )
        {
          DeviceFromName = DrvGetDeviceFromName(a1, 0);
          v21 = a6;
          cx_low = (__int64)Buf2;
          v215 = (unsigned __int64)DeviceFromName;
          v18 = a5 != 0LL ? v196 : 0;
          v20 = 0LL;
          v196 &= -(a5 != 0LL);
          goto LABEL_41;
        }
      }
      else if ( !v19 )
      {
        goto LABEL_20;
      }
      if ( v13 )
      {
        if ( v25 >= *((_DWORD *)v13 + 5) )
          goto LABEL_172;
        v30 = v25++;
        v213 = v25;
        HDEV = (struct PDEV *)*((_QWORD *)v13 + 5 * v30 + 4);
        v210 = (struct tagSIZE)HDEV;
        DeviceFromName = (wchar_t *)*((_QWORD *)HDEV + 321);
        if ( DeviceFromName == (wchar_t *)v19 )
          goto LABEL_177;
        v31 = v199;
        v32 = v199 ^ 1;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
          v32 = v199;
        if ( v32 )
        {
LABEL_177:
          cx_low = (__int64)Buf2;
          goto LABEL_167;
        }
        EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
        EngAcquireSemaphore(*((HSEMAPHORE *)HDEV + 6));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", *((_QWORD *)HDEV + 6), 11);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        ++*((_DWORD *)HDEV + 3);
        PDEV::IncrementClientReferenceCount(HDEV);
        if ( (*((_DWORD *)HDEV + 10) & 0x400) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v33);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          DrvEnableDisplay((HDEV)HDEV);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v33);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", *((_QWORD *)HDEV + 6), v34);
        GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)HDEV + 6));
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v35);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        cx_low = (__int64)Buf2;
        v18 = v196;
        v21 = a6;
        v36 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
        v206 = 1;
        v212 = v36;
        v20 = 0LL;
        goto LABEL_42;
      }
LABEL_20:
      if ( cx_low != 4 )
      {
        DeviceFromName = gpGraphicsDeviceList;
        for ( i = v20.cx; DeviceFromName && i != v25; ++i )
          DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
        v213 = ++v25;
        if ( gbBaseVideo != v20.cx && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_167;
LABEL_41:
        v31 = v199;
LABEL_42:
        if ( cx_low == 4 )
        {
          if ( HDEV )
          {
            v40 = WdLogNewEntry5_WdAssertion(4LL, v18, v19, 1LL);
            WdLogEvent5_WdAssertion(v40);
            v20 = 0LL;
          }
LABEL_45:
          if ( DeviceFromName )
          {
            cx_low = 1LL;
            if ( (*((_DWORD *)DeviceFromName + 41) & 1) == 0 )
            {
              DisplayDriverNames = DrvGetDisplayDriverNames((__int64)DeviceFromName);
              v20 = 0LL;
              v45 = (struct _DRV_NAMES *)DisplayDriverNames;
              if ( DisplayDriverNames )
              {
                v46 = *((unsigned __int16 *)v22 + 10);
                if ( v26 >= (unsigned int)v46 )
                {
                  v47 = WdLogNewEntry5_WdAssertion(v46, v42, v43, v44);
                  WdLogEvent5_WdAssertion(v47);
                }
                v48 = 0x1000000000LL;
                v49 = 272LL * v26;
                if ( (*(_QWORD *)((_BYTE *)v22 + v49 + 48) & 0x1000000000LL) != 0 )
                {
                  v50 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v42, v43, v44);
                  WdLogEvent5_WdAssertion(v50);
                }
                if ( !*(_QWORD *)((char *)v22 + v49 + 272) )
                {
                  v51 = WdLogNewEntry5_WdAssertion(v48, v42, v43, v44);
                  WdLogEvent5_WdAssertion(v51);
                }
                v52 = gdmLogPixels;
                if ( !gdmLogPixels )
                {
                  GetDpiSetting(1LL, &v216);
                  v52 = v216;
                  gdmLogPixels = v216;
                }
                *(_WORD *)(*(_QWORD *)((char *)v22 + v49 + 272) + 166LL) = v52;
                DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
                DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
                HDEV = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                         v45,
                         *(struct _devicemodeW **)((char *)v22 + v49 + 272),
                         a3,
                         DriverCapableOverRide,
                         DriverAccelerationsLevel,
                         v207,
                         (a4 >> 2) & 1,
                         1u,
                         (HDEV *)&v205);
                Win32FreePool((__int64)v45);
                v20 = 0LL;
                if ( HDEV )
                {
                  cx_low = *(unsigned int *)((char *)v22 + v49 + 236);
                  v26 = v203;
                  *((_DWORD *)HDEV + 659) = cx_low;
                  goto LABEL_58;
                }
              }
              else
              {
LABEL_58:
                if ( HDEV )
                  goto LABEL_69;
              }
              gpLastFailedPhysDisp = (__int64)DeviceFromName;
              DrvLogDisplayDriverEvent(2LL, v42, v43);
              v26 = v203;
              v20 = 0LL;
            }
          }
          if ( !HDEV )
          {
            v37 = v26;
            goto LABEL_62;
          }
          goto LABEL_69;
        }
        if ( !DeviceFromName )
          goto LABEL_172;
        if ( (*((_DWORD *)DeviceFromName + 41) & 1) != 0 )
          goto LABEL_167;
        if ( v21 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          cx_low = (__int64)Buf2;
          v20.cx = 0;
          v202 = PruneFlag;
        }
        if ( HDEV )
          goto LABEL_149;
        if ( gForceDisconnect != v20.cx || cx_low == 3 )
          v62 = -1;
        else
          v62 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v62, &v212, &v206);
        v20 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_172;
        cx_low = (__int64)Buf2;
        if ( (((unsigned __int64)Buf2 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          if ( Buf2 == (void *)2 )
          {
            v65 = *((_DWORD *)DeviceFromName + 40);
            if ( (v65 & 8) != 0 )
            {
              if ( !v206 )
                goto LABEL_166;
              v66 = v31 == 0;
              goto LABEL_98;
            }
            if ( (v65 & 0x2000000) != 0 || v204 || gProtocolType == -1 )
              goto LABEL_166;
          }
          else
          {
            v67 = WdLogNewEntry5_WdAssertion(Buf2, v18, v19, v64);
            WdLogEvent5_WdAssertion(v67);
            v20 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v204 )
              goto LABEL_165;
          }
        }
        else
        {
          if ( !v206 )
            goto LABEL_166;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v68 = v31;
          }
          else
          {
            if ( !v31 )
              goto LABEL_99;
            v68 = 0;
          }
          v66 = v68 == 0;
LABEL_98:
          if ( v66 )
            goto LABEL_166;
        }
LABEL_99:
        v69 = DrvGetDisplayDriverNames((__int64)DeviceFromName);
        v20 = 0LL;
        v70 = (struct _DRV_NAMES *)v69;
        if ( !v69 )
          goto LABEL_165;
        v71 = (*((_DWORD *)DeviceFromName + 40) & 8) != 0 ? 4 : 1;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
        {
          v72 = 0;
          v73 = 0;
        }
        else
        {
          v72 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v73 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        }
        Src = a2;
        if ( !a2 )
        {
          v75 = v209;
          memset(v209, 0, sizeof(struct _devicemodeW));
          v75->dmSize = 220;
          Src = v75;
        }
        v76 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                &v200,
                &v211,
                0LL,
                Src,
                0,
                v202,
                a7,
                v201,
                0LL);
        if ( v76 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL, v77, v78);
          goto LABEL_107;
        }
        if ( v76 == -1073741776 )
        {
          v93 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 32) + 2584LL);
          if ( v200 && v200 != v209 )
          {
            Win32FreePool((__int64)v200);
            v200 = 0LL;
          }
          v76 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v200,
                  &v211,
                  0LL,
                  v93,
                  0,
                  v202,
                  a7,
                  v201,
                  0LL);
        }
        if ( v76 >= 0 )
        {
LABEL_107:
          v79 = v200;
          HDEV = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                   v70,
                   v200,
                   a3,
                   v72,
                   v73,
                   v207,
                   (a4 >> 2) & 1,
                   v71,
                   (HDEV *)&v205);
          if ( !HDEV && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
        }
        else
        {
          DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL);
          v79 = v200;
          HDEV = (struct PDEV *)v210;
          if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 4;
        }
        v82 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_141;
        if ( !HDEV )
        {
          DrvLogDisplayDriverEvent(4LL, v80, v81);
          if ( v79 )
          {
            if ( v79->dmBitsPerPel == 4 )
              DrvLogDisplayDriverEvent(5LL, v83, v84);
            if ( v79 != v209 )
            {
              Win32FreePool((__int64)v79);
              v200 = 0LL;
            }
          }
          v85 = v209;
          memset(v209, 0, sizeof(struct _devicemodeW));
          v85->dmSize = 220;
          v86 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v200,
                  &v211,
                  0LL,
                  v85,
                  1,
                  v202,
                  a7,
                  v201,
                  0LL);
          v79 = v200;
          if ( v86 >= 0 )
          {
            v87 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                    v70,
                    v200,
                    a3,
                    v72,
                    v73,
                    v207,
                    (a4 >> 2) & 1,
                    1u,
                    (HDEV *)&v205);
            v210 = (struct tagSIZE)v87;
            if ( v87 || v79->dmPelsWidth == 640 && v79->dmPelsHeight == 480 && v79->dmBitsPerPel == 4 )
            {
LABEL_127:
              HDEV = v87;
            }
            else
            {
              if ( v79 != v209 )
              {
                Win32FreePool((__int64)v79);
                v200 = 0LL;
              }
              v88 = v209;
              memset(v209, 0, sizeof(struct _devicemodeW));
              v88->dmSize = 220;
              v89 = v201;
              v88->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
              v194 = a7;
              v193 = v202;
              v88->dmPelsWidth = 640;
              v88->dmPelsHeight = 480;
              v88->dmFields = 1835008;
              v90 = DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                      &v200,
                      &v211,
                      0LL,
                      v88,
                      0,
                      v193,
                      v194,
                      v89,
                      0LL);
              v79 = v200;
              if ( v90 >= 0 )
              {
                v87 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        v70,
                        v200,
                        a3,
                        v72,
                        v73,
                        v207,
                        (a4 >> 2) & 1,
                        1u,
                        (HDEV *)&v205);
                goto LABEL_127;
              }
              HDEV = (struct PDEV *)v210;
            }
          }
          if ( v79 )
          {
            dmPelsWidth = v79->dmPelsWidth;
            v92 = HDEV != 0LL;
          }
          else
          {
            v92 = 2LL;
            dmPelsWidth = v209->dmPelsWidth;
          }
          DrvDxgkLogCodePointPacket(26LL, v92, dmPelsWidth);
          v82 = 0LL;
LABEL_141:
          if ( !HDEV && !v82 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL, v80, v81);
          }
        }
        if ( v79 && v79 != v209 )
          Win32FreePool((__int64)v79);
        Win32FreePool((__int64)v70);
        v26 = v203;
        v20 = 0LL;
        goto LABEL_148;
      }
      if ( v26 >= *((unsigned __int16 *)v22 + 10) )
        goto LABEL_172;
      v37 = v26;
      if ( (*((_QWORD *)v22 + 34 * v26 + 6) & 0x1000000000LL) == 0 )
      {
        if ( IsPrimaryPathInCloneGroup(v22, v26) && *(_DWORD *)((char *)v22 + v38 + 240) >= v20.cx )
        {
          DeviceFromName = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
                && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v22 + v38 + 64)
                && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v22 + v38 + 68)
                && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v22 + v38 + 72) )
              {
                break;
              }
              DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
            }
            while ( DeviceFromName );
            goto LABEL_45;
          }
LABEL_62:
          if ( !IsPrimaryPathInCloneGroup(v22, v26) || *((_DWORD *)v22 + 68 * v37 + 60) < v20.cx )
          {
            v59 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
            WdLogEvent5_WdAssertion(v59);
            v20 = 0LL;
          }
          cx_low = LOWORD(v20.cx);
          if ( LOWORD(v20.cx) < *((_WORD *)v22 + 10) )
          {
            do
            {
              v60 = 272LL * (unsigned __int16)cx_low;
              if ( *(_DWORD *)((char *)v22 + v60 + 232) == *((_DWORD *)v22 + 68 * v37 + 58) )
                *(_DWORD *)((char *)v22 + v60 + 240) = -1073741823;
              LOWORD(cx_low) = cx_low + 1;
            }
            while ( (unsigned __int16)cx_low < *((_WORD *)v22 + 10) );
          }
LABEL_69:
          v203 = ++v26;
LABEL_148:
          if ( HDEV )
          {
LABEL_149:
            v94 = WdLogNewEntry5_WdTrace(cx_low);
            WdLogEvent5_WdTrace(v94);
            v95 = *((_DWORD *)DeviceFromName + 40);
            v20 = 0LL;
            v204 = 1;
            if ( v212 )
              v96 = v95 | 4;
            else
              v96 = v95 & 0xFFFFFFFB;
            *((_DWORD *)DeviceFromName + 40) = v96;
            if ( !*(_QWORD *)&v205 )
            {
              if ( a5 )
              {
                v97 = *((_DWORD *)a5 + 5);
                if ( v97 )
                {
                  v98 = (struct tagSIZE *)((char *)a5 + 32);
                  v99 = v97;
                  do
                  {
                    v100 = *v98;
                    v98 += 5;
                    v101 = v205;
                    if ( DeviceFromName == *(wchar_t **)(*(_QWORD *)&v100 + 2568LL) )
                      v101 = v100;
                    v205 = v101;
                    --v99;
                  }
                  while ( v99 );
                }
              }
            }
            *(_QWORD *)(v16 + 40LL * *(unsigned int *)(v16 + 20) + 32) = HDEV;
            *(struct tagSIZE *)(v16 + 40 * (*(unsigned int *)(v16 + 20) + 1LL)) = v205;
            v102 = *(_DWORD *)(v16 + 20);
            if ( v102 + 2 >= v102 )
            {
              *(_DWORD *)(v16 + 20) = v102 + 1;
              v103 = (unsigned int *)v16;
              v104 = 72LL * (v102 + 2);
              if ( v104 > 0xFFFFFFFF )
              {
                v16 = 0LL;
              }
              else
              {
                v105 = PALLOCMEM2((unsigned int)v104, 0x73726447u, 1);
                v20 = 0LL;
                v16 = (__int64)v105;
              }
              if ( !v16 )
              {
                v13 = a5;
                v24 = -1073741670;
                cx_low = (__int64)Buf2;
                v16 = (__int64)v103;
                v18 = v196;
                cx = -1073741670;
                goto LABEL_169;
              }
              memmove((void *)v16, v103, 72LL * v103[5]);
              Win32FreePool((__int64)v103);
              v20 = 0LL;
            }
          }
LABEL_165:
          cx_low = (__int64)Buf2;
LABEL_166:
          v18 = v196;
LABEL_167:
          v13 = a5;
          goto LABEL_168;
        }
        v18 = v196;
        cx_low = (__int64)Buf2;
      }
      v203 = ++v26;
LABEL_168:
      v24 = cx;
LABEL_169:
      v22 = a9;
      v25 = v213;
      v19 = v215;
      v21 = a6;
      if ( !(_DWORD)v18 )
      {
        v27 = v24 < 0;
        break;
      }
    }
    if ( v27 )
      goto LABEL_190;
LABEL_172:
    v23 = v208;
    if ( v208 == 4 )
    {
      if ( v204 == v20.cx )
      {
        v110 = WdLogNewEntry5_WdError(cx_low, v18, v19);
        *(_QWORD *)(v110 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v110);
        goto LABEL_306;
      }
      v106 = WdLogNewEntry5_WdTrace(cx_low);
      WdLogEvent5_WdTrace(v106);
      v23 = 1;
      v208 = 1;
      goto LABEL_175;
    }
    if ( v204 == v20.cx )
    {
      if ( v208 == 1 )
      {
        v107 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v107);
        v20 = 0LL;
        v23 = 2;
        v201 = 0;
LABEL_184:
        v21 = a6;
        v13 = a5;
        continue;
      }
      if ( v208 == 2 && gProtocolType == LOWORD(v20.cx) )
      {
        v108 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v108);
        v20 = 0LL;
        v23 = 3;
        goto LABEL_184;
      }
      if ( !v25 )
      {
        v116 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v116);
        goto LABEL_306;
      }
      v111 = WdLogNewEntry5_WdTrace(cx_low);
      WdLogEvent5_WdTrace(v111);
      v24 = -1073741204;
      v20 = 0LL;
      cx = -1073741204;
LABEL_190:
      if ( v24 )
        goto LABEL_305;
    }
    else
    {
      if ( !v199 )
      {
        v109 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v109);
LABEL_175:
        v13 = a5;
        v20 = 0LL;
        v21 = a6;
        v199 = 1;
        goto LABEL_5;
      }
      cx = v20.cx;
    }
    break;
  }
  if ( (a4 & 2) != 0 )
    goto LABEL_305;
  v225 = v20.cx;
  v226 = (struct _MDEV *)v20;
  v112 = v20.cx;
  v113 = (struct _MDEV *)v20;
  v114 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
  v220 = v114;
  v115 = v114;
  if ( v114 )
  {
    *(_QWORD *)v114 = 1LL;
    *((_QWORD *)v114 + 1) = 0LL;
    *((_QWORD *)v114 + 2) = 0LL;
  }
  else
  {
    v115 = 0LL;
    v220 = 0LL;
  }
  if ( !v115 )
  {
LABEL_306:
    if ( v16 )
    {
      DrvBackoutMDEV((struct _MDEV *)v16, v18, v19);
      Win32FreePool(v16);
      v16 = 0LL;
    }
    goto LABEL_308;
  }
  MULTIDEVLOCKOBJ::vInit(v115, (struct _MDEV *)v16);
  if ( (*(_DWORD *)v115 & 1) == 0 )
    goto LABEL_304;
  MULTIDEVLOCKOBJ::vLock(v115);
  v119 = *(_DWORD *)(v16 + 20);
  v120 = 0;
  if ( !v119 )
    goto LABEL_211;
  while ( 2 )
  {
    v121 = *(_QWORD *)(*(_QWORD *)(v16 + 40LL * v120 + 32) + 2568LL);
    v122 = *(_DWORD *)(v121 + 160);
    if ( (v122 & 8) != 0 )
    {
      if ( (v122 & 4) != 0 )
      {
        v122 &= ~4u;
        *(_DWORD *)(v121 + 160) = v122;
        goto LABEL_205;
      }
    }
    else
    {
      if ( !v113 )
        v112 = v120;
LABEL_205:
      if ( (v122 & 4) != 0 )
      {
        if ( v113 )
        {
          cx = -1073741438;
          *(_DWORD *)(v121 + 160) = v122 & 0xFFFFFFFB;
        }
        else
        {
          v113 = (struct _MDEV *)v121;
          v112 = v120;
        }
      }
    }
    v119 = *(_DWORD *)(v16 + 20);
    if ( ++v120 < v119 )
      continue;
    break;
  }
  v225 = v112;
  v226 = v113;
LABEL_211:
  v123 = 16 * v119;
  Buf2a = PALLOCMEM2(v123, 0x73726447u, 0);
  v124 = (__int64)Buf2a;
  v125 = (struct _devicemodeW *)PALLOCMEM2(v123, 0x73726447u, 0);
  v200 = v125;
  v128 = (struct tagRECT *)v125;
  if ( Buf2a )
  {
    if ( v125 )
    {
      v129 = 0;
      v223 = 0;
      v130 = 0;
      if ( *(_DWORD *)(v16 + 20) )
      {
        do
        {
          v131 = 2LL * v130;
          v132 = *(_QWORD *)(v16 + 40LL * v130 + 32);
          v133 = *(_DWORD **)(v132 + 2584);
          Buf2a[2 * v131] = v133[19];
          Buf2a[2 * v131 + 1] = v133[20];
          Buf2a[2 * v131 + 2] = v133[19] + v133[43];
          Buf2a[2 * v131 + 3] = v133[20] + v133[44];
          if ( (*(_DWORD *)(*(_QWORD *)(v132 + 2568) + 160LL) & 8) == 0 )
          {
            if ( !v113 && !v133[19] && !v133[20] )
            {
              v112 = v130;
              v113 = *(struct _MDEV **)(v132 + 2568);
            }
            ++v129;
          }
          ++v130;
        }
        while ( v130 < *(_DWORD *)(v16 + 20) );
        v115 = v220;
        v223 = v129;
        v225 = v112;
        v226 = v113;
      }
      memmove(v128, Buf2a, v123);
      if ( !gDrvDpiAdjusted )
      {
        gDrvDpiWin8Style = 0;
        a6 = 0;
        if ( ((gProtocolType + 1) & 0xFFFE) == 0
          && (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v134, 65534LL) >= 0 )
        {
          GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
          if ( gDrvDpiWin8Style )
          {
            if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
              GetDpiSettingWithNoDefault(0LL, &a6);
            v135 = a6;
            if ( (unsigned int)a6 <= 0x60 )
              v135 = 96;
            if ( v135 >= 0x1E0 )
              LOWORD(v135) = 480;
            gdmLogPixels = v135;
          }
        }
      }
      v136 = v112;
      v137 = 0;
      v138 = *(struct D3DKMT_GETPATHSMODALITY **)(v16 + 40 * v136 + 32);
      a9 = v138;
      *(_DWORD *)(*((_QWORD *)v138 + 321) + 160LL) |= 4u;
      v139 = *(_DWORD *)(v16 + 20);
      if ( v139 )
      {
        do
        {
          v140 = *(_QWORD *)(v16 + 40LL * v137 + 32);
          if ( (*(_DWORD *)(*(_QWORD *)(v140 + 2568) + 160LL) & 0x800000) != 0 )
          {
            v141 = 0;
            if ( v137 == v225 )
              v141 = 32;
            *(_DWORD *)(v140 + 2540) = *(_DWORD *)(v140 + 2540) & 0xFFFFFFDF | v141;
            a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))qword_1C01A1CB0)(
                   *(_QWORD *)(*(_QWORD *)(v140 + 2568) + 240LL),
                   *(unsigned int *)(*(_QWORD *)(v140 + 2568) + 256LL),
                   0xFFFFFFFFLL,
                   v140 + 2128,
                   v140 + 2448);
            if ( a6 < 0 )
            {
              v145 = (_QWORD *)WdLogNewEntry5_WdError(v143, v142, v144);
              v145[3] = a6;
              v145[4] = *(_QWORD *)(*(_QWORD *)(v140 + 2568) + 240LL);
              v145[5] = *(unsigned int *)(*(_QWORD *)(v140 + 2568) + 256LL);
              WdLogEvent5_WdError(v145);
            }
          }
          v139 = *(_DWORD *)(v16 + 20);
          ++v137;
        }
        while ( v137 < v139 );
        v138 = a9;
        v115 = v220;
        v113 = v226;
        v128 = (struct tagRECT *)v200;
      }
      if ( !gDrvDpiAdjusted )
      {
        gDrvDpiWin8Style = 0;
        a6 = 0;
        if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
        {
          v155 = *((_DWORD *)v138 + 880);
          if ( v155 )
          {
            v156 = (96 * HIWORD(v155) + 50) / 0x64u;
          }
          else
          {
            if ( wcsncmp(*((const wchar_t **)v113 + 25), L"WORKERDD", *((unsigned int *)v113 + 66))
              && wcsncmp(*((const wchar_t **)v113 + 25), L"TSDDD", *((unsigned int *)v113 + 66)) )
            {
              gDrvDpiWin8Style = 1;
            }
            GetDpiSetting(2LL, &a6);
            v156 = a6;
            if ( (unsigned int)a6 <= 0x60 )
              v156 = 96;
            if ( v156 >= 0x1E0 )
              v156 = 480;
            a6 = v156;
          }
          gdmLogPixels = v156;
          v157 = 0;
          v139 = *(_DWORD *)(v16 + 20);
          if ( v139 )
          {
            do
            {
              v158 = gdmLogPixels;
              v159 = v157++;
              v160 = *(_QWORD *)(v16 + 40 * v159 + 32);
              *(_DWORD *)(v160 + 2172) = gdmLogPixels;
              *(_DWORD *)(v160 + 2168) = v158;
              *(_WORD *)(*(_QWORD *)(v160 + 2584) + 166LL) = gdmLogPixels;
              v139 = *(_DWORD *)(v16 + 20);
            }
            while ( v157 < v139 );
          }
        }
        else
        {
          v146 = (unsigned int)(96 * *((_DWORD *)v138 + 615) + 50);
          v147 = (unsigned int)v146 / 0x64;
          if ( (_WORD)v147 )
            SetDpiSetting(1LL, (unsigned __int16)v147);
          if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v146, v147) >= 0 )
            GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
          if ( gDrvDpiWin8Style )
          {
            if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
              GetDpiSettingWithNoDefault(0LL, &a6);
            v148 = a6;
            if ( (unsigned int)a6 <= 0x60 )
              v148 = 96;
            if ( v148 >= 0x1E0 )
              v148 = 480;
            a6 = v148;
LABEL_257:
            gdmLogPixels = v148;
          }
          else
          {
            v149 = *((_DWORD *)v138 + 614);
            if ( v149 )
            {
              v148 = (96 * v149 + 50) / 0x64u;
              goto LABEL_257;
            }
            gdmLogPixels = 96;
          }
          v139 = *(_DWORD *)(v16 + 20);
          for ( j = 0; j < v139; ++j )
          {
            v151 = gdmLogPixels;
            v152 = *(_QWORD *)(v16 + 40LL * j + 32);
            v153 = *(_QWORD *)(v152 + 2584);
            *(_DWORD *)(v152 + 2172) = gdmLogPixels;
            *(_DWORD *)(v152 + 2168) = v151;
            *(_WORD *)(v153 + 166) = gdmLogPixels;
            if ( gDrvDpiWin8Style )
            {
              v154 = 100 * gdmLogPixels;
              *(_DWORD *)(v152 + 2532) = 1234568;
              *(_DWORD *)(v152 + 2456) = (v154 + 48) / 0x60u;
            }
            v139 = *(_DWORD *)(v16 + 20);
          }
        }
        gDrvDpiAdjusted = 1;
      }
      if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
      {
        *((_DWORD *)gpsi + 559) &= ~0x40u;
      }
      else
      {
        v161 = 1;
        v162 = 0;
        v227 = 1;
        if ( v139 )
        {
          do
          {
            v163 = *(_QWORD *)(v16 + 40LL * v162 + 32);
            v164 = *(_DWORD *)(v163 + 3520);
            v165 = ((*(_DWORD *)(*(_QWORD *)(v163 + 2584) + 84LL) - 1) & 0xFFFFFFFD) == 0;
            v166 = *(_DWORD *)(v163 + 2140);
            LOBYTE(a6) = v165;
            v167 = v166 / 0x3E8;
            v168 = *(_DWORD *)(v163 + 2136) / 0x3E8u;
            if ( v165 )
            {
              v168 = v166 / 0x3E8;
              v167 = *(_DWORD *)(v163 + 2136) / 0x3E8u;
            }
            v169 = *(_DWORD *)(v163 + 2148);
            a9 = (struct D3DKMT_GETPATHSMODALITY *)__PAIR64__(v167, v168);
            v170 = *(_DWORD *)(v163 + 2144);
            v205 = (struct tagSIZE)a9;
            v171 = v170;
            if ( v165 )
            {
              v171 = v169;
              v169 = v170;
            }
            v215 = __PAIR64__(v169, v171);
            v210 = (struct tagSIZE)__PAIR64__(v169, v171);
            if ( v164 )
            {
              FillPhysicalDpiOnly(&v205, &v210, (struct _DPI_INFORMATION *)(v163 + 2448));
              v173 = HIWORD(v164);
              *(_DWORD *)(v163 + 2540) |= 0x200u;
              *(_DWORD *)(v163 + 2456) = v173;
              *(_DWORD *)(v163 + 2460) = v173;
              *(_DWORD *)(v163 + 2508) = v173;
              *(_DWORD *)(v163 + 2504) = v173;
              v174 = (struct _DPI_INFORMATION *)(v163 + 2448);
            }
            else
            {
              *(_DWORD *)(v163 + 2540) &= ~0x200u;
              v227 = 0;
              memset(v218, 0, 0x20uLL);
              v217[0] = 0x2000000001LL;
              v217[1] = v218;
              if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v217, v175, v176, v177) < 0 )
              {
                v182 = WdLogNewEntry5_WdAssertion(v179, v178, v180, v181);
                WdLogEvent5_WdAssertion(v182);
              }
              v174 = (struct _DPI_INFORMATION *)(v163 + 2448);
              FillDpiInfo(
                &v205,
                &v210,
                (const struct _DPI_SCALE_FACTOR_COLLECTION *)v218,
                v181,
                gdmLogPixels,
                v191,
                v192,
                (struct _DPI_INFORMATION *)(v163 + 2448));
            }
            GetRemoteScaleOverrideTestHook((STRSAFE_PCNZWCH)(*(_QWORD *)(v163 + 2568) + 64LL), v172, v174);
            ++v162;
            *(_DWORD *)(v163 + 2540) = *(_DWORD *)(v163 + 2540) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
          }
          while ( v162 < *(_DWORD *)(v16 + 20) );
          v115 = v220;
          v128 = (struct tagRECT *)v200;
          v161 = v227;
        }
        UserSetScaleFactorsFromRemoteMetric(v161);
        v214 = 1;
      }
      gdmLogPixelsOfPrimary = (96 * *((_DWORD *)v138 + 615) + 50) / 0x64u;
      AlignRects(v128, v223, v225);
      v124 = (__int64)Buf2a;
      if ( memcmp(v128, Buf2a, 16LL * v223) )
      {
        v183 = WdLogNewEntry5_WdWarning(0LL);
        WdLogEvent5_WdWarning(v183);
      }
      v184 = 0;
      if ( *(_DWORD *)(v16 + 20) )
      {
        do
        {
          v185 = 5LL * v184;
          v186 = *(_QWORD *)(v16 + 40LL * v184 + 32);
          *(_QWORD *)(v186 + 2576) = *(_QWORD *)&v128[v184].left;
          v187 = *(void (__fastcall **)(__int64, __int64))(v186 + 3376);
          if ( v187 )
            v187((*(_QWORD *)(v186 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v186 + 2544) != 0LL), 2LL);
          v188 = v128[v184++];
          *(struct tagRECT *)(v16 + 8 * v185 + 48) = v188;
          *(_DWORD *)(v16 + 8 * v185 + 64) = *(_DWORD *)(v186 + 2456);
        }
        while ( v184 < *(_DWORD *)(v16 + 20) );
        v115 = v220;
        v124 = (__int64)Buf2a;
      }
    }
    Win32FreePool(v124);
  }
  if ( v128 )
    Win32FreePool((__int64)v128);
  MULTIDEVLOCKOBJ::vUnlock(v115, v126, v127);
  if ( v214 )
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
LABEL_304:
  MULTIDEVLOCKOBJ::`scalar deleting destructor'(v115, v117, v118);
LABEL_305:
  if ( cx < 0 )
    goto LABEL_306;
LABEL_308:
  if ( v209 )
    Win32FreePool((__int64)v209);
LABEL_310:
  v189 = WdLogNewEntry5_WdTrace(cx_low);
  *(_QWORD *)(v189 + 24) = v16;
  WdLogEvent5_WdTrace(v189);
  return (struct _MDEV *)v16;
}
