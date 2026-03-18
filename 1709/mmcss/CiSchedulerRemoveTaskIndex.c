/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0002F08
 * Callers:
 *     CiTaskIndexDereference @ 0x1C000233C (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C000286C (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002EB4 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTimer @ 0x1C000381C (CiSchedulerUpdateTimer.c)
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
    goto LABEL_7;
  }
  CiSchedulerUpdateTimer();
LABEL_7:
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
