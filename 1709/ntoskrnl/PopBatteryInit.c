/*
 * XREFs of PopBatteryInit @ 0x140853C48
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     memset @ 0x140192F40 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  qword_140365908 = 0LL;
  qword_140365AC8 = 0LL;
  PopCB = 0LL;
  qword_140365928 = (__int64)&qword_140365920;
  qword_140365920 = (__int64)&qword_140365920;
  qword_140365AC0 = 0LL;
  qword_140365938 = (__int64)&qword_140365930;
  qword_140365930 = (__int64)&qword_140365930;
  memset(&xmmword_140365AD0, 0, 0x20uLL);
  dword_140365A90 = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_140365A28;
  LOBYTE(xmmword_140365AD0) = 1;
  byte_140365A88 = 0;
  byte_140365AA4 = 0;
  dword_140365AA0 = 0;
  dword_140365AA8 = 0;
  qword_140365AB0 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  stru_140365A08.Header.WaitListHead.Blink = &stru_140365A08.Header.WaitListHead;
  stru_140365A08.Header.WaitListHead.Flink = &stru_140365A08.Header.WaitListHead;
  *(_QWORD *)&stru_140365988.Header.Lock = 8LL;
  qword_1403659E0 = (__int64)PopBatteryWakeDpc;
  LOWORD(stru_140365A08.Header.Lock) = 1;
  stru_140365988.Header.WaitListHead.Blink = &stru_140365988.Header.WaitListHead;
  stru_140365988.Header.WaitListHead.Flink = &stru_140365988.Header.WaitListHead;
  stru_140365A08.Header.Size = 6;
  stru_140365A08.Header.SignalState = 0;
  qword_140365AB8 = 0LL;
  dword_1403659C8 = 275;
  qword_1403659E8 = 0LL;
  qword_140365A00 = 0LL;
  qword_1403659D8 = 0LL;
  stru_140365988.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140365988.Processor = 0LL;
  byte_140365918 = 0;
  v3 = 196616;
  KeInitializeIRTimer((__int64)&PopBatteryWakeTimer, (__int64)xHalTimerWatchdogStop, 0LL, (unsigned __int8 *)&v3, 2);
  dword_14036597C = 0;
  *(_QWORD *)&stru_140365500.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_1403654D8 = (__int64)PopBatteryRefreshStatus;
  result = &stru_140365500.Header.WaitListHead;
  stru_140365500.Header.WaitListHead.Blink = &stru_140365500.Header.WaitListHead;
  stru_140365500.Header.WaitListHead.Flink = &stru_140365500.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_1403654E0 = 0LL;
  qword_1403654F8 = 0LL;
  qword_1403654D0 = 0LL;
  stru_140365500.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140365500.Processor = 0LL;
  return result;
}
