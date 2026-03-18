/*
 * XREFs of _GetQueueIocp @ 0x1C0126D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetQueueIocp()
{
  return *(_QWORD *)(gptiCurrent + 1392LL);
}
