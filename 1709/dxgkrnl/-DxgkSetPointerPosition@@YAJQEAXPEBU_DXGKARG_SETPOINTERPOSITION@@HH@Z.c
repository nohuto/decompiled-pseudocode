/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00B8B90 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C01B4390 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0007A8C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0090A10 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00AABA4 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00AB678 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00AF3E0 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00AF4A0 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00B53F8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00B8A30 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01B313C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4)
{
  int v4; // ebx
  struct DXGADAPTER *v6; // r13
  int PairingAdapters; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  SESSION_VIEW *v10; // rdi
  struct _LUID v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r14
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v20; // rcx
  SESSION_VIEW *v21; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  bool v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rcx
  struct _FAST_MUTEX *v35; // rcx
  int MonitorInstance; // eax
  struct _LUID v37; // r15
  int v38; // ebx
  bool v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rdx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v44; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v45; // r15
  UINT Width; // r11d
  int v47; // edx
  int v48; // r9d
  int v49; // r10d
  __int128 v50; // xmm0
  char v51; // cl
  int v52; // r8d
  DWORD v53; // r13d
  int v54; // ebx
  signed int v55; // ebx
  signed int v56; // r13d
  int v57; // r8d
  INT X; // eax
  int v59; // r9d
  int v60; // eax
  int v61; // r10d
  INT v62; // r8d
  signed int v63; // r9d
  INT v64; // edx
  int v65; // r10d
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rax
  _QWORD *v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  int v81; // edx
  _QWORD *v82; // rcx
  const void *pPixels; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  INT v93; // eax
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  __int64 v97; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rbx
  __int64 v99; // r8
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rbx
  _QWORD *v103; // rax
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rbx
  _QWORD *v107; // rax
  __int64 v108; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v110; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v111; // [rsp+28h] [rbp-D8h]
  __int64 v112; // [rsp+30h] [rbp-D0h]
  __int64 v113; // [rsp+38h] [rbp-C8h]
  unsigned __int8 IsVirtualModeSuportDisabled; // [rsp+40h] [rbp-C0h]
  char v115; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v116; // [rsp+42h] [rbp-BEh] BYREF
  char v117; // [rsp+43h] [rbp-BDh]
  int v118; // [rsp+44h] [rbp-BCh]
  DWORD v119; // [rsp+48h] [rbp-B8h]
  int CurrentOrientation; // [rsp+4Ch] [rbp-B4h]
  int v121; // [rsp+50h] [rbp-B0h]
  struct _LUID v122; // [rsp+58h] [rbp-A8h] BYREF
  INT v123; // [rsp+60h] [rbp-A0h]
  SESSION_VIEW *v124; // [rsp+68h] [rbp-98h] BYREF
  char v125[8]; // [rsp+70h] [rbp-90h] BYREF
  char v126; // [rsp+78h] [rbp-88h]
  int v127; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v128; // [rsp+88h] [rbp-78h]
  __int128 v129; // [rsp+90h] [rbp-70h]
  char v130[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v131[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v132[40]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v133[20]; // [rsp+F0h] [rbp-10h] BYREF
  int v134; // [rsp+104h] [rbp+4h]
  struct _DXGKARG_SETPOINTERPOSITION v135; // [rsp+108h] [rbp+8h] BYREF

  v127 = a4;
  v4 = a3;
  v128 = a1;
  v6 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3011);
  if ( !a2 )
  {
    LODWORD(v18) = -1073741811;
    goto LABEL_65;
  }
  if ( v4 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1);
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2, a3);
    goto LABEL_64;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v6, a2->VidPnSourceId, 0LL, 0LL, &v124, (unsigned __int64 *)&v122);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v69[3] = v6;
    v69[4] = a2->VidPnSourceId;
    v69[5] = v9;
    WdLogEvent5_WdEvent(v69);
    LODWORD(v18) = v9;
    goto LABEL_65;
  }
  v10 = v124;
  if ( !v124 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v70 + 24) = 1770LL;
    WdLogEvent5_WdAssertion(v70);
  }
  if ( !*((_QWORD *)v10 + 288) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v71 + 24) = 1771LL;
    WdLogEvent5_WdAssertion(v71);
  }
  v11 = *(struct _LUID *)((char *)v10 + 268);
  v122 = v11;
  DXGADAPTER::ReleaseReferenceNoTracking(v10);
  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId,
                                       v16);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v72 = WdLogNewEntry5_WdError(v13);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v72 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v73);
    *(_QWORD *)(v72 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    goto LABEL_65;
  }
  v116 = 0;
  v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v116, 0);
  v18 = v17;
  if ( v17 < 0 )
  {
    v74 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v74 + 24) = v18;
    WdLogEvent5_WdEvent(v74);
    goto LABEL_139;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v122,
                            a2->VidPnSourceId);
  v124 = (SESSION_VIEW *)SessionViewFromSource;
  v21 = (SESSION_VIEW *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v75[3] = a2->VidPnSourceId;
    v75[4] = v122.HighPart;
    v75[5] = v11.LowPart;
    LODWORD(v18) = -1073741811;
    v75[6] = (unsigned int)PsGetCurrentProcessSessionId(v76);
    v75[7] = -1073741811LL;
    WdLogEvent5_WdError(v75);
    goto LABEL_139;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
LABEL_62:
    if ( v116 )
      DxgkReleaseSessionModeChangeLock((__int64)a1);
LABEL_64:
    LODWORD(v18) = 0;
    goto LABEL_65;
  }
  LODWORD(v18) = -1073741811;
  IsVirtualModeSuportDisabled = v116;
  while ( 1 )
  {
    v23 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v23 )
    {
      v77 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v77 + 24) = 1819LL;
      WdLogEvent5_WdAssertion(v77);
    }
    if ( !*(_QWORD *)(v23 + 2304) )
    {
      v78 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v78 + 24) = 1820LL;
      WdLogEvent5_WdAssertion(v78);
    }
    v135 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v130, (struct DXGADAPTER *const)v23, 0LL);
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v130);
    v26 = v24;
    if ( v24 >= 0 )
      break;
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v79[3] = *(int *)(v23 + 272);
    v79[4] = *(unsigned int *)(v23 + 268);
    v79[5] = v26;
    WdLogEvent5_WdError(v79);
