/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E820 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C019D9F0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C000AD3C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C009ED80 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C009EEE0 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00DE0E0 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00E5A14 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E61C8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E9590 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E9650 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C019C694 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r14
  __int64 v4; // rcx
  int v5; // ebx
  int PairingAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  DXGADAPTER *v13; // rdi
  struct _LUID v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v20; // eax
  __int64 v21; // rsi
  DXGADAPTER *SessionViewFromSource; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DXGADAPTER *v25; // r12
  struct DISPLAY_SOURCE *i; // rax
  __int64 v27; // rdx
  __int64 v28; // r9
  struct DISPLAY_SOURCE *v29; // rdi
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned __int8 v49; // si
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  int CurrentOrientation; // r13d
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v60; // r14
  UINT Width; // r11d
  int v62; // r10d
  __int64 v63; // r8
  int v64; // edx
  __int128 v65; // xmm0
  char v66; // cl
  int v67; // r9d
  signed int v68; // esi
  signed int v69; // r12d
  INT X; // eax
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // rdx
  int v74; // r10d
  INT v75; // r8d
  int v76; // r9d
  INT v77; // edx
  int v78; // r11d
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rax
  _QWORD *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  INT v89; // eax
  __int64 v90; // rax
  UINT v91; // r8d
  UINT v92; // r8d
  int v93; // r8d
  int v94; // edx
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rsi
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rsi
  _QWORD *v102; // rax
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rsi
  _QWORD *v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rcx
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  _QWORD *v115; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v117; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v118; // [rsp+28h] [rbp-D8h]
  __int64 v119; // [rsp+30h] [rbp-D0h]
  __int64 v120; // [rsp+38h] [rbp-C8h]
  char v121; // [rsp+40h] [rbp-C0h] BYREF
  char v122; // [rsp+41h] [rbp-BFh] BYREF
  char v123[2]; // [rsp+42h] [rbp-BEh] BYREF
  int v124; // [rsp+44h] [rbp-BCh]
  int v125; // [rsp+48h] [rbp-B8h]
  int v126; // [rsp+4Ch] [rbp-B4h]
  __int64 v127; // [rsp+50h] [rbp-B0h]
  int v128; // [rsp+58h] [rbp-A8h]
  struct _LUID v129; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v130; // [rsp+68h] [rbp-98h] BYREF
  char v131[8]; // [rsp+70h] [rbp-90h] BYREF
  char v132; // [rsp+78h] [rbp-88h]
  struct DXGADAPTER *v133; // [rsp+80h] [rbp-80h]
  __int128 v134; // [rsp+88h] [rbp-78h]
  char v135[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v136[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v137[40]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v138[20]; // [rsp+F0h] [rbp-10h] BYREF
  int v139; // [rsp+104h] [rbp+4h]
  _DXGKARG_SETPOINTERPOSITION v140; // [rsp+108h] [rbp+8h] BYREF

  v3 = a1;
  v133 = a1;
  v4 = 2LL;
  v5 = a3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(2LL, &EventProfilerEnter, a3, 3011);
  if ( a2 )
  {
    if ( v5 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_38:
      LODWORD(v21) = 0;
    }
    else
    {
      PairingAdapters = DxgkpGetPairingAdapters(v3, a2->VidPnSourceId, 0LL, 0LL, &v130, (unsigned __int64 *)&v129);
      v12 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v79[3] = v3;
        v79[4] = a2->VidPnSourceId;
        v79[5] = v12;
        WdLogEvent5_WdEvent(v79);
        LODWORD(v21) = v12;
      }
      else
      {
        v13 = v130;
        if ( !v130 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
          *(_QWORD *)(v80 + 24) = 1676LL;
          WdLogEvent5_WdAssertion(v80);
        }
        if ( !*((_QWORD *)v13 + 285) )
        {
          v81 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
          *(_QWORD *)(v81 + 24) = 1677LL;
          WdLogEvent5_WdAssertion(v81);
        }
        v14 = *(struct _LUID *)((char *)v13 + 268);
        v129 = v14;
        DXGADAPTER::ReleaseReference(v13);
        v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
        if ( v17 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v17,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          v121 = 0;
          v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v121, 0);
          v21 = v20;
          if ( v20 < 0 )
          {
            v83 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v83 + 24) = v21;
            WdLogEvent5_WdEvent(v83);
          }
          else
          {
            SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                      SessionDataForSpecifiedSession,
                                      &v129,
                                      a2->VidPnSourceId);
            v130 = SessionViewFromSource;
            v25 = SessionViewFromSource;
            if ( SessionViewFromSource )
            {
              for ( i = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
                    ;
                    i = SESSION_VIEW::GetNextDisplaySource(v25, v29) )
              {
                v29 = i;
                if ( !i )
                {
                  if ( v121 )
                    DxgkReleaseSessionModeChangeLock();
                  goto LABEL_38;
                }
                v30 = *(_QWORD *)(*((_QWORD *)i + 1) + 16LL);
                if ( !v30 )
                {
                  v85 = WdLogNewEntry5_WdAssertion(v4, v27, a3, v28);
                  *(_QWORD *)(v85 + 24) = 1725LL;
                  WdLogEvent5_WdAssertion(v85);
                }
                if ( !*(_QWORD *)(v30 + 2280) )
                {
                  v86 = WdLogNewEntry5_WdAssertion(v4, v27, a3, v28);
                  *(_QWORD *)(v86 + 24) = 1726LL;
                  WdLogEvent5_WdAssertion(v86);
                }
                v140 = *a2;
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v135, (struct DXGADAPTER *const)v30, 0LL);
                v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v135);
                v36 = v31;
                if ( v31 < 0 )
                {
                  v87 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
                  v87[3] = *(int *)(v30 + 272);
                  v87[4] = *(unsigned int *)(v30 + 268);
                  v87[5] = v36;
                  WdLogEvent5_WdError(v87);
                  goto LABEL_35;
                }
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)v131,
                  (struct DXGFASTMUTEX *const)(*(_QWORD *)(v30 + 2280) + 280LL),
                  v34,
                  v35);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v131);
                if ( (*(_DWORD *)(v30 + 300) & 0x100) != 0 || (*(_DWORD *)(v30 + 3868) & 8) == 0 )
                  break;
