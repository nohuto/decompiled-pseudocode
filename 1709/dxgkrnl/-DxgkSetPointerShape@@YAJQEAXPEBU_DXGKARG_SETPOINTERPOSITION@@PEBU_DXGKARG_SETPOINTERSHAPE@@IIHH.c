/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00B51D0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C01B44B0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00AB678 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01CA498 (OutputDuplProcessRemoteSessionSetPointerShape.c)
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
  unsigned int v7; // r10d
  __int64 v11; // rsi
  int PairingAdapters; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  struct _LUID v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v20; // r8
  int v21; // eax
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v23; // rcx
  struct SESSION_VIEW *v24; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  bool v26; // al
  struct DISPLAY_SOURCE *i; // rdi
  __int64 v29; // rcx
  ADAPTER_DISPLAY **v30; // r14
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // r8
  bool v35; // zf
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v46; // eax
  _QWORD *v47; // rax
  char v48; // [rsp+50h] [rbp-91h] BYREF
  bool v49; // [rsp+51h] [rbp-90h]
  unsigned int v50; // [rsp+54h] [rbp-8Dh]
  struct _LUID v51; // [rsp+58h] [rbp-89h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-81h] BYREF
  char v53; // [rsp+68h] [rbp-79h]
  _BYTE v54[8]; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v55[32]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v56[40]; // [rsp+98h] [rbp-49h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v57; // [rsp+C0h] [rbp-21h] BYREF

  v7 = a4;
  v50 = a4;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
    v7 = v50;
  }
  LODWORD(v11) = 0;
  if ( !a3 || !a2 )
    goto LABEL_39;
  v57 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, v7, a5);
    goto LABEL_22;
  }
  if ( a3->Flags.Value >= 8 )
  {
    v36 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v36 + 24) = a3->Flags.Value;
    *(_QWORD *)(v36 + 32) = a1;
    WdLogEvent5_WdError(v36);
LABEL_39:
    LODWORD(v11) = -1073741811;
    goto LABEL_22;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, a3->VidPnSourceId, 0LL, 0LL, (struct DXGADAPTER **)&v51, &v52);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v37[3] = a1;
    v37[4] = a3->VidPnSourceId;
    v37[5] = v11;
    WdLogEvent5_WdEvent(v37);
  }
  else
  {
    v14 = (_QWORD *)v51;
    if ( !*(_QWORD *)&v51 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v38 + 24) = 1437LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( !v14[288] )
    {
      v39 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v39 + 24) = 1438LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v15 = *(struct _LUID *)((char *)v14 + 268);
    v51 = v15;
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v14);
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16) + 73);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId,
                                         v20);
    }
    if ( SessionDataForSpecifiedSession )
    {
      v48 = 0;
      v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v48, 0);
      v11 = v21;
      if ( v21 < 0 )
      {
        v42 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v42 + 24) = v11;
        WdLogEvent5_WdEvent(v42);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionDataForSpecifiedSession,
                                  &v51,
                                  a3->VidPnSourceId);
        v24 = (struct SESSION_VIEW *)SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
          if ( PrimaryDisplaySource )
          {
            v26 = a7 != 0;
            v49 = a7 != 0;
            while ( 1 )
            {
              LODWORD(v11) = SetPointerShapeForDisplaySource(PrimaryDisplaySource, a2, a3, v24, a1, v50, a5, 0, v26);
              if ( (int)v11 < 0 )
                break;
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
              v26 = v49;
              if ( !PrimaryDisplaySource )
                goto LABEL_20;
            }
            for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v24); i; i = SESSION_VIEW::GetNextDisplaySource(v24, i) )
            {
              v29 = *((_QWORD *)i + 1);
              v30 = *(ADAPTER_DISPLAY ***)(v29 + 16);
              if ( !v30 )
              {
                v44 = WdLogNewEntry5_WdAssertion(v29);
                *(_QWORD *)(v44 + 24) = 1501LL;
                WdLogEvent5_WdAssertion(v44);
              }
              if ( !v30[288] )
              {
                v45 = WdLogNewEntry5_WdAssertion(v29);
                *(_QWORD *)(v45 + 24) = 1502LL;
                WdLogEvent5_WdAssertion(v45);
              }
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, (struct DXGADAPTER *const)v30, 0LL);
              v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54);
              v33 = v31;
              if ( v31 < 0 )
              {
                v47 = (_QWORD *)WdLogNewEntry5_WdError(v32);
                v47[3] = v51.HighPart;
                v47[4] = v15.LowPart;
                v47[5] = v33;
                WdLogEvent5_WdError(v47);
              }
              else
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v52, (ADAPTER_DISPLAY *)((char *)v30[288] + 280));
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v52);
                if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v30[288], *((_DWORD *)i + 4)) )
                {
                  v46 = *((_DWORD *)i + 4);
                  v57.X = 0;
                  v57.Y = 0;
                  v57.Flags.Value &= ~1u;
                  v57.VidPnSourceId = v46;
                  ADAPTER_DISPLAY::DdiSetPointerPosition(v30[288], &v57, v34);
                }
                v35 = v53 == 0;
                *((_DWORD *)i + 937) = -1;
                *((_DWORD *)i + 938) = -1;
                *((_BYTE *)i + 724) = 0;
                if ( !v35 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v52);
              }
              COREACCESS::~COREACCESS((COREACCESS *)v56);
              COREACCESS::~COREACCESS((COREACCESS *)v55);
            }
          }
        }
        else
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v23);
          v43[3] = a3->VidPnSourceId;
          v43[4] = v51.HighPart;
          v43[5] = v15.LowPart;
          LODWORD(v11) = -1073741811;
          v43[6] = (unsigned int)PsGetCurrentProcessSessionId(v15.LowPart);
          v43[7] = -1073741811LL;
          WdLogEvent5_WdError(v43);
        }
      }
LABEL_20:
      if ( v48 )
        DxgkReleaseSessionModeChangeLock((__int64)a1);
    }
    else
    {
      v40 = WdLogNewEntry5_WdError(v17);
      LODWORD(v11) = -1073741811;
      *(_QWORD *)(v40 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v41);
      *(_QWORD *)(v40 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v40);
    }
  }
LABEL_22:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerExit, (__int64)a3, 3012);
  return (unsigned int)v11;
}
