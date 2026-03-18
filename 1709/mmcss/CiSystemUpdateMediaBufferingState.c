/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C000286C
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00029C4 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C70 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002F08 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0003134 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00033A8 (CiSchedulerTaskIndexYield.c)
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