LABEL_61:
    COREACCESS::~COREACCESS((COREACCESS *)v132);
    COREACCESS::~COREACCESS((COREACCESS *)v131);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v21, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
      goto LABEL_62;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v125, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v23 + 2304) + 280LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v125);
  if ( v127 )
  {
    v80 = *((unsigned int *)PrimaryDisplaySource + 937);
    if ( *(_QWORD *)((char *)PrimaryDisplaySource + 3748) == -1LL
      || (v80 = (unsigned int)(a2->X + v80), (int)v80 < *((_DWORD *)v21 + 6))
      || (int)v80 >= *((_DWORD *)v21 + 8)
      || (v81 = *((_DWORD *)PrimaryDisplaySource + 938) + a2->Y, v81 < *((_DWORD *)v21 + 7))
      || v81 >= *((_DWORD *)v21 + 9) )
    {
      v82 = (_QWORD *)WdLogNewEntry5_WdError(v80);
      v82[3] = *(int *)(v23 + 272);
      v82[4] = *(unsigned int *)(v23 + 268);
      pPixels = (const void *)*((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_136;
    }
  }
  if ( (*(_DWORD *)(v23 + 300) & 0x100) == 0 && (*(_DWORD *)(v23 + 3884) & 8) != 0 )
  {
LABEL_59:
    if ( v126 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v125);
    goto LABEL_61;
  }
  v135.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v23 + 2304), *((_DWORD *)PrimaryDisplaySource + 4)) )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
    v67[3] = -1073741823LL;
    v67[4] = v135.VidPnSourceId;
    v68 = *(_BYTE *)&v135.Flags.0 & 1;
    v67[6] = v6;
    v67[5] = v68;
