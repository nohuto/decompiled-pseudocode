/*
 * XREFs of ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00A9020 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00026C0 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0002748 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0014E10 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00A9BD4 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9E60 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00A9EF8 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00A9F40 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00AA124 (MonitorGetAdvancedColorParams.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00AA29C (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00AA4CC (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00B7FC8 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E21E8 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetAdapterDeviceDesc(
        struct _LUID a1,
        unsigned int a2,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a3)
{
  __int64 v3; // r12
  DWORD LowPart; // ebx
  struct DXGGLOBAL *Global; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // r14
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  unsigned __int64 *v18; // rcx
  unsigned int v19; // edx
  struct DXGADAPTER **v20; // rax
  __int64 v21; // rcx
  volatile signed __int64 *v22; // rbx
  DXGADAPTER *v23; // rdi
  _BOOL8 v24; // rcx
  DXGADAPTER *v25; // rsi
  signed __int64 v26; // rax
  DXGADAPTER *v27; // rbx
  DXGADAPTER *v28; // rbx
  char *v29; // r15
  int v30; // eax
  DXGADAPTER *v31; // rbx
  __int16 v32; // r10
  char *v33; // r8
  unsigned __int16 *v34; // rax
  _WORD *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // r9
  __int16 v40; // ax
  DXGADAPTER *v41; // rbx
  int v42; // eax
  struct DXGPROCESS *v43; // rax
  __int64 v44; // rcx
  DXGADAPTER *v45; // rsi
  __int64 v46; // rax
  struct SESSION_VIEW *SessionViewOwner; // r15
  int v48; // edx
  int v49; // eax
  char *v50; // r8
  unsigned __int16 *v51; // rcx
  _WORD *v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // r8
  __int16 v55; // cx
  bool v56; // zf
  struct DXGADAPTER *v57; // rbx
  struct DXGADAPTER *v58; // rcx
  struct DXGADAPTER *v59; // rcx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  __int64 v63; // rbx
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // r14
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  MONITOR_MGR *v77; // r15
  int MonitorInstance; // eax
  __int64 v79; // rcx
  DXGMONITOR *v80; // rbx
  int v81; // ecx
  unsigned int v82; // eax
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // ecx
  unsigned int v87; // eax
  unsigned int v88; // ebx
  __int64 v89; // rcx
  DXGSESSIONMGR *v90; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  _QWORD *v113; // rax
  bool v114; // [rsp+70h] [rbp-90h]
  unsigned int v115; // [rsp+74h] [rbp-8Ch] BYREF
  DXGADAPTER *v116; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v117[2]; // [rsp+80h] [rbp-80h] BYREF
  char v118; // [rsp+90h] [rbp-70h] BYREF
  char v119; // [rsp+91h] [rbp-6Fh] BYREF
  _BYTE v120[6]; // [rsp+92h] [rbp-6Eh] BYREF
  DXGFASTMUTEX *v121; // [rsp+98h] [rbp-68h] BYREF
  char v122; // [rsp+A0h] [rbp-60h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v123; // [rsp+A8h] [rbp-58h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v124; // [rsp+ACh] [rbp-54h] BYREF
  struct DXGMONITOR *v125; // [rsp+B0h] [rbp-50h] BYREF
  struct HDXGMONITOR__ *v126; // [rsp+B8h] [rbp-48h]
  __int64 v127; // [rsp+C0h] [rbp-40h] BYREF
  struct DXGADAPTER *v128; // [rsp+C8h] [rbp-38h]
  char v129; // [rsp+D0h] [rbp-30h]
  __int64 v130; // [rsp+D8h] [rbp-28h] BYREF
  struct _KTHREAD **v131[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct DXGADAPTER *v132; // [rsp+F8h] [rbp-8h]
  char v133; // [rsp+100h] [rbp+0h]
  struct _KTHREAD **v134[2]; // [rsp+108h] [rbp+8h] BYREF
  struct DXGADAPTER *v135; // [rsp+118h] [rbp+18h]
  char v136; // [rsp+120h] [rbp+20h]
  _QWORD v137[2]; // [rsp+130h] [rbp+30h] BYREF
  char v138; // [rsp+140h] [rbp+40h]
  unsigned __int64 v139; // [rsp+148h] [rbp+48h] BYREF
  LONG HighPart; // [rsp+1A4h] [rbp+A4h]
  unsigned int v141; // [rsp+1A8h] [rbp+A8h]
  char v142; // [rsp+1B0h] [rbp+B0h] BYREF
  char v143; // [rsp+1B8h] [rbp+B8h] BYREF

  v141 = a2;
  HighPart = a1.HighPart;
  v3 = a2;
  v116 = 0LL;
  v117[0] = 0LL;
  LowPart = a1.LowPart;
  if ( !a3 )
  {
    v94 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v94 + 24) = 6071LL;
    WdLogEvent5_WdAssertion(v94);
  }
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v122 = 0;
  v121 = (struct DXGGLOBAL *)((char *)Global + 408);
  if ( Global == (struct DXGGLOBAL *)-408LL )
  {
    v95 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v95 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v95);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v121 + 1) == CurrentThread )
  {
    v96 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v96 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v96);
  }
  if ( v122 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v97[5] = &v121;
    v97[3] = 275LL;
    v97[4] = 4LL;
    v97[6] = 0LL;
    v97[7] = 0LL;
    WdLogEvent5_WdCriticalError(v97);
  }
  DXGFASTMUTEX::Acquire(v121);
  v122 = 1;
  v9 = (_QWORD *)*((_QWORD *)Global + 56);
LABEL_10:
  while ( v9 != (_QWORD *)((char *)Global + 448) && v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    if ( *(_QWORD *)((char *)v10 + 268) == __PAIR64__(HighPart, LowPart) )
    {
      _m_prefetchw(v10 + 3);
      v11 = v10[3];
      if ( v11 )
      {
        while ( 1 )
        {
          v8 = v11 + 1;
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
          if ( v12 == v11 )
            break;
          if ( !v11 )
            goto LABEL_10;
        }
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v121);
        v13 = DxgkAcquireSessionModeChangeLock(0LL);
        v15 = v13;
        v114 = v13 >= 0;
        if ( v13 < 0 )
        {
          v98 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v98 + 24) = v15;
          WdLogEvent5_WdError(v98);
LABEL_87:
          if ( v114 )
            DxgkReleaseSessionModeChangeLock();
          return (unsigned int)v15;
        }
        Current = DXGPROCESS::GetCurrent();
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL) )
          goto LABEL_17;
        v88 = 0;
        v90 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17) + 74);
        if ( v90 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v89);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v90,
                                             CurrentProcessSessionId);
          if ( SessionDataForSpecifiedSession )
          {
            v89 = *((unsigned int *)v10 + 67);
            if ( *((_DWORD *)SessionDataForSpecifiedSession + 4623) == (_DWORD)v89 )
            {
              v89 = *((unsigned int *)v10 + 68);
              if ( *((_DWORD *)SessionDataForSpecifiedSession + 4624) == (_DWORD)v89 )
                v88 = *((_DWORD *)SessionDataForSpecifiedSession + 4625);
            }
          }
        }
        if ( (_DWORD)v3 != -1 && (unsigned int)v3 >= v88 )
        {
          v99 = WdLogNewEntry5_WdError(v89);
          *(_QWORD *)(v99 + 32) = v88;
          *(_QWORD *)(v99 + 24) = v3;
          WdLogEvent5_WdError(v99);
          LODWORD(v15) = -1073741811;
          goto LABEL_87;
        }
        LODWORD(v3) = -1;
        v141 = -1;
LABEL_17:
        v18 = (unsigned __int64 *)&v130;
        v130 = -1LL;
        v19 = 0;
        v20 = &v116;
        if ( (_DWORD)v3 == -1 )
        {
          v18 = 0LL;
          v20 = 0LL;
        }
        else
        {
          v19 = v3;
        }
        if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v10, v19, v117, &v139, v20, v18) < 0 )
        {
          v100 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v100 + 32) = (unsigned int)v3;
          *(_QWORD *)(v100 + 24) = v10;
          WdLogEvent5_WdError(v100);
          LODWORD(v15) = -1073741811;
          goto LABEL_87;
        }
        v22 = (volatile signed __int64 *)v117[0];
        if ( !v117[0] )
        {
          v101 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v101 + 24) = 6156LL;
          WdLogEvent5_WdAssertion(v101);
        }
        v23 = v116;
        v24 = (_DWORD)v3 == -1;
        if ( v24 != (v116 == 0LL) )
        {
          v102 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v102 + 24) = 6157LL;
          WdLogEvent5_WdAssertion(v102);
        }
        v132 = (struct DXGADAPTER *)v22;
        v133 = 0;
        if ( !v23 )
          v23 = (DXGADAPTER *)v22;
        if ( v22 )
        {
          _InterlockedIncrement64(v22 + 3);
          v22 = (volatile signed __int64 *)v117[0];
          v131[1] = (struct _KTHREAD **)-1LL;
        }
        if ( v23 )
          v22 = (volatile signed __int64 *)v23;
        v135 = (struct DXGADAPTER *)v22;
        v136 = 0;
        if ( v22 )
        {
          _InterlockedIncrement64(v22 + 3);
          v134[1] = (struct _KTHREAD **)-1LL;
        }
        if ( _InterlockedExchangeAdd64(v10 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v10[2], (struct DXGADAPTER *)v10);
        v25 = v117[0];
        v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v117[0] + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v27 = v117[0];
        if ( v26 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v117[0] + 2), v117[0]);
        if ( v116 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v116 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v116 + 2), v116);
          v27 = v117[0];
        }
        else
        {
          v116 = v27;
        }
        v137[1] = v27;
        _InterlockedIncrement64((volatile signed __int64 *)v25 + 3);
        v137[0] = -1LL;
        KeEnterCriticalRegion();
        v28 = v117[0];
        v29 = (char *)v117[0] + 120;
        ExAcquirePushLockSharedEx((char *)v117[0] + 120, 0LL);
        v30 = *((_DWORD *)v28 + 44);
        v138 = 1;
        if ( v30 != 1 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v137);
          LODWORD(v15) = -1073741130;
          goto LABEL_77;
        }
        v31 = v117[0];
        *((_DWORD *)a3 + 208) = *((_DWORD *)v117[0] + 74);
        *((_DWORD *)a3 + 209) = *((_DWORD *)v31 + 69);
        *((_DWORD *)a3 + 210) = *((_DWORD *)v31 + 70);
        *((_DWORD *)a3 + 211) = *((_DWORD *)v31 + 71);
        *((_DWORD *)a3 + 212) = *((_DWORD *)v31 + 72);
        *((_DWORD *)a3 + 213) = *((_DWORD *)v31 + 73);
        *((_DWORD *)a3 + 409) = (*((_DWORD *)v31 + 75) & 0x80u) != 0;
        *((_DWORD *)a3 + 410) = *((_DWORD *)v31 + 62) > 1u;
        *((_DWORD *)a3 + 214) = DXGADAPTER::GetDriverVersion(v31);
        v33 = (char *)*((_QWORD *)v31 + 167);
        if ( v33 )
        {
          RtlStringCbCopyW((char *)a3 + 860, 0x100uLL, v33);
          v32 = 0;
        }
        else if ( a3 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-860LL )
        {
          *((_WORD *)a3 + 430) = v32;
        }
        v34 = (unsigned __int16 *)*((_QWORD *)v31 + 168);
        v35 = (_WORD *)((char *)a3 + 1116);
        v36 = 260LL;
        v37 = 260LL;
        v38 = ((unsigned __int64)*v34 >> 1) - 260;
        v39 = *((_QWORD *)v34 + 1) - ((_QWORD)a3 + 1116);
        while ( v37 + v38 )
        {
          v40 = *(_WORD *)((char *)v35 + v39);
          if ( !v40 )
            break;
          *v35++ = v40;
          if ( !--v37 )
          {
            --v35;
            break;
          }
        }
        *v35 = v32;
        ExReleasePushLockSharedEx(v29, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v117[0] + 2), v117[0]);
        if ( !v116 )
        {
          LODWORD(SessionViewOwner) = 0;
          goto LABEL_76;
        }
        v128 = v116;
        _InterlockedIncrement64((volatile signed __int64 *)v116 + 3);
        v127 = -1LL;
        KeEnterCriticalRegion();
        v41 = v116;
        ExAcquirePushLockSharedEx((char *)v116 + 120, 0LL);
        v42 = *((_DWORD *)v41 + 44);
        v129 = 1;
        if ( v42 == 1 )
        {
          if ( (_DWORD)v3 == -1
            || (v43 = DXGPROCESS::GetCurrent(),
                (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v43 + 13) + 224LL))(0LL)) )
          {
            LODWORD(SessionViewOwner) = 0;
            goto LABEL_60;
          }
          v45 = v116;
          v46 = *((_QWORD *)v116 + 307);
          if ( v46 && (unsigned int)v3 < *(_DWORD *)(v46 + 80) )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v10[307], v3);
            if ( !SessionViewOwner )
            {
              *((_DWORD *)a3 + 479) = -1;
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
              *(_QWORD *)((char *)a3 + 1924) = 0LL;
              *(_QWORD *)((char *)a3 + 1932) = 5LL;
              *((_DWORD *)a3 + 485) = 1;
              *((_QWORD *)a3 + 243) = 1LL;
              *((_QWORD *)a3 + 246) = 0LL;
              v117[1] = 0LL;
              SetDisplayInfoDefaultToSDR(a3);
LABEL_62:
              *((_DWORD *)a3 + 5) = *((_DWORD *)v45 + 74);
              *((_DWORD *)a3 + 6) = *((_DWORD *)v45 + 69);
              *((_DWORD *)a3 + 7) = *((_DWORD *)v45 + 70);
              *((_DWORD *)a3 + 8) = *((_DWORD *)v45 + 71);
              *((_DWORD *)a3 + 9) = *((_DWORD *)v45 + 72);
              *((_DWORD *)a3 + 10) = *((_DWORD *)v45 + 73);
              if ( (*((_DWORD *)v45 + 75) & 0x80u) != 0 )
                v49 = v48;
              else
                v49 = (int)SessionViewOwner;
              *((_DWORD *)a3 + 206) = v49;
              if ( *((_DWORD *)v45 + 62) <= 1u )
                v48 = (int)SessionViewOwner;
              *((_DWORD *)a3 + 207) = v48;
              *((_DWORD *)a3 + 11) = DXGADAPTER::GetDriverVersion(v45);
              v50 = (char *)*((_QWORD *)v45 + 167);
              if ( v50 )
              {
                RtlStringCbCopyW((char *)a3 + 48, 0x100uLL, v50);
              }
              else if ( a3 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-48LL )
              {
                *((_WORD *)a3 + 24) = (_WORD)SessionViewOwner;
              }
              v51 = (unsigned __int16 *)*((_QWORD *)v45 + 168);
              v52 = (_WORD *)((char *)a3 + 304);
              v53 = ((unsigned __int64)*v51 >> 1) - 260;
              v54 = *((_QWORD *)v51 + 1) - ((_QWORD)a3 + 304);
              while ( v36 + v53 )
              {
                v55 = *(_WORD *)((char *)v52 + v54);
                if ( !v55 )
                  break;
                *v52++ = v55;
                if ( !--v36 )
                {
                  --v52;
                  break;
                }
              }
              v56 = v129 == 0;
              *v52 = (_WORD)SessionViewOwner;
              if ( !v56 )
              {
                v57 = v128;
                ExReleasePushLockSharedEx((char *)v128 + 120, 0LL);
                KeLeaveCriticalRegion();
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v128 + 2), v128);
              }
LABEL_76:
              LODWORD(v15) = (_DWORD)SessionViewOwner;
              *((_WORD *)a3 + 153) = 92;
              *((_WORD *)a3 + 559) = 92;
LABEL_77:
              v58 = v135;
              if ( v135 )
              {
                if ( v136 )
                {
                  COREACCESS::Release(v134);
                  v58 = v135;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
              }
              v59 = v132;
              if ( v132 )
              {
                if ( v133 )
                {
                  COREACCESS::Release(v131);
                  v59 = v132;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v59 + 2), v59);
              }
              goto LABEL_87;
            }
            v115 = -1;
            DmmGetMostImportantClientVidPnPathTargetsFromSource(v45, v3, &v115);
            if ( v115 == -1 )
              TargetUsage = 0;
            else
              TargetUsage = DmmGetTargetUsage(v45, v115);
            *((_DWORD *)a3 + 507) = TargetUsage;
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v45 + 307), v3);
            if ( *((_DWORD *)a3 + 507) )
            {
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
            }
            else
            {
              *(_OWORD *)((char *)a3 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
              v63 = *((_QWORD *)v45 + 307);
              DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16));
              *((_OWORD *)a3 + 122) = *(_OWORD *)(3760LL * (unsigned int)v3 + *(_QWORD *)(v63 + 112) + 652);
            }
            *((_DWORD *)a3 + 479) = v115;
            *((_DWORD *)a3 + 480) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v45 + 307), v3);
            *((_DWORD *)a3 + 481) = *(_DWORD *)DisplayModeInfo;
            *((_DWORD *)a3 + 482) = *((_DWORD *)DisplayModeInfo + 1);
            v64 = *((_DWORD *)DisplayModeInfo + 2);
            if ( v64 == 21 )
            {
LABEL_96:
              v65 = 4;
            }
            else
            {
              v103 = v64 - 20;
              if ( v103 )
              {
                v104 = v103 - 2;
                if ( !v104 )
                  goto LABEL_96;
                v105 = v104 - 1;
                if ( v105 )
                {
                  if ( v105 == 18 )
                    v65 = 1;
                  else
                    v65 = 5;
                }
                else
                {
                  v65 = 2;
                }
              }
              else
              {
                v65 = 3;
              }
            }
            *((_DWORD *)a3 + 483) = v65;
            v66 = *((_DWORD *)DisplayModeInfo + 4);
            if ( v66 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
            {
              *((_DWORD *)a3 + 484) = 64;
              v67 = 1;
            }
            else
            {
              *((_DWORD *)a3 + 484) = v66;
              v67 = *((_DWORD *)DisplayModeInfo + 5);
            }
            *((_DWORD *)a3 + 485) = v67;
            *((_DWORD *)a3 + 486) = ADAPTER_DISPLAY::GetCurrentOrientation(
                                      *((_QWORD *)v45 + 307),
                                      (unsigned int)v3,
                                      2LL);
            *((_DWORD *)a3 + 487) = *((_DWORD *)DisplayModeInfo + 6);
            DxgkpCopyMonitorLinkInfoToFlags(v45, a3);
            *((_QWORD *)a3 + 246) = *((_QWORD *)SessionViewOwner + 8);
            if ( *((_DWORD *)SessionViewOwner + 10) != 1 )
            {
              SetDisplayInfoDefaultToSDR(a3);
              LODWORD(SessionViewOwner) = 0;
              goto LABEL_119;
            }
            v72 = v115;
            LODWORD(SessionViewOwner) = 0;
            MonitorHandle = 0LL;
            v126 = 0LL;
            v74 = WdLogNewEntry5_WdTrace(v69, v68, v70, v71);
            *(_QWORD *)(v74 + 24) = v72;
            *(_QWORD *)(v74 + 32) = v45;
            if ( (_DWORD)v72 == -1 )
              goto LABEL_159;
            v126 = 0LL;
            DXGADAPTER::IsCoreResourceSharedOwner(v45);
            v76 = *((_QWORD *)v45 + 307);
            if ( !v76 )
            {
              v106 = WdLogNewEntry5_WdAssertion(v75);
              WdLogEvent5_WdAssertion(v106);
              v76 = *((_QWORD *)v45 + 307);
            }
            v77 = *(MONITOR_MGR **)(v76 + 96);
            if ( v77 )
            {
              v125 = 0LL;
              MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v77, v72, 0, &v125);
              if ( MonitorInstance == -1073741275 )
              {
                v108 = WdLogNewEntry5_WdDmmEvent();
                *(_QWORD *)(v108 + 24) = v72;
                *(_QWORD *)(v108 + 32) = v77;
                WdLogEvent5_WdDmmEvent(v108);
                goto LABEL_158;
              }
              if ( MonitorInstance >= 0 )
              {
                v80 = v125;
                if ( !v125 )
                {
                  v109 = WdLogNewEntry5_WdAssertion(v79);
                  WdLogEvent5_WdAssertion(v109);
                }
                DXGMONITOR::_AddReference(v80, DxgkpGetAdapterDeviceDesc);
                MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v80);
                v126 = MonitorHandle;
                if ( (int)MonitorGetAdvancedColorParams(
                            (_DWORD)MonitorHandle,
                            (int)a3 + 1984,
                            (int)a3 + 1992,
                            (int)a3 + 2000,
                            (__int64)a3 + 2008,
                            (__int64)a3 + 2016,
                            (__int64)a3 + 2020,
                            (__int64)a3 + 2024,
                            (__int64)&v142,
                            (__int64)v120,
                            (__int64)&v119,
                            (__int64)&v118,
                            (__int64)&v143) >= 0 )
                {
                  LODWORD(SessionViewOwner) = 0;
                  if ( v142 )
                    v81 = 512;
                  else
                    v81 = 0;
                  v82 = v81 | *((_DWORD *)a3 + 510) & 0xFFFFFDFF;
                  v56 = v143 == 0;
                  *((_DWORD *)a3 + 510) = v82;
                  if ( v56 )
                    v83 = 0;
                  else
                    v83 = 4096;
                  *((_DWORD *)a3 + 510) = v83 | v82 & 0xFFFFEFFF;
LABEL_114:
                  if ( MonitorHandle && (int)MonitorReleaseMonitorHandle(v45) < 0 )
                  {
                    v110 = WdLogNewEntry5_WdAssertion(v84);
                    *(_QWORD *)(v110 + 24) = 6336LL;
                    WdLogEvent5_WdAssertion(v110);
                  }
                  LODWORD(v3) = v141;
                  if ( DmmGetCurrentWireFormatAndColorSpace(v45, v141, v115, &v123, &v124) < 0 )
                  {
                    SetDisplayInfoDefaultToSDR(a3);
                  }
                  else
                  {
                    *((_DWORD *)a3 + 494) = GetColorDepthFromPickedWireFormat(v123);
                    *((_DWORD *)a3 + 495) = v124;
                  }
LABEL_119:
                  v85 = 3760LL * (unsigned int)v3;
                  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v45 + 307) + 112LL) + v85 + 724) )
                    v86 = 1024;
                  else
                    v86 = 0;
                  *((_DWORD *)a3 + 510) = v86 | *((_DWORD *)a3 + 510) & 0xFFFFFBFF;
                  v87 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 307) + 112LL) + v85 + 3756);
                  *((_QWORD *)a3 + 254) = v87;
                  if ( v87 )
                  {
                    _mm_lfence();
                    v111 = *(unsigned int *)(*((_QWORD *)v45 + 307)
                                           + 12
                                           * (*(unsigned int *)(*(_QWORD *)(*((_QWORD *)v45 + 307) + 112LL) + v85 + 3756)
                                            + 42LL));
                    if ( (_DWORD)v111 == 1 )
                    {
                      v45 = v116;
                      v48 = 1;
                      *((_DWORD *)a3 + 509) = 1;
                      goto LABEL_62;
                    }
                    v112 = WdLogNewEntry5_WdAssertion(v111);
                    *(_QWORD *)(v112 + 24) = 6389LL;
                    WdLogEvent5_WdAssertion(v112);
                    *((_DWORD *)a3 + 508) = 0;
LABEL_60:
                    v45 = v116;
                  }
                  v48 = 1;
                  goto LABEL_62;
                }
LABEL_158:
                LODWORD(SessionViewOwner) = 0;
LABEL_159:
                SetDisplayInfoDefaultToSDR(a3);
                goto LABEL_114;
              }
              v107 = WdLogNewEntry5_WdError(v79);
              *(_QWORD *)(v107 + 24) = v72;
              *(_QWORD *)(v107 + 32) = v77;
            }
            else
            {
              v107 = WdLogNewEntry5_WdError(v75);
              *(_QWORD *)(v107 + 24) = v45;
            }
            WdLogEvent5_WdError(v107);
            goto LABEL_158;
          }
          v113 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          LODWORD(v15) = -1073741811;
          v113[3] = (unsigned int)v3;
          v113[4] = v10;
          v113[5] = -1073741811LL;
          WdLogEvent5_WdError(v113);
        }
        else
        {
          LODWORD(v15) = -1073741130;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v127);
        goto LABEL_77;
      }
    }
  }
  if ( v122 )
  {
    v122 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v121);
  }
  v93 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v93 + 32) = LowPart;
  *(_QWORD *)(v93 + 24) = HighPart;
  WdLogEvent5_WdError(v93);
  return -1073741811LL;
}
