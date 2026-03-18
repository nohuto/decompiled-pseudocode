/*
 * XREFs of WheapInitializeWorkQueue @ 0x140167D94
 * Callers:
 *     WheaInitialize @ 0x1407FC324 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0, 0x88uLL);
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_140342618 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140342650 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140342660 = (__int64)WheapProcessWorkQueueItem;
  *(_QWORD *)&WheapDispatchPtr.SectorSize = 0LL;
  LODWORD(WheapDispatchPtr.Reserved) = 275;
  qword_140342620 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_140342638 = 0LL;
  qword_140342610 = 0LL;
  qword_140342658 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_140342640 = 0LL;
  return result;
}
