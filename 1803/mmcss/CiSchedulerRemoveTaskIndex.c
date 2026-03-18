/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0002F3C
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0002320 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002860 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002EE8 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTimer @ 0x1C000388C (CiSchedulerUpdateTimer.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    CiSchedulerRemoveDeadline(a1 + 56);
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
