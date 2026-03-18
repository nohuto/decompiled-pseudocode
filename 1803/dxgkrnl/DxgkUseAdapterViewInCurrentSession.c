/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00A2578 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01CE414 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01CE570 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01D0264 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01D0308 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // r14
  __int64 v4; // r12
  bool v6; // r13
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA ***SessionDataForSpecifiedSession; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct DISPLAY_SOURCE *v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 LowPart; // rcx
  SESSION_ADAPTER *v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v35[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v36[40]; // [rsp+58h] [rbp-28h] BYREF
  char v38; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 74);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = (DXGSESSIONDATA ***)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           v8,
                                                           CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  v38 = 0;
  v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v38, 1);
  v16 = v14;
  if ( v14 >= 0 )
  {
    if ( v3 )
    {
      LODWORD(v16) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, &v33);
      if ( (int)v16 < 0 )
        goto LABEL_33;
      SessionAdapterFromLuid = v33;
      v6 = 1;
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                 (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                 a1);
      if ( !SessionAdapterFromLuid )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v22[3] = a1->HighPart;
        v22[4] = a1->LowPart;
        v22[5] = -1073741811LL;
        WdLogEvent5_WdError(v22);
        LODWORD(v16) = -1073741811;
        goto LABEL_33;
      }
    }
    if ( (_DWORD)v4 == -1 )
      goto LABEL_29;
    v20 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
    if ( !v20 )
    {
      LODWORD(v16) = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v21[3] = a1->HighPart;
      v21[4] = a1->LowPart;
      v21[5] = v4;
      v21[6] = -1073741811LL;
      WdLogEvent5_WdError(v21);
      goto LABEL_31;
    }
    if ( !*((_QWORD *)v20 + 307) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v23 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v23);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v34, v20, 0LL);
    v24 = COREADAPTERACCESS::AcquireExclusive(&v34);
    v16 = v24;
    if ( v24 >= 0 )
    {
      v27 = *((_QWORD *)v20 + 307);
      if ( (unsigned int)v4 >= *(_DWORD *)(v27 + 80) )
      {
        LODWORD(v16) = -1073741811;
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        v28[3] = v4;
        v28[4] = a1->HighPart;
        v28[5] = a1->LowPart;
        v28[6] = -1073741811LL;
        WdLogEvent5_WdError(v28);
        COREACCESS::~COREACCESS((COREACCESS *)v36);
        COREACCESS::~COREACCESS((COREACCESS *)v35);
LABEL_31:
        if ( v6 )
          DXGSESSIONDATA::RemoveAdapterFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a1);
        goto LABEL_33;
      }
      v29 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v27 + 112) + 3760 * v4);
      if ( a3 )
        v30 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v29);
      else
        v30 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v29);
      v16 = v30;
      if ( v30 >= 0 )
        goto LABEL_28;
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v26[3] = v4;
      v26[4] = a1->HighPart;
      LowPart = a1->LowPart;
      v26[6] = v16;
      v26[5] = LowPart;
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v26[3] = a1->HighPart;
      v26[4] = a1->LowPart;
      v26[5] = v16;
    }
    WdLogEvent5_WdError(v26);
LABEL_28:
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    v3 = a3;
LABEL_29:
    if ( (int)v16 >= 0 )
      v6 = v3 == 0;
    goto LABEL_31;
  }
  v17 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v17 + 24) = v16;
  WdLogEvent5_WdError(v17);
LABEL_33:
  if ( v38 )
    DxgkReleaseSessionModeChangeLock(v18);
  return (unsigned int)v16;
}
