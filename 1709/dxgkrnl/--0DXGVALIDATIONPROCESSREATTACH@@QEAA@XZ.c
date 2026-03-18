/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C00256F0 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0025750 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C0025810 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0025890 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0025900 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C00259A0 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0025A10 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0025A90 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0025B00 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0025B70 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C0025BE0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0025CF0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0025D60 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0025DD0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C00BF2F0 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C00BF3E0 (DxgCreateContextAllocationCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C00BF520 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C00BF9B0 (DxgkReleaseHandleDataCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00BFC20 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C019A850 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C019A8C0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C019A9E0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C019AA80 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C019E930 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C019EAE0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleDataCB @ 0x1C019ECF0 (DxgGetHandleDataCB.c)
 *     DxgGetHandleParentCB @ 0x1C019F060 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016F9B4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rdi
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v2) + 277) )
      {
        Global = DXGGLOBAL::GetGlobal(v4);
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v7 = *((_QWORD *)SessionData + 2326);
          if ( v7 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, (PRKAPC_STATE)((char *)this + 8));
              *(_BYTE *)this = 1;
            }
          }
        }
      }
    }
  }
  return this;
}
