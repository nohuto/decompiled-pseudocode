/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FA358
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FB930 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C019DAE0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E61C8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01B06DC (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r10d
  __int64 v10; // rsi
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  struct _LUID v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGSESSIONMGR *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v31; // eax
  __int64 v32; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct SESSION_VIEW *v36; // r15
  __int64 v37; // rdx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  __int64 v39; // r9
  struct DISPLAY_SOURCE *i; // rax
  struct DISPLAY_SOURCE *v42; // rdi
  __int64 v43; // rcx
  ADAPTER_DISPLAY **v44; // r14
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // r8
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v68; // eax
  _QWORD *v69; // rax
  _BYTE v70[4]; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v71; // [rsp+44h] [rbp-85h]
  struct _LUID v72; // [rsp+48h] [rbp-81h] BYREF
  void *v73; // [rsp+50h] [rbp-79h]
  unsigned __int64 v74; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v75[8]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v76[32]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v77[40]; // [rsp+88h] [rbp-41h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v78; // [rsp+B0h] [rbp-19h] BYREF

  v6 = a4;
  v71 = a4;
  v73 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
    v6 = v71;
  }
  LODWORD(v10) = 0;
  if ( !a3 || !a2 )
    goto LABEL_36;
  v78 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, v6, a5);
    goto LABEL_21;
  }
  if ( a3->Flags.Value >= 8 )
  {
    v52 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v52 + 24) = a3->Flags.Value;
    *(_QWORD *)(v52 + 32) = a1;
    WdLogEvent5_WdError(v52);
LABEL_36:
    LODWORD(v10) = -1073741811;
    goto LABEL_21;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, a3->VidPnSourceId, 0LL, 0LL, (struct DXGADAPTER **)&v72, &v74);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
    v53[3] = a1;
    v53[4] = a3->VidPnSourceId;
    v53[5] = v10;
    WdLogEvent5_WdEvent(v53);
  }
  else
  {
    v16 = (_QWORD *)v72;
    if ( !*(_QWORD *)&v72 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v54 + 24) = 1361LL;
      WdLogEvent5_WdAssertion(v54);
    }
    if ( !v16[285] )
    {
      v55 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v55 + 24) = 1362LL;
      WdLogEvent5_WdAssertion(v55);
    }
    v17 = *(struct _LUID *)((char *)v16 + 268);
    v72 = v17;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    v24 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18, v20, v21) + 73);
    if ( v24 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v23, v22, v25, v26);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v24,
                                         CurrentProcessSessionId,
                                         v28,
                                         v29);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v70[0] = 0;
      v31 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v70, 0);
      v10 = v31;
      if ( v31 < 0 )
      {
        v61 = WdLogNewEntry5_WdEvent(v32);
        *(_QWORD *)(v61 + 24) = v10;
        WdLogEvent5_WdEvent(v61);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionDataForSpecifiedSession,
                                  &v72,
                                  a3->VidPnSourceId);
        v36 = SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
          if ( PrimaryDisplaySource )
          {
            while ( 1 )
            {
              LODWORD(v10) = SetPointerShapeForDisplaySource(PrimaryDisplaySource, a2, a3, v36, v73, v71, a5, 0);
              if ( (int)v10 < 0 )
                break;
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v36, PrimaryDisplaySource);
              if ( !PrimaryDisplaySource )
                goto LABEL_19;
            }
            for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v36); ; i = SESSION_VIEW::GetNextDisplaySource(v36, v42) )
            {
              v42 = i;
              if ( !i )
                break;
              v43 = *((_QWORD *)i + 1);
              v44 = *(ADAPTER_DISPLAY ***)(v43 + 16);
              if ( !v44 )
              {
                v66 = WdLogNewEntry5_WdAssertion(v43, v37, a3, v39);
                *(_QWORD *)(v66 + 24) = 1425LL;
                WdLogEvent5_WdAssertion(v66);
              }
              if ( !v44[285] )
              {
                v67 = WdLogNewEntry5_WdAssertion(v43, v37, a3, v39);
                *(_QWORD *)(v67 + 24) = 1426LL;
                WdLogEvent5_WdAssertion(v67);
              }
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v75, (struct DXGADAPTER *const)v44, 0LL);
              v45 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v75);
              v50 = v45;
              if ( v45 < 0 )
              {
                v69 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
                v69[3] = v72.HighPart;
                v69[4] = v17.LowPart;
                v69[5] = v50;
                WdLogEvent5_WdError(v69);
              }
              else if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v44[285], *((unsigned int *)v42 + 4), v48, v49) )
              {
                v68 = *((_DWORD *)v42 + 4);
                v78.Flags.Value &= ~1u;
                v78.VidPnSourceId = v68;
                *(_QWORD *)&v78.X = 0LL;
                ADAPTER_DISPLAY::DdiSetPointerPosition(v44[285], &v78, v51);
              }
              *((_BYTE *)v42 + 724) = 0;
              COREACCESS::~COREACCESS((COREACCESS *)v77);
              COREACCESS::~COREACCESS((COREACCESS *)v76);
            }
          }
        }
        else
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
          v62[3] = a3->VidPnSourceId;
          v62[4] = v72.HighPart;
          v62[5] = v17.LowPart;
          LODWORD(v10) = -1073741811;
          v62[6] = (unsigned int)PsGetCurrentProcessSessionId(v17.LowPart, v63, v64, v65);
          v62[7] = -1073741811LL;
          WdLogEvent5_WdError(v62);
        }
      }
LABEL_19:
      if ( v70[0] )
        DxgkReleaseSessionModeChangeLock((__int64)a1, v37, (__int64)a3, v39);
    }
    else
    {
      v56 = WdLogNewEntry5_WdError(v23, v22);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v56 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v58, v57, v59, v60);
      *(_QWORD *)(v56 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v56);
    }
  }
LABEL_21:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, (__int64)a3, 3012);
  return (unsigned int)v10;
}
