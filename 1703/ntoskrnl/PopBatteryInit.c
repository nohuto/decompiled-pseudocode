/*
 * XREFs of PopBatteryInit @ 0x140822C60
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     memset @ 0x140192D80 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  qword_14034B388 = 0LL;
  qword_14034B530 = 0LL;
  PopCB = 0LL;
  qword_14034B3A8 = (__int64)&qword_14034B3A0;
  qword_14034B3A0 = (__int64)&qword_14034B3A0;
  qword_14034B528 = 0LL;
  qword_14034B3B8 = (__int64)&qword_14034B3B0;
  qword_14034B3B0 = (__int64)&qword_14034B3B0;
  memset(&xmmword_14034B538, 0, 0x20uLL);
  LOBYTE(xmmword_14034B538) = 1;
  dword_14034B50C = -1;
  v0 = 4LL;
  dword_14034B508 = -1;
  qword_14034B518 = 0LL;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_14034B4A8;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  stru_14034B488.Header.WaitListHead.Blink = &stru_14034B488.Header.WaitListHead;
  stru_14034B488.Header.WaitListHead.Flink = &stru_14034B488.Header.WaitListHead;
  *(_QWORD *)&stru_14034B408.Header.Lock = 8LL;
  qword_14034B460 = (__int64)PopBatteryWakeDpc;
  LOWORD(stru_14034B488.Header.Lock) = 1;
  stru_14034B408.Header.WaitListHead.Blink = &stru_14034B408.Header.WaitListHead;
  stru_14034B408.Header.WaitListHead.Flink = &stru_14034B408.Header.WaitListHead;
  stru_14034B488.Header.Size = 6;
  stru_14034B488.Header.SignalState = 0;
  qword_14034B520 = 0LL;
  dword_14034B448 = 275;
  qword_14034B468 = 0LL;
  qword_14034B480 = 0LL;
  qword_14034B458 = 0LL;
  stru_14034B408.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_14034B408.Processor = 0LL;
  byte_14034B398 = 0;
  v3 = 196616;
  KeInitializeIRTimer((__int64)&PopBatteryWakeTimer, (__int64)xHalTimerWatchdogStop, 0LL, (unsigned __int8 *)&v3, 2);
  dword_14034B3FC = 0;
  *(_QWORD *)&stru_14034AD80.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_14034AD58 = (__int64)PopBatteryRefreshStatus;
  result = &stru_14034AD80.Header.WaitListHead;
  stru_14034AD80.Header.WaitListHead.Blink = &stru_14034AD80.Header.WaitListHead;
  stru_14034AD80.Header.WaitListHead.Flink = &stru_14034AD80.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_14034AD60 = 0LL;
  qword_14034AD78 = 0LL;
  qword_14034AD50 = 0LL;
  stru_14034AD80.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_14034AD80.Processor = 0LL;
  return result;
}
