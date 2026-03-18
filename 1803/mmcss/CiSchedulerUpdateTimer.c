/*
 * XREFs of CiSchedulerUpdateTimer @ 0x1C000388C
 * Callers:
 *     CiSchedulerPostSuspend @ 0x1C0002BC8 (CiSchedulerPostSuspend.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C60 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002F3C (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerSleep @ 0x1C0003278 (CiSchedulerSleep.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00033E8 (CiSchedulerTaskIndexYield.c)
 * Callees:
 *     <none>
 */

void CiSchedulerUpdateTimer()
{
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rdx

  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_12;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != CiSchedulerTimerNode )
    {
      v1 = *(_QWORD *)(DeviceObjectExtension + 24);
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
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v2, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    return;
  }
LABEL_12:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
}
