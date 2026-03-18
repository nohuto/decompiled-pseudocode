/*
 * XREFs of ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00B1DE0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0007054 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     RtlStringCbCopyW @ 0x1C0007EF0 (RtlStringCbCopyW.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000BB44 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00AED34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00AFCD0 (DxgkAcquireSessionModeChangeLock.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z @ 0x1C00B5588 (-DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B999C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorGetLinkInfo @ 0x1C00D6B34 (MonitorGetLinkInfo.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00D7D4C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00D8B18 (MonitorGetAdvancedColorParams.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E25C8 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F38F8 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetAdapterDeviceDesc(
        struct _LUID a1,
        unsigned int a2,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a3)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  DWORD LowPart; // ebx
  __int64 v7; // rdx
  struct DXGGLOBAL *Global; // rdi
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // r13
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  bool v20; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v22; // rcx
  unsigned __int64 *v23; // rcx
  unsigned int v24; // edx
  struct DXGADAPTER **v25; // rax
  __int64 v26; // rcx
  volatile signed __int64 *v27; // rdi
  DXGADAPTER *v28; // rsi
  _BOOL8 v29; // rcx
  DXGADAPTER *v30; // r14
  signed __int64 v31; // rax
  DXGADAPTER *v32; // rdi
  DXGADAPTER *v33; // rdi
  char *v34; // r15
  int v35; // eax
  DXGADAPTER *v36; // rdi
  __int16 v37; // r10
  const wchar_t *v38; // r8
  unsigned __int16 *v39; // rax
  _WORD *v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned __int64 v43; // r8
  __int64 v44; // r9
  __int16 v45; // ax
  DXGADAPTER *v46; // r15
  DXGADAPTER *v47; // rdi
  char *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // edi
  DXGADAPTER *v53; // r14
  struct DXGPROCESS *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  int **SessionViewOwner; // r13
  __int64 v58; // rdx
  __int64 v59; // r12
  int v60; // ecx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r15
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int128 v65; // xmm0
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int CurrentOrientation; // eax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // r15
  __int64 v74; // rax
  __int64 v75; // rcx
  struct _FAST_MUTEX *v76; // rdi
  int MonitorInstance; // eax
  __int64 v78; // rcx
  DXGMONITOR *v79; // rdi
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v80; // r13
  int v81; // ecx
  __int64 v82; // rcx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  int v84; // edx
  int v85; // eax
  const wchar_t *v86; // r8
  unsigned __int16 *v87; // rcx
  _WORD *v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // r8
  __int16 v91; // cx
  struct DXGADAPTER *v92; // rcx
  struct DXGADAPTER *v93; // rcx
  __int64 v95; // rcx
  DXGSESSIONMGR *v96; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v98; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // edx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  DXGADAPTER *v120; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v121; // [rsp+68h] [rbp-98h] BYREF
  char v122; // [rsp+70h] [rbp-90h] BYREF
  char v123; // [rsp+71h] [rbp-8Fh] BYREF
  _BYTE v124[6]; // [rsp+72h] [rbp-8Eh] BYREF
  __int64 v125; // [rsp+78h] [rbp-88h]
  DXGFASTMUTEX *v126; // [rsp+80h] [rbp-80h] BYREF
  char v127; // [rsp+88h] [rbp-78h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v128; // [rsp+90h] [rbp-70h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v129; // [rsp+94h] [rbp-6Ch] BYREF
  DXGADAPTER *v130; // [rsp+98h] [rbp-68h]
  char *v131; // [rsp+A0h] [rbp-60h]
  struct DXGMONITOR *v132; // [rsp+A8h] [rbp-58h] BYREF
  struct HDXGMONITOR__ *v133; // [rsp+B0h] [rbp-50h]
  __int64 v134; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v135[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v136; // [rsp+C4h] [rbp-3Ch]
  _BYTE v137[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v138; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v139; // [rsp+E8h] [rbp-18h]
  char v140; // [rsp+F0h] [rbp-10h]
  _BYTE v141[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v142; // [rsp+100h] [rbp+0h]
  struct DXGADAPTER *v143; // [rsp+108h] [rbp+8h]
  char v144; // [rsp+110h] [rbp+10h]
  _QWORD v145[2]; // [rsp+120h] [rbp+20h] BYREF
  char v146; // [rsp+130h] [rbp+30h]
  _QWORD v147[2]; // [rsp+138h] [rbp+38h] BYREF
  char v148; // [rsp+148h] [rbp+48h]
  unsigned __int64 v149[3]; // [rsp+150h] [rbp+50h] BYREF
  LONG HighPart; // [rsp+1B4h] [rbp+B4h]
  unsigned int v151; // [rsp+1B8h] [rbp+B8h]
  char v153; // [rsp+1C8h] [rbp+C8h] BYREF

  v151 = a2;
  HighPart = a1.HighPart;
  v3 = 0;
  v4 = a2;
  v121 = 0LL;
  v120 = 0LL;
  LowPart = a1.LowPart;
  if ( !a3 )
  {
    v101 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v101 + 24) = 5913LL;
    WdLogEvent5_WdAssertion(v101);
  }
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v127 = 0;
  v126 = (struct DXGGLOBAL *)((char *)Global + 400);
  if ( Global == (struct DXGGLOBAL *)-400LL )
  {
    v102 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v102 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v102);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v126 + 1) == CurrentThread )
  {
    v103 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v103 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v103);
  }
  if ( v127 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v7, v9);
    v104[5] = &v126;
    v104[3] = 275LL;
    v104[4] = 4LL;
    v104[6] = 0LL;
    v104[7] = 0LL;
    WdLogEvent5_WdCriticalError(v104);
  }
  DXGFASTMUTEX::Acquire(v126);
  v127 = 1;
  v12 = (_QWORD *)*((_QWORD *)Global + 55);
LABEL_10:
  while ( v12 != (_QWORD *)((char *)Global + 440) && v12 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
    if ( *(_QWORD *)((char *)v13 + 268) == __PAIR64__(HighPart, LowPart) )
    {
      _m_prefetchw(v13 + 3);
      v14 = v13[3];
      if ( v14 )
      {
        while ( 1 )
        {
          v11 = v14 + 1;
          v15 = v14;
          v14 = _InterlockedCompareExchange64(v13 + 3, v14 + 1, v14);
          if ( v15 == v14 )
            break;
          if ( !v14 )
            goto LABEL_10;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v126);
        v16 = DxgkAcquireSessionModeChangeLock(0LL);
        v19 = v16;
        v20 = v16 >= 0;
        if ( v16 < 0 )
        {
          v105 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v105 + 24) = v19;
          WdLogEvent5_WdError(v105);
          goto LABEL_113;
        }
        Current = DXGPROCESS::GetCurrent(v18, v17);
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 224LL))(0LL) )
          goto LABEL_17;
        v96 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v22) + 73);
        if ( v96 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v95);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v96,
                                             CurrentProcessSessionId,
                                             v98);
          if ( SessionDataForSpecifiedSession )
          {
            v95 = *((unsigned int *)v13 + 67);
            if ( *((_DWORD *)SessionDataForSpecifiedSession + 4623) == (_DWORD)v95 )
            {
              v95 = *((unsigned int *)v13 + 68);
              if ( *((_DWORD *)SessionDataForSpecifiedSession + 4624) == (_DWORD)v95 )
                v3 = *((_DWORD *)SessionDataForSpecifiedSession + 4625);
            }
          }
        }
        if ( (_DWORD)v4 != -1 && (unsigned int)v4 >= v3 )
        {
          v106 = WdLogNewEntry5_WdError(v95);
          *(_QWORD *)(v106 + 32) = v3;
          *(_QWORD *)(v106 + 24) = v4;
          WdLogEvent5_WdError(v106);
          LODWORD(v19) = -1073741811;
LABEL_113:
          if ( v20 )
            DxgkReleaseSessionModeChangeLock((__int64)v93);
          return (unsigned int)v19;
        }
        LODWORD(v4) = -1;
        v151 = -1;
LABEL_17:
        v23 = (unsigned __int64 *)&v134;
        v134 = -1LL;
        v24 = v4;
        v25 = &v121;
        if ( (_DWORD)v4 == -1 )
        {
          v23 = 0LL;
          v25 = 0LL;
          v24 = 0;
        }
        if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v13, v24, &v120, v149, v25, v23) < 0 )
        {
          v107 = WdLogNewEntry5_WdError(v26);
          *(_QWORD *)(v107 + 32) = (unsigned int)v4;
          *(_QWORD *)(v107 + 24) = v13;
          WdLogEvent5_WdError(v107);
          LODWORD(v19) = -1073741811;
          goto LABEL_113;
        }
        v27 = (volatile signed __int64 *)v120;
        if ( !v120 )
        {
          v108 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v108 + 24) = 5998LL;
          WdLogEvent5_WdAssertion(v108);
        }
        v28 = v121;
        v29 = (_DWORD)v4 == -1;
        if ( v29 != (v121 == 0LL) )
        {
          v109 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v109 + 24) = 5999LL;
          WdLogEvent5_WdAssertion(v109);
        }
        v139 = (struct DXGADAPTER *)v27;
        v140 = 0;
        if ( !v28 )
          v28 = (DXGADAPTER *)v27;
        if ( v27 )
        {
          _InterlockedIncrement64(v27 + 3);
          v27 = (volatile signed __int64 *)v120;
          v138 = -1LL;
        }
        if ( v28 )
          v27 = (volatile signed __int64 *)v28;
        v143 = (struct DXGADAPTER *)v27;
        v144 = 0;
        if ( v27 )
        {
          _InterlockedIncrement64(v27 + 3);
          v142 = -1LL;
        }
        if ( _InterlockedExchangeAdd64(v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v13[2], (struct DXGADAPTER *)v13);
        v30 = v120;
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v32 = v120;
        if ( v31 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v120 + 2), v120);
        if ( v121 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
          v32 = v120;
        }
        else
        {
          v121 = v32;
        }
        v145[1] = v32;
        _InterlockedIncrement64((volatile signed __int64 *)v30 + 3);
        v145[0] = -1LL;
        KeEnterCriticalRegion();
        v33 = v120;
        v34 = (char *)v120 + 120;
        ExAcquirePushLockSharedEx((char *)v120 + 120, 0LL);
        v35 = *((_DWORD *)v33 + 44);
        v146 = 1;
        if ( v35 != 1 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v145);
          LODWORD(v19) = -1073741130;
          goto LABEL_103;
        }
        v36 = v120;
        *((_DWORD *)a3 + 208) = *((_DWORD *)v120 + 74);
        *((_DWORD *)a3 + 209) = *((_DWORD *)v36 + 69);
        *((_DWORD *)a3 + 210) = *((_DWORD *)v36 + 70);
        *((_DWORD *)a3 + 211) = *((_DWORD *)v36 + 71);
        *((_DWORD *)a3 + 212) = *((_DWORD *)v36 + 72);
        *((_DWORD *)a3 + 213) = *((_DWORD *)v36 + 73);
        *((_DWORD *)a3 + 409) = (*((_DWORD *)v36 + 75) & 0x80u) != 0;
        *((_DWORD *)a3 + 410) = *((_DWORD *)v36 + 62) > 1u;
        *((_DWORD *)a3 + 214) = DXGADAPTER::GetDriverVersion(v36);
        v38 = (const wchar_t *)*((_QWORD *)v36 + 155);
        if ( v38 )
        {
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)a3 + 430, 0x100uLL, v38);
          v37 = 0;
        }
        else if ( a3 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-860LL )
        {
          *((_WORD *)a3 + 430) = v37;
        }
        v39 = (unsigned __int16 *)*((_QWORD *)v36 + 156);
        v40 = (_WORD *)((char *)a3 + 1116);
        v41 = 260LL;
        v42 = 260LL;
        v43 = (unsigned __int64)*v39 >> 1;
        v44 = *((_QWORD *)v39 + 1) - ((_QWORD)a3 + 1116);
        while ( v42 + v43 - 260 )
        {
          v45 = *(_WORD *)((char *)v40 + v44);
          if ( !v45 )
            break;
          *v40++ = v45;
          if ( !--v42 )
          {
            --v40;
            break;
          }
        }
        *v40 = v37;
        ExReleasePushLockSharedEx(v34, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v120 + 2), v120);
        v46 = v121;
        v130 = v121;
        if ( !v121 )
        {
          v80 = a3;
          LODWORD(v19) = 0;
          goto LABEL_102;
        }
        v147[1] = v121;
        _InterlockedIncrement64((volatile signed __int64 *)v121 + 3);
        v147[0] = -1LL;
        KeEnterCriticalRegion();
        v47 = v121;
        v48 = (char *)v121 + 120;
        v131 = (char *)v121 + 120;
        ExAcquirePushLockSharedEx((char *)v121 + 120, 0LL);
        v51 = *((_DWORD *)v47 + 44);
        v148 = 1;
        if ( v51 == 1 )
        {
          v52 = v151;
          v53 = v121;
          if ( v151 == -1
            || (v54 = DXGPROCESS::GetCurrent(v50, v49),
                (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v54 + 12) + 224LL))(0LL)) )
          {
            v80 = a3;
            goto LABEL_87;
          }
          v56 = *((_QWORD *)v53 + 288);
          if ( v56 && v151 < *(_DWORD *)(v56 + 80) )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v13[288], v151);
            if ( !SessionViewOwner )
            {
              v80 = a3;
              LODWORD(v19) = 0;
              *((_DWORD *)a3 + 479) = -1;
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
              *((_QWORD *)a3 + 246) = 0LL;
              *(_QWORD *)((char *)a3 + 1924) = 0LL;
              *(_QWORD *)((char *)a3 + 1932) = 5LL;
              *((_DWORD *)a3 + 485) = 1;
              *((_QWORD *)a3 + 243) = 1LL;
              SetDisplayInfoDefaultToSDR(a3);
              goto LABEL_89;
            }
            v58 = *(_QWORD *)(*((_QWORD *)v53 + 288) + 112LL);
            v125 = 3760LL * v151;
            v59 = *(unsigned int *)(v58 + v125 + 1068);
            if ( (_DWORD)v59 != -1 && DmmIsTargetHMD(v53, v59) )
              v60 = 8;
            else
              v60 = 0;
            *((_DWORD *)a3 + 507) = v60 | *((_DWORD *)a3 + 507) & 0xFFFFFFF7;
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v53 + 288), v151);
            v62 = a3;
            if ( (*((_DWORD *)a3 + 507) & 8) != 0 )
            {
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
            }
            else
            {
              *(_OWORD *)((char *)a3 + 1644) = *(_OWORD *)(SessionViewOwner + 3);
              v63 = *((_QWORD *)v53 + 288);
              DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16));
              v64 = *(_QWORD *)(v63 + 112);
              v52 = v151;
              v65 = *(_OWORD *)(v64 + v125 + 652);
              v62 = a3;
              *((_OWORD *)a3 + 122) = v65;
            }
            *((_DWORD *)v62 + 479) = v59;
            *((_DWORD *)a3 + 480) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v53 + 288), v52);
            *((_DWORD *)a3 + 481) = *(_DWORD *)DisplayModeInfo;
            *((_DWORD *)a3 + 482) = *((_DWORD *)DisplayModeInfo + 1);
            v66 = *((_DWORD *)DisplayModeInfo + 2);
            if ( v66 == 21 )
            {
LABEL_63:
              v67 = 4;
            }
            else
            {
              v110 = v66 - 20;
              if ( v110 )
              {
                v111 = v110 - 2;
                if ( !v111 )
                  goto LABEL_63;
                v112 = v111 - 1;
                if ( v112 )
                {
                  if ( v112 == 18 )
                    v67 = 1;
                  else
                    v67 = 5;
                }
                else
                {
                  v67 = 2;
                }
              }
              else
              {
                v67 = 3;
              }
            }
            *((_DWORD *)a3 + 483) = v67;
            v68 = *((_DWORD *)DisplayModeInfo + 4);
            if ( v68 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
            {
              *((_DWORD *)a3 + 484) = 64;
              *((_DWORD *)a3 + 485) = 1;
            }
            else
            {
              *((_DWORD *)a3 + 484) = v68;
              *((_DWORD *)a3 + 485) = *((_DWORD *)DisplayModeInfo + 5);
            }
            CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v53 + 288), v52, 2);
            v70 = *((unsigned int *)a3 + 479);
            *((_DWORD *)a3 + 486) = CurrentOrientation;
            *((_DWORD *)a3 + 487) = *((_DWORD *)DisplayModeInfo + 6);
            if ( (int)MonitorGetLinkInfo(v53, v70, v135) >= 0 )
            {
              v113 = ((*((_BYTE *)a3 + 2028) | 0x40) ^ (unsigned __int8)((_BYTE)v136 << 7)) & 0x80 ^ (*((_DWORD *)a3 + 507) | 0x40);
              v71 = ((unsigned __int16)v113 ^ (unsigned __int16)((_WORD)v136 << 6)) & 0x100 ^ (unsigned int)v113;
              v72 = (unsigned int)v71 ^ ((unsigned __int16)v71 ^ (unsigned __int16)((_WORD)v136 << 8)) & 0x200;
              *((_DWORD *)a3 + 507) = v72;
            }
            else
            {
              *((_DWORD *)a3 + 507) &= 0xFFFFFC3F;
            }
            *((_QWORD *)a3 + 246) = SessionViewOwner[8];
            if ( *((_DWORD *)SessionViewOwner + 10) == 1 )
            {
              LODWORD(v19) = 0;
              MonitorHandle = 0LL;
              v133 = 0LL;
              v74 = WdLogNewEntry5_WdTrace(v72, v71);
              *(_QWORD *)(v74 + 24) = v59;
              *(_QWORD *)(v74 + 32) = v53;
              if ( (_DWORD)v59 == -1 )
              {
                v80 = a3;
                goto LABEL_126;
              }
              v133 = 0LL;
              DXGADAPTER::IsCoreResourceSharedOwner(v53);
              if ( !*((_QWORD *)v53 + 288) )
              {
                v114 = WdLogNewEntry5_WdAssertion(v75);
                WdLogEvent5_WdAssertion(v114);
              }
              v76 = *(struct _FAST_MUTEX **)(*((_QWORD *)v53 + 288) + 96LL);
              if ( v76 )
              {
                v132 = 0LL;
                MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v76, v59, 0, (ULONG **)&v132);
                if ( MonitorInstance == -1073741275 )
                {
                  v116 = WdLogNewEntry5_WdDmmEvent(v78);
                  *(_QWORD *)(v116 + 24) = v59;
                  *(_QWORD *)(v116 + 32) = v76;
                  WdLogEvent5_WdDmmEvent(v116);
                }
                else
                {
                  if ( MonitorInstance >= 0 )
                  {
                    v79 = v132;
                    if ( !v132 )
                    {
                      v117 = WdLogNewEntry5_WdAssertion(v78);
                      WdLogEvent5_WdAssertion(v117);
                    }
                    DXGMONITOR::_AddReference(v79, DxgkpGetAdapterDeviceDesc);
                    v80 = a3;
                    MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v79);
                    v133 = MonitorHandle;
                    if ( (int)MonitorGetAdvancedColorParams(
                                (_DWORD)MonitorHandle,
                                (int)a3 + 1984,
                                (int)a3 + 1992,
                                (int)a3 + 2000,
                                (__int64)a3 + 2008,
                                (__int64)a3 + 2016,
                                (__int64)a3 + 2020,
                                (__int64)a3 + 2024,
                                (__int64)&v153,
                                (__int64)v124,
                                (__int64)&v123,
                                (__int64)&v122) >= 0 )
                    {
                      LODWORD(v19) = 0;
                      if ( v153 )
                        v81 = 1024;
                      else
                        v81 = 0;
                      *((_DWORD *)a3 + 507) = v81 | *((_DWORD *)a3 + 507) & 0xFFFFFBFF;
LABEL_81:
                      if ( MonitorHandle && (int)MonitorReleaseMonitorHandle(v53) < 0 )
                      {
                        v118 = WdLogNewEntry5_WdAssertion(v82);
                        *(_QWORD *)(v118 + 24) = 6177LL;
                        WdLogEvent5_WdAssertion(v118);
                      }
                      if ( DmmGetCurrentWireFormatAndColorSpace(v53, v151, v59, &v128, &v129) < 0 )
                      {
                        SetDisplayInfoDefaultToSDR(v80);
                        v46 = v130;
                        v48 = v131;
                      }
                      else
                      {
                        ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v128);
                        v46 = v130;
                        v48 = v131;
                        *((_DWORD *)v80 + 494) = ColorDepthFromPickedWireFormat;
                        *((_DWORD *)v80 + 495) = v129;
                      }
LABEL_88:
                      v84 = 1;
LABEL_89:
                      *((_DWORD *)v80 + 5) = *((_DWORD *)v53 + 74);
                      *((_DWORD *)v80 + 6) = *((_DWORD *)v53 + 69);
                      *((_DWORD *)v80 + 7) = *((_DWORD *)v53 + 70);
                      *((_DWORD *)v80 + 8) = *((_DWORD *)v53 + 71);
                      *((_DWORD *)v80 + 9) = *((_DWORD *)v53 + 72);
                      *((_DWORD *)v80 + 10) = *((_DWORD *)v53 + 73);
                      if ( (*((_DWORD *)v53 + 75) & 0x80u) != 0 )
                        v85 = v84;
                      else
                        v85 = 0;
                      *((_DWORD *)v80 + 206) = v85;
                      if ( *((_DWORD *)v53 + 62) <= 1u )
                        v84 = 0;
                      *((_DWORD *)v80 + 207) = v84;
                      *((_DWORD *)v80 + 11) = DXGADAPTER::GetDriverVersion(v53);
                      v86 = (const wchar_t *)*((_QWORD *)v53 + 155);
                      if ( v86 )
                      {
                        RtlStringCbCopyW((NTSTRSAFE_PWSTR)v80 + 24, 0x100uLL, v86);
                      }
                      else if ( v80 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-48LL )
                      {
                        *((_WORD *)v80 + 24) = 0;
                      }
                      v87 = (unsigned __int16 *)*((_QWORD *)v53 + 156);
                      v88 = (_WORD *)((char *)v80 + 304);
                      v89 = (unsigned __int64)*v87 >> 1;
                      v90 = *((_QWORD *)v87 + 1) - ((_QWORD)v80 + 304);
                      while ( v41 + v89 - 260 )
                      {
                        v91 = *(_WORD *)((char *)v88 + v90);
                        if ( !v91 )
                          break;
                        *v88++ = v91;
                        if ( !--v41 )
                        {
                          --v88;
                          break;
                        }
                      }
                      *v88 = 0;
                      ExReleasePushLockSharedEx(v48, 0LL);
                      KeLeaveCriticalRegion();
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
LABEL_102:
                      *((_WORD *)v80 + 153) = 92;
                      *((_WORD *)v80 + 559) = 92;
LABEL_103:
                      v92 = v143;
                      if ( v143 )
                      {
                        if ( v144 )
                        {
                          COREACCESS::Release((COREACCESS *)v141);
                          v92 = v143;
                        }
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v92 + 2), v92);
                      }
                      v93 = v139;
                      if ( v139 )
                      {
                        if ( v140 )
                        {
                          COREACCESS::Release((COREACCESS *)v137);
                          v93 = v139;
                        }
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v93 + 2), v93);
                      }
                      goto LABEL_113;
                    }
LABEL_158:
                    LODWORD(v19) = 0;
LABEL_126:
                    SetDisplayInfoDefaultToSDR(v80);
                    goto LABEL_81;
                  }
                  v115 = WdLogNewEntry5_WdError(v78);
                  *(_QWORD *)(v115 + 24) = v59;
                  *(_QWORD *)(v115 + 32) = v76;
LABEL_156:
                  WdLogEvent5_WdError(v115);
                }
                v80 = a3;
                goto LABEL_158;
              }
              v115 = WdLogNewEntry5_WdError(v75);
              *(_QWORD *)(v115 + 24) = v53;
              goto LABEL_156;
            }
            v80 = a3;
            SetDisplayInfoDefaultToSDR(a3);
            v46 = v130;
            v48 = v131;
LABEL_87:
            LODWORD(v19) = 0;
            goto LABEL_88;
          }
          v119 = (_QWORD *)WdLogNewEntry5_WdError(v55);
          v119[3] = v151;
          LODWORD(v19) = -1073741811;
          v119[5] = -1073741811LL;
          v119[4] = v13;
          WdLogEvent5_WdError(v119);
        }
        else
        {
          LODWORD(v19) = -1073741130;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v147);
        goto LABEL_103;
      }
    }
  }
  if ( v127 )
  {
    v127 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v126);
  }
  v100 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v100 + 32) = LowPart;
  *(_QWORD *)(v100 + 24) = HighPart;
  WdLogEvent5_WdError(v100);
  return -1073741811LL;
}
