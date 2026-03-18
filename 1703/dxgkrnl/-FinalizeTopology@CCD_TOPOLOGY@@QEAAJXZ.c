/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBE94
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00A6330 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rbp
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v37; // [rsp+58h] [rbp-20h]

  v37 = 0;
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 73);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v7,
                                       CurrentProcessSessionId,
                                       v11,
                                       v12);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v14 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v28 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v28 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v30, v29, v31, v32);
    v33 = v28;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v33);
    goto LABEL_12;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2323));
  Current = DXGPROCESS::GetCurrent(v15);
  if ( !Current )
  {
    v33 = WdLogNewEntry5_WdError(v17, v16);
    goto LABEL_18;
  }
  v35[0] = 0;
  v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v35, 1);
  v22 = v19;
  if ( v19 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v34 + 24) = v22;
  }
  else
  {
    v23 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
    {
LABEL_9:
      v14 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v24 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v23);
      v22 = v24;
      if ( v24 < 0 )
        break;
      if ( ++v23 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_9;
    }
    v34 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v34 + 24) = v23;
    *(_QWORD *)(v34 + 32) = v22;
  }
  WdLogEvent5_WdError(v34);
  v14 = v22;
LABEL_10:
  if ( v35[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_12:
  if ( v37 )
    KeUnstackDetachProcess(&ApcState);
  return v14;
}
