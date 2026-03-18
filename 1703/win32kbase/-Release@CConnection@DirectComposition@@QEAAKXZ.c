/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8
 * Callers:
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C000DF10 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C0012FD0 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionRetireFrame @ 0x1C00130E0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C0013DF0 (NtDCompositionDiscardFrame.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00155F0 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C001D838 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00547AC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0080C08 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0080F98 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C008E468 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0091B08 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0092294 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     DCompositionForceRender @ 0x1C013EB50 (DCompositionForceRender.c)
 *     DCompositionRenderBlack @ 0x1C013EBE0 (DCompositionRenderBlack.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C013EC30 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionEnableDDASupport @ 0x1C013F210 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C013F260 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C013F420 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C013F5C0 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
