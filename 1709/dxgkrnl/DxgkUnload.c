/*
 * XREFs of DxgkUnload @ 0x1C01A5BE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEtwShutdown @ 0x1C0026AC0 (DxgkEtwShutdown.c)
 *     DxgkDiagShutdown @ 0x1C0026E94 (DxgkDiagShutdown.c)
 *     MonitorCleanupGlobal @ 0x1C0036F24 (MonitorCleanupGlobal.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01A9F00 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01AE004 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C01E4BC4 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C01E4FC8 (DxgkCleanupPower.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C01F950C (--1CCD_BTL@@AEAA@XZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02037C0 (TlgUnregisterAggregateProvider.c)
 */

void DxgkUnload()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  PVOID *v4; // rbx
  CCD_BTL *v5; // rbx

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  v1 = WdLogNewEntry5_WdError(v0);
  *(_QWORD *)(v1 + 24) = 929LL;
  WdLogEvent5_WdError(v1);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v3, v2);
  v4 = (PVOID *)FileObject;
  if ( FileObject )
  {
    if ( *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    if ( *v4 )
      ObfDereferenceObject(*v4);
    operator delete(v4);
    FileObject = 0LL;
  }
  if ( P )
  {
    ExDeleteResourceLite(P);
    if ( P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  qword_1C0060DC0 = 0LL;
  v5 = CCD_BTL::m_pGlobalBtl;
  if ( CCD_BTL::m_pGlobalBtl )
  {
    CCD_BTL::~CCD_BTL(CCD_BTL::m_pGlobalBtl);
    operator delete(v5);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C0060D05 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown();
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  EtwUnregister(qword_1C005F870);
  qword_1C005F870 = 0LL;
  dword_1C005F850 = 0;
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
}
