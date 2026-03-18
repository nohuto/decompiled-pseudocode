/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DF374
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00F99B0 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00DD5C4 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v5; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rbp
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // edi
  int v16; // eax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v24; // [rsp+58h] [rbp-20h]

  v24 = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId, v5);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v7 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v18 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19);
    v20 = v18;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v20);
    goto LABEL_12;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2324));
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( !Current )
  {
    v20 = WdLogNewEntry5_WdError(v10);
    goto LABEL_18;
  }
  v22[0] = 0;
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v22, 1);
  v14 = v12;
  if ( v12 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = v14;
  }
  else
  {
    v15 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
    {
LABEL_9:
      v7 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v16 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, (struct DXGFASTMUTEX *const *)Current, v15);
      v14 = v16;
      if ( v16 < 0 )
        break;
      if ( ++v15 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_9;
    }
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = v15;
    *(_QWORD *)(v21 + 32) = v14;
  }
  WdLogEvent5_WdError(v21);
  v7 = v14;
LABEL_10:
  if ( v22[0] )
    DxgkReleaseSessionModeChangeLock(v13);
LABEL_12:
  if ( v24 )
    KeUnstackDetachProcess(&ApcState);
  return v7;
}
