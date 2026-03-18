/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009EEA0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C01B0080 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0014C0C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C009F444 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00AAB1C (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00AD1BC (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00E0EE8 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E1408 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E2618 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E26D8 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E30C0 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01AEE2C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4)
{
  struct DXGADAPTER *v4; // r12
  int v5; // ebx
  int PairingAdapters; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _LUID v10; // rbx
  struct _LUID v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  int v16; // eax
  __int64 v17; // rdi
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v19; // rcx
  SESSION_VIEW *v20; // r13
  struct DISPLAY_SOURCE *i; // rax
  __int64 v22; // rcx
  struct DISPLAY_SOURCE *v23; // rdi
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  unsigned __int8 v36; // si
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v38; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v39; // r15
  UINT Width; // r11d
  int v41; // edx
  int v42; // r10d
  int v43; // r8d
  __int128 v44; // xmm0
  int v45; // r9d
  bool v46; // zf
  int v47; // r12d
  signed int v48; // esi
  signed int v49; // r12d
  int v50; // r8d
  INT X; // eax
  int v52; // r9d
  int v53; // eax
  int v54; // r10d
  INT v55; // r8d
  int v56; // r9d
  INT v57; // edx
  int v58; // r10d
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rcx
  int v76; // edx
  int v77; // edx
  _QWORD *v78; // rcx
  const void *pPixels; // rax
  _QWORD *v80; // rax
  INT v81; // eax
  __int64 v82; // rax
  int v83; // r8d
  UINT v84; // edx
  __int64 v85; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rsi
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rsi
  _QWORD *v90; // rax
  int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rsi
  _QWORD *v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rcx
  __int64 v97; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v99; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v100; // [rsp+28h] [rbp-D8h]
  __int64 v101; // [rsp+30h] [rbp-D0h]
  __int64 v102; // [rsp+38h] [rbp-C8h]
  char v103; // [rsp+40h] [rbp-C0h] BYREF
  char v104; // [rsp+41h] [rbp-BFh]
  char v105; // [rsp+42h] [rbp-BEh]
  int v106; // [rsp+44h] [rbp-BCh]
  int v107; // [rsp+48h] [rbp-B8h]
  int v108; // [rsp+4Ch] [rbp-B4h]
  int CurrentOrientation; // [rsp+50h] [rbp-B0h]
  INT v110; // [rsp+54h] [rbp-ACh]
  struct _LUID v111; // [rsp+58h] [rbp-A8h] BYREF
  char v112[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v113; // [rsp+68h] [rbp-98h]
  unsigned __int64 v114; // [rsp+70h] [rbp-90h] BYREF
  int v115; // [rsp+78h] [rbp-88h]
  struct DXGADAPTER *v116; // [rsp+80h] [rbp-80h]
  __int128 v117; // [rsp+88h] [rbp-78h]
  int v118; // [rsp+98h] [rbp-68h] BYREF
  __int64 v119; // [rsp+A0h] [rbp-60h]
  _BYTE v120[20]; // [rsp+A8h] [rbp-58h] BYREF
  int v121; // [rsp+BCh] [rbp-44h]
  char v122[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v123[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v124[40]; // [rsp+E8h] [rbp-18h] BYREF
  _DXGKARG_SETPOINTERPOSITION v125; // [rsp+110h] [rbp+10h] BYREF

  v119 = 0LL;
  v4 = a1;
  v116 = a1;
  v115 = a4;
  v5 = a3;
  v118 = 3011;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(2LL, &EventProfilerEnter, a3, 3011);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v118, 3011);
  if ( a2 )
  {
    if ( v5 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_63:
      LODWORD(v17) = 0;
    }
    else
    {
      PairingAdapters = DxgkpGetPairingAdapters(v4, a2->VidPnSourceId, 0LL, 0LL, (struct DXGADAPTER **)&v111, &v114);
      v9 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v64[3] = v4;
        v64[4] = a2->VidPnSourceId;
        v64[5] = v9;
        WdLogEvent5_WdEvent(v64);
        LODWORD(v17) = v9;
      }
      else
      {
        v10 = v111;
        if ( !*(_QWORD *)&v111 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v65 + 24) = 1770LL;
          WdLogEvent5_WdAssertion(v65);
        }
        if ( !*(_QWORD *)(*(_QWORD *)&v10 + 2456LL) )
        {
          v66 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v66 + 24) = 1771LL;
          WdLogEvent5_WdAssertion(v66);
        }
        v111 = *(struct _LUID *)(*(_QWORD *)&v10 + 268LL);
        v11 = v111;
        DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)&v10);
        SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 74);
        if ( SessionDataForSpecifiedSession )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             SessionDataForSpecifiedSession,
                                             CurrentProcessSessionId);
        }
        if ( SessionDataForSpecifiedSession )
        {
          v103 = 0;
          v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103, 0);
          v17 = v16;
          if ( v16 < 0 )
          {
            v69 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v69 + 24) = v17;
            WdLogEvent5_WdEvent(v69);
          }
          else
          {
            SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                      SessionDataForSpecifiedSession,
                                      &v111,
                                      a2->VidPnSourceId);
            v20 = SessionViewFromSource;
            if ( SessionViewFromSource )
            {
              for ( i = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
                    ;
                    i = SESSION_VIEW::GetNextDisplaySource(v20, v23) )
              {
                v23 = i;
                if ( !i )
                {
                  if ( v103 )
                    DxgkReleaseSessionModeChangeLock();
                  goto LABEL_63;
                }
                v24 = *(_QWORD *)(*((_QWORD *)i + 1) + 16LL);
                if ( !v24 )
                {
                  v72 = WdLogNewEntry5_WdAssertion(v22);
                  *(_QWORD *)(v72 + 24) = 1819LL;
                  WdLogEvent5_WdAssertion(v72);
                }
                if ( !*(_QWORD *)(v24 + 2456) )
                {
                  v73 = WdLogNewEntry5_WdAssertion(v22);
                  *(_QWORD *)(v73 + 24) = 1820LL;
                  WdLogEvent5_WdAssertion(v73);
                }
                v125 = *a2;
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v122, (struct DXGADAPTER *const)v24, 0LL);
                v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v122);
                v27 = v25;
                if ( v25 < 0 )
                {
                  v74 = (_QWORD *)WdLogNewEntry5_WdError(v26);
                  v74[3] = *(int *)(v24 + 272);
                  v74[4] = *(unsigned int *)(v24 + 268);
                  v74[5] = v27;
                  WdLogEvent5_WdError(v74);
                  goto LABEL_60;
                }
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)v112,
                  (struct DXGFASTMUTEX *const)(*(_QWORD *)(v24 + 2456) + 280LL),
                  0);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v112);
                if ( v115 )
                {
                  v75 = *((unsigned int *)v23 + 937);
                  if ( *(_QWORD *)((char *)v23 + 3748) == -1LL
                    || (v76 = v75 + a2->X, v76 < *((_DWORD *)v20 + 6))
                    || v76 >= *((_DWORD *)v20 + 8)
                    || (v77 = *((_DWORD *)v23 + 938) + a2->Y, v77 < *((_DWORD *)v20 + 7))
                    || v77 >= *((_DWORD *)v20 + 9) )
                  {
                    v78 = (_QWORD *)WdLogNewEntry5_WdError(v75);
                    v78[3] = *(int *)(v24 + 272);
                    v78[4] = *(unsigned int *)(v24 + 268);
                    pPixels = (const void *)*((unsigned int *)v23 + 4);
LABEL_103:
                    v78[5] = pPixels;
                    WdLogEvent5_WdError(v78);
                    if ( v113 )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v112);
                    COREACCESS::~COREACCESS((COREACCESS *)v124);
                    COREACCESS::~COREACCESS((COREACCESS *)v123);
                    LODWORD(v17) = -1073741811;
                    goto LABEL_106;
                  }
                }
                if ( (*(_DWORD *)(v24 + 300) & 0x100) != 0 || (*(_DWORD *)(v24 + 4044) & 8) == 0 )
                  break;
