/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C00029B8
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogTaskIndexCancelYield @ 0x1C00019DC (CiLogTaskIndexCancelYield.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002860 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002EE8 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0003850 (CiSchedulerUpdateTaskIndexPriorities.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax

  if ( byte_1C00062B0 )
    CiLogTaskIndexCancelYield(a1);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    CiSchedulerRemoveDeadline(a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v2 )
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
    v3 = *(_DWORD *)(a1 + 184);
  }
  if ( (v3 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = v3 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