LABEL_57:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v23 + 2304),
      v135.VidPnSourceId,
      *(_BYTE *)&v135.Flags.0 & 1,
      v135.X,
      v135.Y,
      a2->X,
      a2->Y);
    if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v21) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v125);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v130);
      v111 = (unsigned __int64 *)lambda_eb72620180147af09faaee397ad33fb2_::_lambda_invoker_cdecl_;
      HIDWORD(v110) = HIDWORD(a2);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        v23,
        v41,
        a2->VidPnSourceId);
    }
    goto LABEL_59;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v113) = v135.Flags.0;
    LODWORD(v112) = v135.Y;
    LODWORD(v111) = v135.X;
    LODWORD(v110) = v135.VidPnSourceId;
    McTemplateK0pqqqq(v28, &EventSetPointerPosition, v29, v6, v110, v111, v112, v113);
  }
  v30 = *((unsigned int *)PrimaryDisplaySource + 267);
  v31 = 1;
  v115 = 1;
  v117 = 1;
  if ( (_DWORD)v30 == -1 )
  {
    v38 = -1073741811;
    goto LABEL_113;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v23) )
  {
    v84 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v84 + 24) = 7392LL;
    WdLogEvent5_WdAssertion(v84);
  }
  v33 = *(_QWORD *)(v23 + 2304);
  if ( v33 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v23) )
    {
      v87 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v87);
    }
    if ( !*(_QWORD *)(v23 + 2304) )
    {
      v88 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v88);
    }
    v35 = *(struct _FAST_MUTEX **)(*(_QWORD *)(v23 + 2304) + 96LL);
    if ( v35 )
    {
      v122 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v35, v30, 1, (ULONG **)&v122);
      if ( MonitorInstance == -1073741275 )
      {
        v66 = WdLogNewEntry5_WdDmmEvent(v28);
        *(_QWORD *)(v66 + 24) = v30;
        *(_QWORD *)(v66 + 32) = v23;
        WdLogEvent5_WdDmmEvent(v66);
        MonitorInstance = -1073741632;
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v37 = v122;
          if ( !*(_QWORD *)&v122 || *(_DWORD *)(*(_QWORD *)&v122 + 416LL) != 1 )
          {
            v90 = WdLogNewEntry5_WdAssertion(v28);
            WdLogEvent5_WdAssertion(v90);
          }
          if ( !*(_QWORD *)&v37 )
          {
            v91 = WdLogNewEntry5_WdAssertion(v28);
            WdLogEvent5_WdAssertion(v91);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v37 + 280LL), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(*(DXGMONITOR **)&v37);
          ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v37 + 280LL));
          KeLeaveCriticalRegion();
          v31 = 1;
          MonitorInstance = 0;
        }
        if ( MonitorInstance != -1073741632 )
          goto LABEL_45;
      }
      LOBYTE(v28) = 0;
      IsVirtualModeSuportDisabled = 0;
      goto LABEL_46;
    }
    v89 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v89 + 24) = v23;
    WdLogEvent5_WdError(v89);
    MonitorInstance = -1073741811;
LABEL_45:
    LOBYTE(v28) = IsVirtualModeSuportDisabled;
LABEL_46:
    v38 = 0;
    if ( MonitorInstance != -1073741632 )
      v38 = MonitorInstance;
    if ( v38 >= 0 )
    {
      if ( (_BYTE)v28 )
      {
        v31 = 1;
        v115 = 1;
        v39 = 1;
      }
      else
      {
        v31 = *(_BYTE *)(v33 + 132) == 0;
        v115 = v31;
        v39 = *(_BYTE *)(v33 + 133) == 0;
      }
LABEL_51:
      if ( v38 >= 0 )
        goto LABEL_52;
      goto LABEL_107;
    }
    v92 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v92 + 24) = v38;
    WdLogEvent5_WdAssertion(v92);
LABEL_113:
    v39 = v117;
    goto LABEL_51;
  }
  v85 = WdLogNewEntry5_WdError(v32);
  *(_QWORD *)(v85 + 24) = 7397LL;
  WdLogEvent5_WdError(v85);
  v39 = v117;
  v38 = -1073741811;
LABEL_107:
  v86 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v86[3] = *((unsigned int *)PrimaryDisplaySource + 4);
  v86[4] = *(int *)(v23 + 272);
  v86[5] = *(unsigned int *)(v23 + 268);
  v86[6] = v38;
  WdLogEvent5_WdError(v86);
