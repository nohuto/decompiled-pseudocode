/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C00029C4
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogTaskIndexCancelYield @ 0x1C0001A0C (CiLogTaskIndexCancelYield.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C000286C (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002EB4 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C00037E0 (CiSchedulerUpdateTaskIndexPriorities.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di
  int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( byte_1C00062A8 )
    CiLogTaskIndexCancelYield(a1);
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
  }
  else if ( !v1 )
  {
    goto LABEL_10;
  }
  CiSchedulerUpdateTaskIndexPriorities(a1);
LABEL_10:
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