LABEL_33:
                if ( v132 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131, v37, v38, v39);
LABEL_35:
                COREACCESS::~COREACCESS((COREACCESS *)v137);
                COREACCESS::~COREACCESS((COREACCESS *)v136);
              }
              v140.VidPnSourceId = *((_DWORD *)v29 + 4);
              if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
                      *(ADAPTER_DISPLAY **)(v30 + 2280),
                      *((unsigned int *)v29 + 4),
                      v38,
                      v39) )
              {
                v109 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
                v109[3] = -1073741823LL;
                v109[4] = v140.VidPnSourceId;
                v110 = *(_BYTE *)&v140.Flags.0 & 1;
                v109[6] = v3;
                v109[5] = v110;
LABEL_31:
                LOBYTE(v52) = *(_BYTE *)&v140.Flags.0 & 1;
                ADAPTER_DISPLAY::SavePointerInfo(
                  *(ADAPTER_DISPLAY **)(v30 + 2280),
                  v140.VidPnSourceId,
                  v52,
                  (unsigned int)v140.X,
                  v140.Y,
                  a2->X,
                  a2->Y);
                if ( v29 == SESSION_VIEW::GetPrimaryDisplaySource(v25) )
                {
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131, v37, v38, v39);
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v135);
                  v118 = (unsigned __int64 *)lambda_eb72620180147af09faaee397ad33fb2_::_lambda_invoker_cdecl_;
                  HIDWORD(v117) = HIDWORD(a2);
                  OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
                    v30,
                    v54,
                    a2->VidPnSourceId);
                }
                goto LABEL_33;
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v120) = v140.Flags.0;
                LODWORD(v119) = v140.Y;
                LODWORD(v118) = v140.X;
                LODWORD(v117) = v140.VidPnSourceId;
                Template_pdqqq(v41, &EventSetPointerPosition, v42, v3, v117, v118, v119, v120);
              }
              v44 = *((unsigned int *)v29 + 257);
              v122 = 1;
              v123[0] = 1;
              v45 = IsVirtualizationDisabledForTarget(v30, v44, &v122, v123);
              v48 = v45;
              if ( v45 < 0 )
              {
                v88 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
                v88[3] = *((unsigned int *)v29 + 4);
                v88[4] = *(int *)(v30 + 272);
                v88[5] = *(unsigned int *)(v30 + 268);
                v88[6] = v48;
                WdLogEvent5_WdError(v88);
              }
              v49 = v122;
              if ( v122 && v123[0] || (*(_BYTE *)&v140.Flags.0 & 1) == 0 )
              {
LABEL_29:
                if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v30 + 2280), &v140) < 0 )
                {
                  v108 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
                  *(_QWORD *)(v108 + 24) = 1891LL;
                  WdLogEvent5_WdAssertion(v108);
                }
                goto LABEL_31;
              }
              CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                     *((_QWORD *)v29 + 1),
                                     *((unsigned int *)v29 + 4),
                                     v122 != 0);
              SavedCursor = DISPLAY_SOURCE::GetSavedCursor(v29, 0);
              v60 = SavedCursor;
              if ( !SavedCursor->pPixels
                || (Width = SavedCursor->Width, Width > *(_DWORD *)(v30 + 1632))
                || SavedCursor->Height > *(_DWORD *)(v30 + 1636) )
              {
                v115 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
                v115[3] = v60->Width;
                v115[4] = v60->Height;
                v115[5] = v60->pPixels;
                WdLogEvent5_WdError(v115);
                goto LABEL_96;
              }
              v62 = *((_DWORD *)v29 + 165) - *((_DWORD *)v29 + 163);
              v63 = (unsigned int)(*((_DWORD *)v29 + 166) - *((_DWORD *)v29 + 164));
              v64 = *((_DWORD *)v25 + 9) - *((_DWORD *)v25 + 7);
              v65 = *(_OWORD *)((char *)v29 + 652);
              v66 = *((_BYTE *)v29 + 668);
              v67 = *((_DWORD *)v25 + 8) - *((_DWORD *)v25 + 6);
              v127 = *((_QWORD *)v29 + 84);
              v129.LowPart = v49;
              v125 = v62;
              v124 = v63;
              v126 = v64;
              v134 = v65;
              if ( v66 )
              {
                v62 = v127;
                v69 = 0;
                v63 = HIDWORD(v127);
                v68 = 0;
                v124 = HIDWORD(v127);
                v125 = v127;
              }
              else
              {
                v68 = DWORD1(v134);
                v69 = v134;
                v127 = *((_QWORD *)&v134 + 1);
              }
              X = a2->X;
              if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
              {
                v71 = (unsigned int)((int)v63 * X / v67);
                v72 = v62 * a2->Y;
              }
              else
              {
                v71 = (unsigned int)(v62 * X / v67);
                v72 = v63 * a2->Y;
              }
              v73 = (unsigned int)(v72 >> 31);
              v128 = v71;
              LODWORD(v73) = v72 % v126;
              v74 = v72 / v126;
              v126 = v72 / v126;
              if ( v129.LowPart )
              {
                v140.X = v71 + v69;
                v89 = v74 + v68;
                goto LABEL_83;
              }
              if ( CurrentOrientation != 2 )
              {
                if ( CurrentOrientation == 3 )
                {
                  v92 = v69 - Width;
                  v78 = v125;
                  v93 = v92 - v71;
                  v76 = v124;
                  v75 = v125 + v93;
                  v140.X = v75;
                  v77 = v124 + v68 - v74 - v60->Height;
                }
                else
                {
                  if ( CurrentOrientation != 4 )
                  {
                    if ( CurrentOrientation != 1 )
                    {
                      v90 = WdLogNewEntry5_WdAssertion((unsigned int)(CurrentOrientation - 3), v73, v63, v71);
                      *(_QWORD *)(v90 + 24) = 666LL;
                      WdLogEvent5_WdAssertion(v90);
                    }
                    v75 = v69 + v128;
                    v76 = v124;
                    v77 = v68 + v126;
                    v140.X = v69 + v128;
                    goto LABEL_55;
                  }
                  v77 = v71 + v68;
                  v76 = v124;
                  v91 = v69 - Width;
                  v78 = v125;
                  v75 = v125 + v91 - v74;
                  v140.X = v75;
                }
LABEL_56:
                v140.Y = v77;
                if ( (signed int)(v75 + v60->Width) >= v69
                  && v75 <= (int)v127
                  && (signed int)(v77 + v60->Height) >= v68
                  && v77 <= SHIDWORD(v127) )
                {
                  goto LABEL_60;
                }
                v140.X = v69 + v78 / 2;
                v89 = v68 + v76 / 2;
LABEL_83:
                v140.Y = v89;
LABEL_60:
                FillClipParams(v60, v29, &v140, (struct CURSOR_CLIP_PARAMS *)v138);
                if ( v139 )
                {
                  ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v29, 0);
                  if ( !ClippedCursor->pPixels
                    || ClippedCursor->Width > *(_DWORD *)(v30 + 1632)
                    || ClippedCursor->Height > *(_DWORD *)(v30 + 1636) )
                  {
                    v111 = (_QWORD *)WdLogNewEntry5_WdError(v96, v95);
                    v111[3] = ClippedCursor->Width;
                    v111[4] = ClippedCursor->Height;
                    v111[5] = ClippedCursor->pPixels;
                    WdLogEvent5_WdError(v111);
LABEL_96:
                    if ( v132 )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131, v112, v113, v114);
                    COREACCESS::~COREACCESS((COREACCESS *)v137);
                    COREACCESS::~COREACCESS((COREACCESS *)v136);
                    LODWORD(v21) = -1073741811;
                    goto LABEL_99;
                  }
                  ClipCurrentCursor(v60, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v138);
                  ClippedCursor->VidPnSourceId = *((_DWORD *)v29 + 4);
                  v98 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v30 + 2280), ClippedCursor);
                  v101 = v98;
                  if ( v98 < 0 )
                  {
                    v102 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99);
                    v102[3] = *((unsigned int *)v29 + 4);
                    v102[4] = *(int *)(v30 + 272);
                    v102[5] = *(unsigned int *)(v30 + 268);
                    v102[6] = v101;
                    WdLogEvent5_WdError(v102);
                  }
                  *((_BYTE *)v29 + 725) = 1;
                }
                else if ( *((_BYTE *)v29 + 725) )
                {
                  v103 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v30 + 2280), v60);
                  v106 = v103;
                  if ( v103 < 0 )
                  {
                    v107 = (_QWORD *)WdLogNewEntry5_WdError(v105, v104);
                    v107[3] = *((unsigned int *)v29 + 4);
                    v107[4] = *(int *)(v30 + 272);
                    v107[5] = *(unsigned int *)(v30 + 268);
                    v107[6] = v106;
                    WdLogEvent5_WdError(v107);
                  }
                  *((_BYTE *)v29 + 725) = 0;
                }
                v25 = v130;
                v3 = v133;
                goto LABEL_29;
              }
              v75 = v74 + v69;
              v140.X = v74 + v69;
              v94 = v68 - v71 - v60->Height;
              v76 = v124;
              v77 = v124 + v94;
LABEL_55:
              v78 = v125;
              goto LABEL_56;
            }
            v84 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
            v84[3] = a2->VidPnSourceId;
            v84[4] = v129.HighPart;
            v84[5] = v14.LowPart;
            LODWORD(v21) = -1073741811;
            v84[6] = (unsigned int)PsGetCurrentProcessSessionId();
            v84[7] = -1073741811LL;
            WdLogEvent5_WdError(v84);
          }
LABEL_99:
          if ( v121 )
            DxgkReleaseSessionModeChangeLock();
        }
        else
        {
          v82 = WdLogNewEntry5_WdError(v16, v15);
          LODWORD(v21) = -1073741811;
          *(_QWORD *)(v82 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          *(_QWORD *)(v82 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v82);
        }
      }
    }
  }
  else
  {
    LODWORD(v21) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, a3, 3011);
  return (unsigned int)v21;
}
