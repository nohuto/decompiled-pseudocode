/*
 * XREFs of ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00F7260 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000B0D4 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     RtlStringCbCopyW @ 0x1C000CC60 (RtlStringCbCopyW.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90A4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00F7D14 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7FA0 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00F8014 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3.c)
 *     DmmIsTargetHMD @ 0x1C00F8170 (DmmIsTargetHMD.c)
 *     MonitorGetHDRParamsFromTarget @ 0x1C00F84E4 (MonitorGetHDRParamsFromTarget.c)
 *     MonitorGetLinkInfo @ 0x1C00F8644 (MonitorGetLinkInfo.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YA?AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z @ 0x1C00F8730 (-D3dPixelFormatToDisplayConfigPixelFormat@@YA-AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00FA1CC (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetAdapterDeviceDesc(
        struct _LUID a1,
        __int64 a2,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a3,
        __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // r14
  DWORD LowPart; // ebx
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // r13
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  bool v21; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 *v27; // rcx
  unsigned int v28; // edx
  struct DXGADAPTER **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  volatile signed __int64 *v34; // rdi
  DXGADAPTER *v35; // rsi
  _BOOL8 v36; // rcx
  DXGADAPTER *v37; // r14
  signed __int64 v38; // rax
  DXGADAPTER *v39; // rdi
  DXGADAPTER *v40; // rdi
  char *v41; // r15
  int v42; // eax
  DXGADAPTER *v43; // rdi
  __int16 v44; // r10
  const wchar_t *v45; // r8
  unsigned __int16 *v46; // rax
  _WORD *v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // r8
  unsigned __int64 v50; // rcx
  __int64 v51; // r9
  __int16 v52; // ax
  DXGADAPTER *v53; // r15
  DXGADAPTER *v54; // rdi
  char *v55; // r12
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // edi
  DXGADAPTER *v59; // r14
  struct DXGPROCESS *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  int **SessionViewOwner; // r15
  __int64 v67; // rdx
  unsigned int v68; // r12d
  int v69; // ecx
  __int64 v70; // r8
  __int64 v71; // r9
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r13
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rax
  __int128 v76; // xmm0
  __int64 v77; // r8
  int v78; // eax
  _DWORD *v79; // rdx
  __int64 v80; // r9
  int v81; // eax
  int v82; // eax
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v83; // r13
  int v84; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  int v86; // edx
  int v87; // eax
  const wchar_t *v88; // r8
  unsigned __int16 *v89; // rcx
  _WORD *v90; // rax
  unsigned __int64 v91; // rdx
  __int64 v92; // r8
  __int16 v93; // cx
  struct DXGADAPTER *v94; // rcx
  struct DXGADAPTER *v95; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  DXGSESSIONMGR *v99; // rdi
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v103; // r8
  __int64 v104; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // edx
  int v118; // edx
  _QWORD *v119; // rax
  DXGADAPTER *v120; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v121; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v122; // [rsp+60h] [rbp-A0h]
  DXGFASTMUTEX *v123; // [rsp+68h] [rbp-98h] BYREF
  char v124; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v125; // [rsp+78h] [rbp-88h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v126; // [rsp+80h] [rbp-80h] BYREF
  enum D3DDDI_COLOR_SPACE_TYPE v127; // [rsp+84h] [rbp-7Ch] BYREF
  char *v128; // [rsp+88h] [rbp-78h]
  __int64 v129; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v130[4]; // [rsp+98h] [rbp-68h] BYREF
  int v131; // [rsp+9Ch] [rbp-64h]
  _BYTE v132[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v133; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v134; // [rsp+B8h] [rbp-48h]
  char v135; // [rsp+C0h] [rbp-40h]
  _BYTE v136[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-30h]
  struct DXGADAPTER *v138; // [rsp+D8h] [rbp-28h]
  char v139; // [rsp+E0h] [rbp-20h]
  _QWORD v140[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v141; // [rsp+100h] [rbp+0h]
  _QWORD v142[2]; // [rsp+108h] [rbp+8h] BYREF
  char v143; // [rsp+118h] [rbp+18h]
  unsigned __int64 v144[3]; // [rsp+120h] [rbp+20h] BYREF
  LONG HighPart; // [rsp+184h] [rbp+84h]
  unsigned int v146; // [rsp+188h] [rbp+88h]
  char v148; // [rsp+198h] [rbp+98h] BYREF

  v146 = a2;
  HighPart = a1.HighPart;
  v4 = 0;
  v5 = (unsigned int)a2;
  v121 = 0LL;
  v120 = 0LL;
  LowPart = a1.LowPart;
  if ( !a3 )
  {
    v107 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2, 0LL, a4);
    *(_QWORD *)(v107 + 24) = 6025LL;
    WdLogEvent5_WdAssertion(v107);
  }
  v8 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v108 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2, a3, a4);
    *(_QWORD *)(v108 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v108);
    v8 = DXGGLOBAL::m_pGlobal;
  }
  v124 = 0;
  v123 = (DXGFASTMUTEX *)(v8 + 50);
  if ( v8 == (_QWORD *)-400LL )
  {
    v109 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2, a3, a4);
    *(_QWORD *)(v109 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v109);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v123 + 1) == CurrentThread )
  {
    v110 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v110 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v110);
  }
  if ( v124 )
  {
    v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v111[5] = &v123;
    v111[3] = 275LL;
    v111[4] = 4LL;
    v111[6] = 0LL;
    v111[7] = 0LL;
    WdLogEvent5_WdCriticalError(v111);
  }
  DXGFASTMUTEX::Acquire(v123);
  v12 = (__int64)(v8 + 55);
  v124 = 1;
  v13 = (_QWORD *)v8[55];
LABEL_12:
  while ( v13 != (_QWORD *)v12 && v13 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    if ( *(_QWORD *)((char *)v14 + 268) == __PAIR64__(HighPart, LowPart) )
    {
      _m_prefetchw(v14 + 3);
      v15 = v14[3];
      if ( v15 )
      {
        while ( 1 )
        {
          v10 = v15 + 1;
          v16 = v15;
          v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
          if ( v16 == v15 )
            break;
          if ( !v15 )
            goto LABEL_12;
        }
        if ( v124 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v123, (__int64)v13, v12, v11);
        v17 = DxgkAcquireSessionModeChangeLock(0LL);
        v20 = v17;
        v21 = v17 >= 0;
        if ( v17 < 0 )
        {
          v112 = WdLogNewEntry5_WdError(v19, v18);
          *(_QWORD *)(v112 + 24) = v20;
          WdLogEvent5_WdError(v112);
          goto LABEL_102;
        }
        Current = DXGPROCESS::GetCurrent(v19);
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL) )
          goto LABEL_20;
        v99 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v24, v23, v25, v26) + 73);
        if ( v99 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v98, v97, v100, v101);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v99,
                                             CurrentProcessSessionId,
                                             v103,
                                             v104);
          if ( SessionDataForSpecifiedSession )
          {
            v98 = *((unsigned int *)v14 + 67);
            if ( *((_DWORD *)SessionDataForSpecifiedSession + 4623) == (_DWORD)v98 )
            {
              v98 = *((unsigned int *)v14 + 68);
              if ( *((_DWORD *)SessionDataForSpecifiedSession + 4624) == (_DWORD)v98 )
                v4 = *((_DWORD *)SessionDataForSpecifiedSession + 4625);
            }
          }
        }
        if ( (_DWORD)v5 != -1 && (unsigned int)v5 >= v4 )
        {
          v113 = WdLogNewEntry5_WdError(v98, v97);
          *(_QWORD *)(v113 + 32) = v4;
          *(_QWORD *)(v113 + 24) = v5;
          WdLogEvent5_WdError(v113);
          LODWORD(v20) = -1073741811;
LABEL_102:
          if ( v21 )
            DxgkReleaseSessionModeChangeLock();
          return (unsigned int)v20;
        }
        LODWORD(v5) = -1;
        v146 = -1;
LABEL_20:
        v27 = (unsigned __int64 *)&v129;
        v129 = -1LL;
        v28 = v5;
        v29 = &v121;
        if ( (_DWORD)v5 == -1 )
        {
          v27 = 0LL;
          v29 = 0LL;
          v28 = 0;
        }
        if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v14, v28, &v120, v144, v29, v27) < 0 )
        {
          v114 = WdLogNewEntry5_WdError(v31, v30);
          *(_QWORD *)(v114 + 32) = (unsigned int)v5;
          *(_QWORD *)(v114 + 24) = v14;
          WdLogEvent5_WdError(v114);
          LODWORD(v20) = -1073741811;
          goto LABEL_102;
        }
        v34 = (volatile signed __int64 *)v120;
        if ( !v120 )
        {
          v115 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
          *(_QWORD *)(v115 + 24) = 6110LL;
          WdLogEvent5_WdAssertion(v115);
        }
        v35 = v121;
        v36 = (_DWORD)v5 == -1;
        if ( v36 != (v121 == 0LL) )
        {
          v116 = WdLogNewEntry5_WdAssertion(v36, v30, v32, v33);
          *(_QWORD *)(v116 + 24) = 6111LL;
          WdLogEvent5_WdAssertion(v116);
        }
        v134 = (struct DXGADAPTER *)v34;
        v135 = 0;
        if ( !v35 )
          v35 = (DXGADAPTER *)v34;
        if ( v34 )
        {
          _InterlockedIncrement64(v34 + 3);
          v34 = (volatile signed __int64 *)v120;
          v133 = -1LL;
        }
        if ( v35 )
          v34 = (volatile signed __int64 *)v35;
        v138 = (struct DXGADAPTER *)v34;
        v139 = 0;
        if ( v34 )
        {
          _InterlockedIncrement64(v34 + 3);
          v137 = -1LL;
        }
        if ( _InterlockedExchangeAdd64(v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v14[2], (struct DXGADAPTER *)v14);
        v37 = v120;
        v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v39 = v120;
        if ( v38 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v120 + 2), v120);
        if ( v121 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
          v39 = v120;
        }
        else
        {
          v121 = v39;
        }
        v140[1] = v39;
        _InterlockedIncrement64((volatile signed __int64 *)v37 + 3);
        v140[0] = -1LL;
        KeEnterCriticalRegion();
        v40 = v120;
        v41 = (char *)v120 + 120;
        ExAcquirePushLockSharedEx((char *)v120 + 120, 0LL);
        v42 = *((_DWORD *)v40 + 44);
        v141 = 1;
        if ( v42 == 1 )
        {
          v43 = v120;
          *((_DWORD *)a3 + 208) = *((_DWORD *)v120 + 74);
          *((_DWORD *)a3 + 209) = *((_DWORD *)v43 + 69);
          *((_DWORD *)a3 + 210) = *((_DWORD *)v43 + 70);
          *((_DWORD *)a3 + 211) = *((_DWORD *)v43 + 71);
          *((_DWORD *)a3 + 212) = *((_DWORD *)v43 + 72);
          *((_DWORD *)a3 + 213) = *((_DWORD *)v43 + 73);
          *((_DWORD *)a3 + 409) = (*((_DWORD *)v43 + 75) & 0x80u) != 0;
          *((_DWORD *)a3 + 410) = *((_DWORD *)v43 + 62) > 1u;
          *((_DWORD *)a3 + 214) = DXGADAPTER::GetDriverVersion(v43);
          v45 = (const wchar_t *)*((_QWORD *)v43 + 152);
          if ( v45 )
          {
            RtlStringCbCopyW((NTSTRSAFE_PWSTR)a3 + 430, 0x100uLL, v45);
            v44 = 0;
          }
          else if ( a3 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-860LL )
          {
            *((_WORD *)a3 + 430) = v44;
          }
          v46 = (unsigned __int16 *)*((_QWORD *)v43 + 153);
          v47 = (_WORD *)((char *)a3 + 1116);
          v48 = 260LL;
          v49 = 260LL;
          v50 = ((unsigned __int64)*v46 >> 1) - 260;
          v51 = *((_QWORD *)v46 + 1) - ((_QWORD)a3 + 1116);
          while ( v50 + v49 )
          {
            v52 = *(_WORD *)((char *)v47 + v51);
            if ( !v52 )
              break;
            *v47++ = v52;
            if ( !--v49 )
            {
              --v47;
              break;
            }
          }
          *v47 = v44;
          ExReleasePushLockSharedEx(v41, 0LL);
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v120 + 2), v120);
          v53 = v121;
          v125 = v121;
          if ( !v121 )
          {
            v83 = a3;
            LODWORD(v20) = 0;
            goto LABEL_91;
          }
          v142[1] = v121;
          _InterlockedIncrement64((volatile signed __int64 *)v121 + 3);
          v142[0] = -1LL;
          KeEnterCriticalRegion();
          v54 = v121;
          v55 = (char *)v121 + 120;
          v128 = (char *)v121 + 120;
          ExAcquirePushLockSharedEx((char *)v121 + 120, 0LL);
          v57 = *((_DWORD *)v54 + 44);
          v143 = 1;
          if ( v57 == 1 )
          {
            v58 = v146;
            v59 = v121;
            if ( v146 == -1
              || (v60 = DXGPROCESS::GetCurrent(v56),
                  (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v60 + 9) + 224LL))(0LL)) )
            {
              v83 = a3;
              goto LABEL_77;
            }
            v65 = *((_QWORD *)v59 + 285);
            if ( v65 && v146 < *(_DWORD *)(v65 + 80) )
            {
              SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v14[285], v146, v63, v64);
              if ( SessionViewOwner )
              {
                v67 = *(_QWORD *)(*((_QWORD *)v59 + 285) + 112LL);
                v122 = 3208LL * v146;
                v68 = *(_DWORD *)(v67 + v122 + 1028);
                if ( v68 != -1 && (unsigned __int8)DmmIsTargetHMD(v59, v68) )
                  v69 = 8;
                else
                  v69 = 0;
                *((_DWORD *)a3 + 507) = v69 | *((_DWORD *)a3 + 507) & 0xFFFFFFF7;
                DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v59 + 285), v146);
                v73 = a3;
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
                  v74 = *((_QWORD *)v59 + 285);
                  DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v74 + 16));
                  v75 = *(_QWORD *)(v74 + 112);
                  v58 = v146;
                  v76 = *(_OWORD *)(v75 + v122 + 652);
                  v73 = a3;
                  *((_OWORD *)a3 + 122) = v76;
                }
                *((_DWORD *)v73 + 479) = v68;
                *((_DWORD *)a3 + 480) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v59 + 285), v58, v70, v71);
                *((_DWORD *)a3 + 481) = *(_DWORD *)DisplayModeInfo;
                *((_DWORD *)a3 + 482) = *((_DWORD *)DisplayModeInfo + 1);
                v78 = D3dPixelFormatToDisplayConfigPixelFormat(*((unsigned int *)DisplayModeInfo + 2), a3, v77);
                v79[483] = v78;
                v81 = *((_DWORD *)DisplayModeInfo + 4);
                if ( v81 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
                {
                  v79[484] = 64;
                  v79[485] = 1;
                }
                else
                {
                  v79[484] = v81;
                  v79[485] = *((_DWORD *)DisplayModeInfo + 5);
                }
                *((_DWORD *)a3 + 486) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v59 + 285), v58, 2LL, v80);
                v82 = *((_DWORD *)DisplayModeInfo + 6);
                v83 = a3;
                *((_DWORD *)a3 + 487) = v82;
                if ( (int)MonitorGetLinkInfo(v59, *((unsigned int *)a3 + 479), v130) >= 0 )
                {
                  v117 = ((*((_BYTE *)a3 + 2028) | 0x40) ^ (unsigned __int8)((_BYTE)v131 << 7)) & 0x80 ^ (*((_DWORD *)a3 + 507) | 0x40);
                  v118 = ((unsigned __int16)v117 ^ (unsigned __int16)((_WORD)v131 << 6)) & 0x100 ^ v117;
                  *((_DWORD *)a3 + 507) = v118 ^ ((unsigned __int16)v118 ^ (unsigned __int16)((_WORD)v131 << 8)) & 0x200;
                }
                else
                {
                  *((_DWORD *)a3 + 507) &= 0xFFFFFC3F;
                }
                *((_QWORD *)a3 + 246) = SessionViewOwner[8];
                if ( *((_DWORD *)SessionViewOwner + 10) != 1 )
                  goto LABEL_113;
                if ( (int)MonitorGetHDRParamsFromTarget(
                            v59,
                            v68,
                            (char *)a3 + 1984,
                            (char *)a3 + 1992,
                            (char *)a3 + 2000,
                            (char *)a3 + 2008,
                            (char *)a3 + 2016,
                            (char *)a3 + 2020,
                            (char *)a3 + 2024,
                            &v148) < 0 )
                {
                  SetDisplayInfoDefaultToSDR(a3);
                }
                else
                {
                  v84 = v148 ? 1024 : 0;
                  *((_DWORD *)a3 + 507) = v84 | *((_DWORD *)a3 + 507) & 0xFFFFFBFF;
                }
                if ( DmmGetCurrentWireFormatAndColorSpace(v59, v58, v68, &v126, &v127) >= 0 )
                {
                  ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v126);
                  v53 = v125;
                  v55 = v128;
                  *((_DWORD *)a3 + 494) = ColorDepthFromPickedWireFormat;
                  *((_DWORD *)a3 + 495) = v127;
                }
                else
                {
LABEL_113:
                  SetDisplayInfoDefaultToSDR(a3);
                  v53 = v125;
                  v55 = v128;
                }
LABEL_77:
                v86 = 1;
                LODWORD(v20) = 0;
              }
              else
              {
                v83 = a3;
                LODWORD(v20) = 0;
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
                v53 = v125;
              }
              *((_DWORD *)v83 + 5) = *((_DWORD *)v59 + 74);
              *((_DWORD *)v83 + 6) = *((_DWORD *)v59 + 69);
              *((_DWORD *)v83 + 7) = *((_DWORD *)v59 + 70);
              *((_DWORD *)v83 + 8) = *((_DWORD *)v59 + 71);
              *((_DWORD *)v83 + 9) = *((_DWORD *)v59 + 72);
              *((_DWORD *)v83 + 10) = *((_DWORD *)v59 + 73);
              if ( (*((_DWORD *)v59 + 75) & 0x80u) != 0 )
                v87 = v86;
              else
                v87 = 0;
              *((_DWORD *)v83 + 206) = v87;
              if ( *((_DWORD *)v59 + 62) <= 1u )
                v86 = 0;
              *((_DWORD *)v83 + 207) = v86;
              *((_DWORD *)v83 + 11) = DXGADAPTER::GetDriverVersion(v59);
              v88 = (const wchar_t *)*((_QWORD *)v59 + 152);
              if ( v88 )
              {
                RtlStringCbCopyW((NTSTRSAFE_PWSTR)v83 + 24, 0x100uLL, v88);
              }
              else if ( v83 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-48LL )
              {
                *((_WORD *)v83 + 24) = 0;
              }
              v89 = (unsigned __int16 *)*((_QWORD *)v59 + 153);
              v90 = (_WORD *)((char *)v83 + 304);
              v91 = ((unsigned __int64)*v89 >> 1) - 260;
              v92 = *((_QWORD *)v89 + 1) - ((_QWORD)v83 + 304);
              while ( v91 + v48 )
              {
                v93 = *(_WORD *)((char *)v90 + v92);
                if ( !v93 )
                  break;
                *v90++ = v93;
                if ( !--v48 )
                {
                  --v90;
                  break;
                }
              }
              *v90 = 0;
              ExReleasePushLockSharedEx(v55, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
LABEL_91:
              *((_WORD *)v83 + 153) = 92;
              *((_WORD *)v83 + 559) = 92;
LABEL_92:
              v94 = v138;
              if ( v138 )
              {
                if ( v139 )
                {
                  COREACCESS::Release((COREACCESS *)v136);
                  v94 = v138;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v94 + 2), v94);
              }
              v95 = v134;
              if ( v134 )
              {
                if ( v135 )
                {
                  COREACCESS::Release((COREACCESS *)v132);
                  v95 = v134;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v95 + 2), v95);
              }
              goto LABEL_102;
            }
            v119 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
            v119[3] = v146;
            LODWORD(v20) = -1073741811;
            v119[5] = -1073741811LL;
            v119[4] = v14;
            WdLogEvent5_WdError(v119);
          }
          else
          {
            LODWORD(v20) = -1073741130;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v142);
          goto LABEL_92;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
        LODWORD(v20) = -1073741130;
        goto LABEL_92;
      }
    }
  }
  if ( v124 )
  {
    v124 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v123, (__int64)v13, v12, v11);
  }
  v106 = WdLogNewEntry5_WdError(v10, v13);
  *(_QWORD *)(v106 + 32) = LowPart;
  *(_QWORD *)(v106 + 24) = HighPart;
  WdLogEvent5_WdError(v106);
  return -1073741811LL;
}
