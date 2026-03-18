/*
 * XREFs of CiSchedulerUpdateTimer @ 0x1C0001200
 * Callers:
 *     CiProcessSuspend @ 0x1C0001010 (CiProcessSuspend.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001EF0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerThreadFunction @ 0x1C0002030 (CiSchedulerThreadFunction.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002D10 (CiSchedulerProcessDeadlines.c)
 * Callees:
 *     <none>
 */

unsigned __int64 CiSchedulerUpdateTimer()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rdx

  result = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL;
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( result != CiSchedulerTimerNode )
    {
      v1 = *(_QWORD *)(result + 24);
      if ( MEMORY[0xFFFFF78000000008] > v1 )
      {
        v2 = 0LL;
      }
      else
      {
        v2 = MEMORY[0xFFFFF78000000008] - v1;
        if ( (__int64)(MEMORY[0xFFFFF78000000008] - v1) < -2000 )
          v2 += 2000LL;
      }
      CiSchedulerTimerNode = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL;
      return ExSetTimer(
               *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
               v2,
               0LL,
               &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
  }
  else if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    return ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
  return result;
}
