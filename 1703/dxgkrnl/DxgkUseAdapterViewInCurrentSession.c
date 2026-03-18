/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C00A8418
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00FA908 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00FA980 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00FB18C (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00FB214 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // r14
  __int64 v4; // r12
  bool v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v21; // r14
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct DISPLAY_SOURCE *v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 LowPart; // rcx
  SESSION_ADAPTER *v40; // [rsp+20h] [rbp-60h] BYREF
  __int64 v41; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v42[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v43[40]; // [rsp+58h] [rbp-28h] BYREF
  char v45; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v32 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v32 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    return 3221225485LL;
  }
  v45 = 0;
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v45, 1);
  v15 = v12;
  if ( v12 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v33 + 24) = v15;
    WdLogEvent5_WdError(v33);
  }
  else if ( v3 )
  {
    LODWORD(v15) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, &v40);
    if ( (int)v15 >= 0 )
    {
      SessionAdapterFromLuid = v40;
      v6 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_8:
      if ( (_DWORD)v4 == -1 )
        goto LABEL_18;
      v21 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v21 )
      {
        if ( !*((_QWORD *)v21 + 285) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          *(_QWORD *)(v36 + 24) = 351LL;
          WdLogEvent5_WdAssertion(v36);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v41, v21, 0LL);
        v23 = COREADAPTERACCESS::AcquireExclusive(&v41, v22 + 1);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
          v37[3] = a1->HighPart;
          v37[4] = a1->LowPart;
          v37[5] = v15;
          goto LABEL_35;
        }
        v26 = *((_QWORD *)v21 + 285);
        if ( (unsigned int)v4 < *(_DWORD *)(v26 + 80) )
        {
          v27 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v26 + 112) + 3208 * v4);
          if ( a3 )
            v28 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v27);
          else
            v28 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v27);
          v15 = v28;
          if ( v28 >= 0 )
            goto LABEL_17;
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
          v37[3] = v4;
          v37[4] = a1->HighPart;
          LowPart = a1->LowPart;
          v37[6] = v15;
          v37[5] = LowPart;
LABEL_35:
          WdLogEvent5_WdError(v37);
LABEL_17:
          COREACCESS::~COREACCESS((COREACCESS *)v43);
          COREACCESS::~COREACCESS((COREACCESS *)v42);
          v3 = a3;
LABEL_18:
          if ( (int)v15 >= 0 )
            v6 = v3 == 0;
          goto LABEL_20;
        }
        LODWORD(v15) = -1073741811;
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
        v38[3] = v4;
        v38[4] = a1->HighPart;
        v38[5] = a1->LowPart;
        v38[6] = -1073741811LL;
        WdLogEvent5_WdError(v38);
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        COREACCESS::~COREACCESS((COREACCESS *)v42);
      }
      else
      {
        LODWORD(v15) = -1073741811;
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
        v35[3] = a1->HighPart;
        v35[4] = a1->LowPart;
        v35[5] = v4;
        v35[6] = -1073741811LL;
        WdLogEvent5_WdError(v35);
      }
LABEL_20:
      if ( v6 )
        DXGSESSIONDATA::RemoveAdapterFromSession(SessionDataForSpecifiedSession, a1);
      goto LABEL_22;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v34[3] = a1->HighPart;
    v34[4] = a1->LowPart;
    v34[5] = -1073741811LL;
    WdLogEvent5_WdError(v34);
    LODWORD(v15) = -1073741811;
  }
LABEL_22:
  if ( v45 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v15;
}
