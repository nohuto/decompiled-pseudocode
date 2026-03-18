/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0001780
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C00012C0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0001650 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0001C00 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001EF0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerThreadFunction @ 0x1C0002030 (CiSchedulerThreadFunction.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002D10 (CiSchedulerProcessDeadlines.c)
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
