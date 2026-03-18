/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002860
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00029B8 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C60 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002F3C (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0003164 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00033E8 (CiSchedulerTaskIndexYield.c)
 * Callees:
 *     <none>
 */

__int64 CiSystemUpdateMediaBufferingState()
{
  __int64 result; // rax

  if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
    && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
  {
    CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
    return PoNotifyMediaBuffering();
  }
  return result;
}
