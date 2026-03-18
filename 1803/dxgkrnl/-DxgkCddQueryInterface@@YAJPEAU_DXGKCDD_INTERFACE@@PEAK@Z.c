/*
 * XREFs of ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00DB5D0
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C00DB490 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddQueryInterface(struct _DXGKCDD_INTERFACE *a1, unsigned int *a2)
{
  struct DXGADAPTER *v4; // rdi
  int PairingAdapters; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  DXGADAPTER *v11; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  DXGADAPTER *v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)a1 != 393744 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v13[3] = -1073741811LL;
    v13[4] = *(unsigned __int16 *)a1;
    v13[5] = 528LL;
    v13[6] = *((unsigned __int16 *)a1 + 1);
    v13[7] = 6LL;
    goto LABEL_14;
  }
  v4 = (struct DXGADAPTER *)*((_QWORD *)a1 + 1);
  if ( !v4 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v13[3] = a1;
LABEL_14:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v4, *((_DWORD *)a1 + 4), 0LL, 0LL, &v16, &v17);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v14[3] = v4;
    v11 = 0LL;
    v7 = *((unsigned int *)a1 + 4);
    v14[4] = v7;
    v14[5] = v10;
  }
  else
  {
    v11 = v16;
  }
  if ( v11 && !*((_QWORD *)v11 + 307) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v15 + 24) = 4328LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_QWORD *)a1 + 3) = DxgkCddInterfaceDereference;
  *((_QWORD *)a1 + 4) = DxgkCddInterfaceDereference;
  *((_QWORD *)a1 + 6) = DxgkCddCreate;
  *((_QWORD *)a1 + 7) = DxgkCddDestroy;
  *((_QWORD *)a1 + 8) = DxgkCddEnable;
  *((_QWORD *)a1 + 9) = &DxgkCddEnableLite;
  *((_QWORD *)a1 + 10) = DxgkCddDisable;
  *((_QWORD *)a1 + 13) = DxgkCddGetDisplayModeList;
  *((_QWORD *)a1 + 11) = DxgkCddLock;
  *((_QWORD *)a1 + 12) = DxgkCddUnlock;
  *((_QWORD *)a1 + 14) = DxgkCddPresent;
  *((_QWORD *)a1 + 47) = DxgkCddPresentOnScreen;
  *((_QWORD *)a1 + 18) = DxgkCddSetGammaRamp;
  *((_QWORD *)a1 + 15) = DxgkCddSetPalette;
  *((_QWORD *)a1 + 17) = DxgkCddSetPointerPosition;
  *((_QWORD *)a1 + 16) = DxgkCddSetPointerShape;
  *((_QWORD *)a1 + 19) = DxgkCddSetOrigin;
  *((_QWORD *)a1 + 20) = DxgkCddWaitForVerticalBlankEvent;
  *((_QWORD *)a1 + 21) = DxgkCddTerminateThread;
  *((_QWORD *)a1 + 22) = DxgkCddCreateAllocation;
  *((_QWORD *)a1 + 23) = DxgkCddDestroyAllocation;
  *((_QWORD *)a1 + 24) = DxgkCddSyncGPUAccess;
  *((_QWORD *)a1 + 25) = DxgkCddQueryResourceInfo;
  *((_QWORD *)a1 + 26) = DxgkCddQueryResourceInfoFromNtHandle;
  *((_QWORD *)a1 + 27) = DxgkCddOpenResource;
  *((_QWORD *)a1 + 28) = DxgkCddOpenResourceFromNtHandle;
  *((_QWORD *)a1 + 29) = DxgkCddLogEvent;
  *((_QWORD *)a1 + 31) = DxgkCddGdiCommand;
  *((_QWORD *)a1 + 30) = DxgkCddGetCurrentDxgProcess;
  *((_QWORD *)a1 + 32) = DxgkCddSubmitPresentHistory;
  *((_QWORD *)a1 + 33) = DxgkCddPushWorkerThreadOfOwner;
  *((_QWORD *)a1 + 34) = DxgkCddPopWorkerThreadOfOwner;
  *((_QWORD *)a1 + 35) = DxgkCddGetDriverCaps;
  *((_QWORD *)a1 + 36) = DxgkCddVerifyCddDevMode;
  *((_QWORD *)a1 + 37) = DxgkWriteDiagEntry;
  *((_QWORD *)a1 + 38) = DxgkCddAdapterReference;
  *((_QWORD *)a1 + 39) = DxgkCddAdapterDereference;
  *((_QWORD *)a1 + 5) = DxgkCddEtwLoggerEnabled;
  *((_QWORD *)a1 + 40) = DxgkCddCreateSynchronizationObject;
  *((_QWORD *)a1 + 41) = DxgkCddDestroySynchronizationObject;
  *((_QWORD *)a1 + 42) = DxgkCddSignalSynchronizationObject;
  *((_QWORD *)a1 + 43) = DxgkCddWaitForSynchronizationObject;
  *((_QWORD *)a1 + 44) = DxgkCddOpenSynchronizationObject;
  *((_QWORD *)a1 + 45) = DxgkCddNotifyGdiRendering;
  *((_QWORD *)a1 + 46) = DxgkCddIssueSyncObjectOpForDevice;
  *((_QWORD *)a1 + 48) = DxgkCddSubscribeWnfStateChange;
  *((_QWORD *)a1 + 49) = DxgkCddUnsubscribeWnfStateChange;
  *((_QWORD *)a1 + 50) = DxgkCddReportDripsBlocker;
  *((_QWORD *)a1 + 51) = DxgkCddMakeResident;
  *((_QWORD *)a1 + 52) = DxgkCddEvict;
  *((_QWORD *)a1 + 53) = DxgkCddWaitForSynchronizationObjectFromCpu;
  *((_QWORD *)a1 + 54) = DxgkCddSignalSynchronizationObjectFromGpu;
  *((_QWORD *)a1 + 55) = DxgkCddSubmitSignalSyncObjectsToHwQueue;
  *((_QWORD *)a1 + 56) = DxgkCddCreatePagingQueue;
  *((_QWORD *)a1 + 57) = DxgkCddDestroyPagingQueue;
  *((_QWORD *)a1 + 58) = DxgkPresentVirtualFrameBuffer;
  *((_QWORD *)a1 + 59) = &DxgkGetBootAnimationRelayState;
  *((_QWORD *)a1 + 60) = &DxgkSetBootAnimationRelayState;
  *((_QWORD *)a1 + 61) = &DxgkShutdownBootGraphics;
  *((_QWORD *)a1 + 62) = DxgkGetVirtualFrameBufferAccessCount;
  *((_QWORD *)a1 + 63) = DxgkIsBootPrimarySource;
  *((_QWORD *)a1 + 64) = DxgkRequestAsyncDisplaySwitchCallout;
  *((_QWORD *)a1 + 65) = DxgCreateLiveDumpWithWdLogs;
  *a2 = 528;
  if ( v11 )
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
  return 0LL;
}
