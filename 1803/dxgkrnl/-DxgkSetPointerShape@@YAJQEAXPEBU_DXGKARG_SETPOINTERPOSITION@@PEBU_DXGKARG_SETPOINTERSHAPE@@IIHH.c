/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ACBF8
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00ACE20 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C01B01C0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E1408 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01CDA2C (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v11; // rcx
  __int64 v12; // rsi
  int PairingAdapters; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  struct _LUID v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v27; // rcx
  struct SESSION_VIEW *v28; // r12
  __int64 v29; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  void *v31; // r15
  bool v32; // al
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rdi
  struct DISPLAY_SOURCE *i; // rdi
  __int64 v46; // rcx
  ADAPTER_DISPLAY **v47; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r15
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v53; // eax
  _QWORD *v54; // rax
  char v55; // [rsp+50h] [rbp-B0h] BYREF
  bool v56; // [rsp+51h] [rbp-AFh]
  struct _LUID v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  char v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  void *v63; // [rsp+88h] [rbp-78h]
  _BYTE v64[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v65[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v66[40]; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v67; // [rsp+E0h] [rbp-20h] BYREF

  v58 = a4;
  v63 = a1;
  v62 = 0LL;
  v61 = 3012;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v61, 3012);
  LODWORD(v12) = 0;
  if ( !a3 || !a2 )
    goto LABEL_28;
  v67 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
    goto LABEL_23;
  }
  if ( a3->Flags.Value >= 8 )
  {
    v37 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v37 + 24) = a3->Flags.Value;
    *(_QWORD *)(v37 + 32) = a1;
    WdLogEvent5_WdError(v37);
LABEL_28:
    LODWORD(v12) = -1073741811;
    goto LABEL_23;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, a3->VidPnSourceId, 0LL, 0LL, (struct DXGADAPTER **)&v57, &v59);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
    v38[3] = a1;
    v38[4] = a3->VidPnSourceId;
    v38[5] = v12;
    WdLogEvent5_WdEvent(v38);
    goto LABEL_23;
  }
  v16 = (_QWORD *)v57;
  if ( !*(_QWORD *)&v57 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v39 + 24) = 1437LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !v16[307] )
  {
    v40 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v40 + 24) = 1438LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v17 = *(struct _LUID *)((char *)v16 + 268);
  v57 = v17;
  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v16);
  v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 74);
  if ( v20 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v41 = WdLogNewEntry5_WdError(v19);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v41 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v42);
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v41);
    goto LABEL_23;
  }
  v55 = 0;
  v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v55, 0);
  v12 = v23;
  if ( v23 < 0 )
  {
    v43 = WdLogNewEntry5_WdEvent(v25, v24);
    *(_QWORD *)(v43 + 24) = v12;
    WdLogEvent5_WdEvent(v43);
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              &v57,
                              a3->VidPnSourceId);
    v28 = (struct SESSION_VIEW *)SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        v31 = v63;
        v32 = a7 != 0;
        v56 = a7 != 0;
        while ( 1 )
        {
          LODWORD(v12) = SetPointerShapeForDisplaySource(PrimaryDisplaySource, a2, a3, v28, v31, v58, a5, 0, v32);
          if ( (int)v12 < 0 )
            break;
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v28, PrimaryDisplaySource);
          v32 = v56;
          if ( !PrimaryDisplaySource )
            goto LABEL_20;
        }
        for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v28); i; i = SESSION_VIEW::GetNextDisplaySource(v28, i) )
        {
          v46 = *((_QWORD *)i + 1);
          v47 = *(ADAPTER_DISPLAY ***)(v46 + 16);
          if ( !v47 )
          {
            v48 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v48 + 24) = 1501LL;
            WdLogEvent5_WdAssertion(v48);
          }
          if ( !v47[307] )
          {
            v49 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v49 + 24) = 1502LL;
            WdLogEvent5_WdAssertion(v49);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, (struct DXGADAPTER *const)v47, 0LL);
          v50 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64);
          v52 = v50;
          if ( v50 < 0 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdError(v51);
            v54[3] = v57.HighPart;
            v54[4] = v17.LowPart;
            v54[5] = v52;
            WdLogEvent5_WdError(v54);
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v59, (ADAPTER_DISPLAY *)((char *)v47[307] + 280), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v59);
            if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v47[307], *((_DWORD *)i + 4)) )
            {
              v53 = *((_DWORD *)i + 4);
              v67.X = 0;
              v67.Y = 0;
              v67.Flags.Value &= ~1u;
              v67.VidPnSourceId = v53;
              ADAPTER_DISPLAY::DdiSetPointerPosition(v47[307], &v67);
            }
            v33 = v60 == 0;
            *((_DWORD *)i + 937) = -1;
            *((_DWORD *)i + 938) = -1;
            *((_BYTE *)i + 725) = 0;
            if ( !v33 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v59);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v66);
          COREACCESS::~COREACCESS((COREACCESS *)v65);
        }
      }
LABEL_20:
      v33 = v55 == 0;
      goto LABEL_21;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v44[3] = a3->VidPnSourceId;
    v44[4] = v17.HighPart;
    v44[5] = v17.LowPart;
    LODWORD(v12) = -1073741811;
    v44[6] = (unsigned int)PsGetCurrentProcessSessionId(v17.LowPart);
    v44[7] = -1073741811LL;
    WdLogEvent5_WdError(v44);
  }
  v33 = v55 == 0;
LABEL_21:
  if ( !v33 )
    DxgkReleaseSessionModeChangeLock(v29);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v61);
  return (unsigned int)v12;
}
