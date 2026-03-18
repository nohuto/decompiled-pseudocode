/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0001EF0
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0001D50 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C0001200 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001780 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001CC0 (CiSchedulerRemoveDeadline.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  char v2; // di
  int v3; // eax
  int v4; // eax

  v2 = 0;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v2 = 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v2 )
  {
    goto LABEL_5;
  }
  CiSchedulerUpdateTimer();
LABEL_5:
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
