/*
 * XREFs of DxgkUnload @ 0x1C01910D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEtwShutdown @ 0x1C0035B00 (DxgkEtwShutdown.c)
 *     DxgkDiagShutdown @ 0x1C0036084 (DxgkDiagShutdown.c)
 *     MonitorCleanupGlobal @ 0x1C0045D8C (MonitorCleanupGlobal.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01981A4 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C01CA818 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C01CABF0 (DxgkCleanupPower.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C01DFABC (--1CCD_BTL@@AEAA@XZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1C01E9058 (TlgUnregisterAggregateProvider.c)
 */

void DxgkUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID *v7; // rbx
  CCD_BTL *v8; // rbx
  ULONGLONG *v9; // rcx

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  v2 = WdLogNewEntry5_WdError(v1, v0);
  *(_QWORD *)(v2 + 24) = 954LL;
  WdLogEvent5_WdError(v2);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v4, v3, v5, v6);
  v7 = (PVOID *)FileObject;
  if ( FileObject )
  {
    if ( *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    if ( *v7 )
      ObfDereferenceObject(*v7);
    operator delete(v7);
    FileObject = 0LL;
  }
  if ( P )
  {
    ExDeleteResourceLite(P);
    if ( P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  qword_1C006FF38 = 0LL;
  v8 = CCD_BTL::m_pGlobalBtl;
  if ( CCD_BTL::m_pGlobalBtl )
  {
    CCD_BTL::~CCD_BTL(CCD_BTL::m_pGlobalBtl);
    operator delete(v8);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C006FE85 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown(v9);
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  EtwUnregister(qword_1C006E870);
  qword_1C006E870 = 0LL;
  dword_1C006E850[0] = 0;
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
}
