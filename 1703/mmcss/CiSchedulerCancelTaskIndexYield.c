/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C0001C00
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A290 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001280 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001780 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001CC0 (CiSchedulerRemoveDeadline.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004194 (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di
  int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( byte_1C0007298 )
    CiLogTaskIndexCancelYield();
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v1 = 1;
  }
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
LABEL_8:
    CiSchedulerUpdateTaskIndexPriorities(a1);
    goto LABEL_9;
  }
  if ( v1 )
    goto LABEL_8;
LABEL_9:
  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v3 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState();
  }
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
