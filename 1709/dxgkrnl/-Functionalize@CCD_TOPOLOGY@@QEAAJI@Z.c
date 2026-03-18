/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x1C00E1860 (DxgkFunctionalizePathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01002FC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00DBF50 (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00DEA08 (-AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C01F7034 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2)
{
  bool v4; // di
  int active; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // dx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  struct D3DKMT_GETPATHSMODALITY *v22[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]
  unsigned __int8 v24; // [rsp+A0h] [rbp+8h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v22, 8u, 0);
  v4 = (*((_BYTE *)this + 84) & 1) == 0;
  if ( (*((_BYTE *)this + 84) & 1) == 0 )
  {
    active = CCD_TOPOLOGY::AddActiveHMDPathsToTopology(this, (struct CCD_TOPOLOGY *)v22);
    v7 = active;
    if ( active < 0 )
      goto LABEL_29;
    if ( active == 255 )
      v4 = 0;
  }
  if ( v4 )
  {
    if ( v23 )
      v9 = *(unsigned __int16 *)(v23 + 20);
    else
      v9 = 0LL;
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( (unsigned __int16)v9 <= v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)v22, a2);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v24 = 0;
      CCD_TOPOLOGY::RemoveAllHMDPaths((CCD_TOPOLOGY *)v22, &v24);
      if ( !v24 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *((_QWORD *)this + 8);
      v17 = v16 ? *(unsigned __int16 *)(v16 + 20) : 0LL;
      v18 = v23 ? *(_WORD *)(v23 + 20) : 0;
      if ( (_WORD)v17 != v18 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v22);
      v7 = v20;
      if ( v20 >= 0 )
      {
        LODWORD(v7) = 0;
        goto LABEL_7;
      }
    }
LABEL_29:
    v21 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v21 + 24) = v7;
    WdLogEvent5_WdError(v21);
    goto LABEL_7;
  }
  LODWORD(v7) = CCD_TOPOLOGY::FunctionalizeWorker(this, a2);
LABEL_7:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v22);
  return (unsigned int)v7;
}
