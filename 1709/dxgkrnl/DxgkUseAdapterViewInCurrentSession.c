/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C00BA360
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00B2D7C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00B2E3C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00B2EB4 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00B3234 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00B32BC (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // r14
  __int64 v4; // r12
  bool v6; // r13
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // r8
  DXGSESSIONDATA ***SessionDataForSpecifiedSession; // r15
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v17; // r14
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DISPLAY_SOURCE *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 LowPart; // rcx
  SESSION_ADAPTER *v35; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v37[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v38[40]; // [rsp+58h] [rbp-28h] BYREF
  char v40; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 73);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = (DXGSESSIONDATA ***)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           v8,
                                                           CurrentProcessSessionId,
                                                           v10);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v26 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v40 = 0;
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40, 1);
  v14 = v12;
  if ( v12 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v28 + 24) = v14;
    WdLogEvent5_WdError(v28);
  }
  else if ( v3 )
  {
    LODWORD(v14) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, &v35);
    if ( (int)v14 >= 0 )
    {
      SessionAdapterFromLuid = v35;
      v6 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                               a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_8:
      if ( (_DWORD)v4 == -1 )
        goto LABEL_18;
      v17 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v17 )
      {
        if ( !*((_QWORD *)v17 + 288) )
        {
          v31 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v31 + 24) = 351LL;
          WdLogEvent5_WdAssertion(v31);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v36, v17, 0LL);
        v19 = COREADAPTERACCESS::AcquireExclusive(&v36, v18 + 1);
        v14 = v19;
        if ( v19 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v32[3] = a1->HighPart;
          v32[4] = a1->LowPart;
          v32[5] = v14;
          goto LABEL_35;
        }
        v21 = *((_QWORD *)v17 + 288);
        if ( (unsigned int)v4 < *(_DWORD *)(v21 + 80) )
        {
          v22 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v21 + 112) + 3760 * v4);
          if ( a3 )
            v23 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v22);
          else
            v23 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v22);
          v14 = v23;
          if ( v23 >= 0 )
            goto LABEL_17;
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v32[3] = v4;
          v32[4] = a1->HighPart;
          LowPart = a1->LowPart;
          v32[6] = v14;
          v32[5] = LowPart;
LABEL_35:
          WdLogEvent5_WdError(v32);
LABEL_17:
          COREACCESS::~COREACCESS((COREACCESS *)v38);
          COREACCESS::~COREACCESS((COREACCESS *)v37);
          v3 = a3;
LABEL_18:
          if ( (int)v14 >= 0 )
            v6 = v3 == 0;
          goto LABEL_20;
        }
        LODWORD(v14) = -1073741811;
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v33[3] = v4;
        v33[4] = a1->HighPart;
        v33[5] = a1->LowPart;
        v33[6] = -1073741811LL;
        WdLogEvent5_WdError(v33);
        COREACCESS::~COREACCESS((COREACCESS *)v38);
        COREACCESS::~COREACCESS((COREACCESS *)v37);
      }
      else
      {
        LODWORD(v14) = -1073741811;
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v30[3] = a1->HighPart;
        v30[4] = a1->LowPart;
        v30[5] = v4;
        v30[6] = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
LABEL_20:
      if ( v6 )
        DXGSESSIONDATA::RemoveAdapterFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a1);
      goto LABEL_22;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v29[3] = a1->HighPart;
    v29[4] = a1->LowPart;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    LODWORD(v14) = -1073741811;
  }
LABEL_22:
  if ( v40 )
    DxgkReleaseSessionModeChangeLock(v15);
  return (unsigned int)v14;
}
