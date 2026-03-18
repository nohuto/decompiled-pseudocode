/*
 * XREFs of DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkDisplayOnOff @ 0x1C00BA9E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00DD5C4 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE190 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00F8590 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0174900 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00B2D7C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B35D4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkGetCddDeviceAndContextForCurrentSession(
        struct _LUID *a1,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGADAPTER **SessionAdapterFromLuid; // rax
  __int64 v12; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx

  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 73);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId, v9);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v18 = PsGetCurrentProcessSessionId(v17);
    v16[5] = 1LL;
LABEL_12:
    v16[4] = -1073741811LL;
    v16[3] = v18;
    v15 = v16;
    goto LABEL_8;
  }
  if ( !*((_QWORD *)SessionDataForSpecifiedSession + 2325) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v18 = PsGetCurrentProcessSessionId(v19);
    v16[5] = 2LL;
    goto LABEL_12;
  }
  SessionAdapterFromLuid = (struct DXGADAPTER **)DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                                   SessionDataForSpecifiedSession,
                                                   a1);
  if ( SessionAdapterFromLuid )
    return SESSION_ADAPTER::GetCddDeviceAndContext(SessionAdapterFromLuid, a2, a3);
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v14[3] = a1->HighPart;
  v14[4] = a1->LowPart;
  v15 = v14;
  v14[5] = -1073741811LL;
LABEL_8:
  WdLogEvent5_WdError(v15);
  return 3221225485LL;
}
