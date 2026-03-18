/*
 * XREFs of DxgkUnload @ 0x1C0197330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     DxgkEtwShutdown @ 0x1C0030DA0 (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x1C00312D8 (-DxgkDiagShutdown@@YAJXZ.c)
 *     MonitorCleanupGlobal @ 0x1C004707C (MonitorCleanupGlobal.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C019DB90 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A82A8 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C02049C8 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C02058C8 (DxgkCleanupPower.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C022735C (--1CCD_BTL@@AEAA@XZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1C023D26C (TlgUnregisterAggregateProvider.c)
 */

void DxgkUnload()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID *v6; // rbx
  CCD_BTL *v7; // rbx

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  v1 = WdLogNewEntry5_WdError(v0);
  *(_QWORD *)(v1 + 24) = 1431LL;
  WdLogEvent5_WdError(v1);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v3, v2, v4, v5);
  v6 = (PVOID *)FileObject;
  if ( FileObject )
  {
    if ( *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    if ( *v6 )
      ObfDereferenceObject(*v6);
    operator delete(v6);
    FileObject = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    operator delete(Resource);
    Resource = 0LL;
  }
  v7 = CCD_BTL::m_pGlobalBtl;
  qword_1C007AED8 = 0LL;
  if ( CCD_BTL::m_pGlobalBtl )
  {
    CCD_BTL::~CCD_BTL(CCD_BTL::m_pGlobalBtl);
    operator delete(v7);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C007AEB0 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown();
  if ( gScreenStudyEventSubscription )
  {
    ExUnsubscribeWnfStateChange(gScreenStudyEventSubscription);
    gScreenStudyEventSubscription = 0LL;
  }
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  dword_1C0079B70 = 0;
  EtwUnregister(qword_1C0079B50);
  qword_1C0079B50 = 0LL;
  dword_1C0079B30 = 0;
  EtwUnregister(qword_1C0079070);
  qword_1C0079070 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  EtwUnregister(qword_1C0079BD0);
  qword_1C0079BD0 = 0LL;
  dword_1C0079BB0 = 0;
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoDeleteDevice(g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
}