LABEL_58:
                if ( v113 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v112);
LABEL_60:
                COREACCESS::~COREACCESS((COREACCESS *)v124);
                COREACCESS::~COREACCESS((COREACCESS *)v123);
              }
              v125.VidPnSourceId = *((_DWORD *)v23 + 4);
              if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v24 + 2456), *((_DWORD *)v23 + 4)) )
              {
                v96 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
                v96[3] = -1073741823LL;
                v96[4] = v125.VidPnSourceId;
                v97 = *(_BYTE *)&v125.Flags.0 & 1;
                v96[6] = v4;
                v96[5] = v97;
LABEL_56:
                ADAPTER_DISPLAY::SavePointerInfo(
                  *(ADAPTER_DISPLAY **)(v24 + 2456),
                  v125.VidPnSourceId,
                  *(_BYTE *)&v125.Flags.0 & 1,
                  v125.X,
                  v125.Y,
                  a2->X,
                  a2->Y);
                if ( v23 == SESSION_VIEW::GetPrimaryDisplaySource(v20) )
                {
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v112);
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v122);
                  v100 = (unsigned __int64 *)lambda_eb72620180147af09faaee397ad33fb2_::_lambda_invoker_cdecl_;
                  HIDWORD(v99) = HIDWORD(a2);
                  OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
                    v24,
                    v60,
                    a2->VidPnSourceId);
                }
                goto LABEL_58;
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v102) = v125.Flags.0;
                LODWORD(v101) = v125.Y;
                LODWORD(v100) = v125.X;
                LODWORD(v99) = v125.VidPnSourceId;
                McTemplateK0pqqqq(v29, &EventSetPointerPosition, v30, v4, v99, v100, v101, v102);
              }
              v32 = *((_DWORD *)v23 + 267);
              v104 = 1;
              v105 = 1;
              v33 = IsVirtualizationDisabledForTarget((DXGADAPTER *)v24, v32);
              v35 = v33;
              if ( v33 < 0 )
              {
                v80 = (_QWORD *)WdLogNewEntry5_WdError(v34);
                v80[3] = *((unsigned int *)v23 + 4);
                v80[4] = *(int *)(v24 + 272);
                v80[5] = *(unsigned int *)(v24 + 268);
                v80[6] = v35;
                WdLogEvent5_WdError(v80);
              }
              v36 = v104;
              if ( v104 && v105 || (*(_BYTE *)&v125.Flags.0 & 1) == 0 )
              {
LABEL_54:
                if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v24 + 2456), &v125) < 0 )
                {
                  v95 = WdLogNewEntry5_WdAssertion(v59);
                  *(_QWORD *)(v95 + 24) = 1998LL;
                  WdLogEvent5_WdAssertion(v95);
                }
                goto LABEL_56;
              }
              CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                     *((_QWORD *)v23 + 1),
                                     *((unsigned int *)v23 + 4),
                                     v104 != 0);
              SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v23, 0);
              v39 = SavedCursor;
              if ( !SavedCursor->pPixels
                || (Width = SavedCursor->Width, Width > *(_DWORD *)(v24 + 1792))
                || SavedCursor->Height > *(_DWORD *)(v24 + 1796) )
              {
                v78 = (_QWORD *)WdLogNewEntry5_WdError(v38);
                v78[3] = v39->Width;
                v78[4] = v39->Height;
                pPixels = v39->pPixels;
                goto LABEL_103;
              }
              v41 = *((_DWORD *)v23 + 165) - *((_DWORD *)v23 + 163);
              v42 = *((_DWORD *)v23 + 166) - *((_DWORD *)v23 + 164);
              v43 = *((_DWORD *)v20 + 9) - *((_DWORD *)v20 + 7);
              v44 = *(_OWORD *)((char *)v23 + 652);
              v45 = *((_DWORD *)v20 + 8) - *((_DWORD *)v20 + 6);
              v46 = *((_BYTE *)v23 + 668) == 0;
              v47 = *((_DWORD *)v23 + 168);
              v110 = *((_DWORD *)v23 + 169);
              LODWORD(v114) = v47;
              v111.LowPart = v36;
              v117 = v44;
              v106 = v41;
              v107 = v42;
              v108 = v43;
              if ( v46 )
              {
                v48 = DWORD1(v117);
                v49 = v117;
                v110 = HIDWORD(v117);
                LODWORD(v114) = DWORD2(v117);
              }
              else
              {
                v42 = v110;
                v41 = v47;
                v49 = 0;
                v106 = v41;
                v48 = 0;
                v107 = v110;
              }
              v50 = CurrentOrientation;
              X = a2->X;
              if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
              {
                v52 = v42 * X / v45;
                v53 = v106 * a2->Y;
              }
              else
              {
                v52 = v41 * X / v45;
                v53 = v42 * a2->Y;
              }
              CurrentOrientation = v52;
              v54 = v53 / v108;
              v108 = v53 / v108;
              if ( v111.LowPart )
              {
                v125.X = v52 + v49;
                v81 = v54 + v48;
                goto LABEL_90;
              }
              switch ( v50 )
              {
                case 2:
                  v55 = v54 + v49;
                  v125.X = v54 + v49;
                  v84 = v48 - v39->Height - v52;
                  break;
                case 3:
                  v55 = v106 + v49 - v52 - Width;
                  v125.X = v55;
                  v84 = v48 - v39->Height - v54;
                  break;
                case 4:
                  v57 = v52 + v48;
                  v56 = v107;
                  v83 = v49 - v54;
                  v58 = v106;
                  v55 = v106 + v83 - Width;
                  v125.X = v55;
LABEL_47:
                  v125.Y = v57;
                  if ( (signed int)(v55 + v39->Width) >= v49
                    && v55 <= (int)v114
                    && (signed int)(v57 + v39->Height) >= v48
                    && v57 <= v110 )
                  {
                    goto LABEL_51;
                  }
                  v125.X = v49 + v58 / 2;
                  v81 = v48 + v56 / 2;
LABEL_90:
                  v125.Y = v81;
LABEL_51:
                  FillClipParams(v39, v23, &v125, (struct CURSOR_CLIP_PARAMS *)v120);
                  if ( v121 )
                  {
                    ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v23, 0);
                    if ( !ClippedCursor->pPixels
                      || ClippedCursor->Width > *(_DWORD *)(v24 + 1792)
                      || ClippedCursor->Height > *(_DWORD *)(v24 + 1796) )
                    {
                      v78 = (_QWORD *)WdLogNewEntry5_WdError(v85);
                      v78[3] = ClippedCursor->Width;
                      v78[4] = ClippedCursor->Height;
                      pPixels = ClippedCursor->pPixels;
                      goto LABEL_103;
                    }
                    ClipCurrentCursor(v39, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v120);
                    ClippedCursor->VidPnSourceId = *((_DWORD *)v23 + 4);
                    v87 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v24 + 2456), ClippedCursor);
                    v89 = v87;
                    if ( v87 < 0 )
                    {
                      v90 = (_QWORD *)WdLogNewEntry5_WdError(v88);
                      v90[3] = *((unsigned int *)v23 + 4);
                      v90[4] = *(int *)(v24 + 272);
                      v90[5] = *(unsigned int *)(v24 + 268);
                      v90[6] = v89;
                      WdLogEvent5_WdError(v90);
                    }
                    *((_BYTE *)v23 + 726) = 1;
                  }
                  else if ( *((_BYTE *)v23 + 726) )
                  {
                    v91 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v24 + 2456), v39);
                    v93 = v91;
                    if ( v91 < 0 )
                    {
                      v94 = (_QWORD *)WdLogNewEntry5_WdError(v92);
                      v94[3] = *((unsigned int *)v23 + 4);
                      v94[4] = *(int *)(v24 + 272);
                      v94[5] = *(unsigned int *)(v24 + 268);
                      v94[6] = v93;
                      WdLogEvent5_WdError(v94);
                    }
                    *((_BYTE *)v23 + 726) = 0;
                  }
                  v4 = v116;
                  goto LABEL_54;
                default:
                  if ( v50 != 1 )
                  {
                    v82 = WdLogNewEntry5_WdAssertion((unsigned int)(v50 - 3));
                    *(_QWORD *)(v82 + 24) = 666LL;
                    WdLogEvent5_WdAssertion(v82);
                  }
                  v55 = v49 + CurrentOrientation;
                  v56 = v107;
                  v57 = v48 + v108;
                  v125.X = v49 + CurrentOrientation;
LABEL_46:
                  v58 = v106;
                  goto LABEL_47;
              }
              v56 = v107;
              v57 = v107 + v84;
              goto LABEL_46;
            }
            v70 = (_QWORD *)WdLogNewEntry5_WdError(v19);
            v70[3] = a2->VidPnSourceId;
            v70[4] = v11.HighPart;
            v70[5] = v11.LowPart;
            LODWORD(v17) = -1073741811;
            v70[6] = (unsigned int)PsGetCurrentProcessSessionId(v71);
            v70[7] = -1073741811LL;
            WdLogEvent5_WdError(v70);
          }
LABEL_106:
          if ( v103 )
            DxgkReleaseSessionModeChangeLock();
        }
        else
        {
          v67 = WdLogNewEntry5_WdError(v13);
          LODWORD(v17) = -1073741811;
          *(_QWORD *)(v67 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v68);
          *(_QWORD *)(v67 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v67);
        }
      }
    }
  }
  else
  {
    LODWORD(v17) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v61, &EventProfilerExit, v62, v118);
  return (unsigned int)v17;
}
