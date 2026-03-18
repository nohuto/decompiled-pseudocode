/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C002498C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0033E48 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     NtDCompositionRetireFrame @ 0x1C0037500 (NtDCompositionRetireFrame.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C0037720 (NtDCompositionGetFrameStatistics.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C005BD64 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C007F700 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0080128 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0085BA0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0085D28 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C009641C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0099508 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C009B7C8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     DCompositionForceRender @ 0x1C013DFB0 (DCompositionForceRender.c)
 *     DCompositionRenderBlack @ 0x1C013E040 (DCompositionRenderBlack.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C013E090 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionEnableDDASupport @ 0x1C013E670 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C013E6C0 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C013E8A0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C013EA40 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