LABEL_52:
  if ( v31 && v39 || (*(_BYTE *)&v135.Flags.0 & 1) == 0 )
  {
LABEL_54:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v23 + 2304), &v135, v29) < 0 )
    {
      v108 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v108 + 24) = 1998LL;
      WdLogEvent5_WdAssertion(v108);
    }
    v6 = v128;
    v21 = v124;
    goto LABEL_57;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                         *((_QWORD *)PrimaryDisplaySource + 1),
                         *((_DWORD *)PrimaryDisplaySource + 4),
                         v31);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource, 0);
  v45 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v23 + 1656) && SavedCursor->Height <= *(_DWORD *)(v23 + 1660) )
    {
      v47 = *((_DWORD *)PrimaryDisplaySource + 165) - *((_DWORD *)PrimaryDisplaySource + 163);
      v48 = *((_DWORD *)v124 + 8) - *((_DWORD *)v124 + 6);
      v49 = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
      v50 = *(_OWORD *)((char *)PrimaryDisplaySource + 652);
      v51 = *((_BYTE *)PrimaryDisplaySource + 668);
      v52 = *((_DWORD *)v124 + 9) - *((_DWORD *)v124 + 7);
      v53 = *((_DWORD *)PrimaryDisplaySource + 169);
      v54 = *((_DWORD *)PrimaryDisplaySource + 168);
      v122.LowPart = v53;
      v123 = v54;
      v118 = v47;
      v119 = v49;
      v121 = v52;
      v129 = v50;
      if ( v51 )
      {
        v49 = v53;
        v119 = v53;
        v56 = 0;
        v118 = v54;
        v47 = v54;
        v55 = 0;
      }
      else
      {
        v55 = DWORD1(v129);
        v56 = v129;
        v122.LowPart = HIDWORD(v129);
        v123 = DWORD2(v129);
      }
      v57 = CurrentOrientation;
      X = a2->X;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v59 = v49 * X / v48;
        v60 = v118 * a2->Y;
      }
      else
      {
        v59 = v47 * X / v48;
        v60 = v49 * a2->Y;
      }
      CurrentOrientation = v59;
      v61 = v60 / v121;
      v121 = v60 / v121;
      if ( v115 )
      {
        v135.X = v59 + v56;
        v93 = v61 + v55;
        goto LABEL_124;
      }
      switch ( v57 )
      {
        case 2:
          v62 = v61 + v56;
          v96 = v55 - v59;
          break;
        case 3:
          v62 = v118 + v56 - v59 - Width;
          v96 = v55 - v61;
          break;
        case 4:
          v64 = v59 + v55;
          v63 = v119;
          v95 = v56 - v61;
          v65 = v118;
          v62 = v118 + v95 - Width;
          v135.X = v62;
LABEL_82:
          v135.Y = v64;
          if ( (signed int)(v62 + v45->Width) >= v56
            && v62 <= v123
            && (signed int)(v64 + v45->Height) >= v55
            && v64 <= (int)v122.LowPart )
          {
LABEL_86:
            FillClipParams(v45, PrimaryDisplaySource, &v135, (struct CURSOR_CLIP_PARAMS *)v133);
            if ( v134 )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource, 0);
              if ( !ClippedCursor->pPixels
                || ClippedCursor->Width > *(_DWORD *)(v23 + 1656)
                || ClippedCursor->Height > *(_DWORD *)(v23 + 1660) )
              {
                v82 = (_QWORD *)WdLogNewEntry5_WdError(v97);
                v82[3] = ClippedCursor->Width;
                v82[4] = ClippedCursor->Height;
                pPixels = ClippedCursor->pPixels;
                goto LABEL_136;
              }
              ClipCurrentCursor(v45, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v133);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v100 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v23 + 2304), ClippedCursor, v99);
              v102 = v100;
              if ( v100 < 0 )
              {
                v103 = (_QWORD *)WdLogNewEntry5_WdError(v101);
                v103[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v103[4] = *(int *)(v23 + 272);
                v103[5] = *(unsigned int *)(v23 + 268);
                v103[6] = v102;
                WdLogEvent5_WdError(v103);
              }
              *((_BYTE *)PrimaryDisplaySource + 725) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 725) )
            {
              v104 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v23 + 2304), v45, v29);
              v106 = v104;
              if ( v104 < 0 )
              {
                v107 = (_QWORD *)WdLogNewEntry5_WdError(v105);
                v107[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v107[4] = *(int *)(v23 + 272);
                v107[5] = *(unsigned int *)(v23 + 268);
                v107[6] = v106;
                WdLogEvent5_WdError(v107);
              }
              *((_BYTE *)PrimaryDisplaySource + 725) = 0;
            }
            goto LABEL_54;
          }
          v135.X = v56 + v65 / 2;
          v93 = v55 + v63 / 2;
LABEL_124:
          v135.Y = v93;
          goto LABEL_86;
        default:
          if ( v57 != 1 )
          {
            v94 = WdLogNewEntry5_WdAssertion((unsigned int)(v57 - 3));
            *(_QWORD *)(v94 + 24) = 666LL;
            WdLogEvent5_WdAssertion(v94);
          }
          v62 = v56 + CurrentOrientation;
          v63 = v119;
          v64 = v55 + v121;
          v135.X = v56 + CurrentOrientation;
LABEL_81:
          v65 = v118;
          goto LABEL_82;
      }
      v63 = v119;
      v135.X = v62;
      v64 = v119 + v96 - v45->Height;
      goto LABEL_81;
    }
  }
  v82 = (_QWORD *)WdLogNewEntry5_WdError(v44);
  v82[3] = v45->Width;
  v82[4] = v45->Height;
  pPixels = v45->pPixels;
LABEL_136:
  v82[5] = pPixels;
  WdLogEvent5_WdError(v82);
  if ( v126 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v125);
  COREACCESS::~COREACCESS((COREACCESS *)v132);
  COREACCESS::~COREACCESS((COREACCESS *)v131);
LABEL_139:
  if ( v116 )
    DxgkReleaseSessionModeChangeLock((__int64)a1);
LABEL_65:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerExit, a3, 3011);
  return (unsigned int)v18;
}
