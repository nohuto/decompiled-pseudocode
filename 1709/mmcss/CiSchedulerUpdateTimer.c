/*
 * XREFs of CiSchedulerUpdateTimer @ 0x1C000381C
 * Callers:
 *     CiSchedulerPostSuspend @ 0x1C0002BD8 (CiSchedulerPostSuspend.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C70 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002F08 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerSleep @ 0x1C000324C (CiSchedulerSleep.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00033A8 (CiSchedulerTaskIndexYield.c)
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
      if ( MEMORY[0xFFFFF78000000008] <= v1 )
      {
        v2 = MEMORY[0xFFFFF78000000008] - v1;
        if ( (__int64)(MEMORY[0xFFFFF78000000008] - v1) < -2000 )
          v2 += 2000LL;
      }
      else
      {
        v2 = 0LL;
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
