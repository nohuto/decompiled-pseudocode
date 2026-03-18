/*
 * XREFs of PopBatteryInit @ 0x1408C5CA0
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14016CF68 (KeInitializeIRTimer.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  qword_1403AA268 = 0LL;
  qword_1403AA428 = 0LL;
  PopCB = 0LL;
  qword_1403AA288 = (__int64)&qword_1403AA280;
  qword_1403AA280 = (__int64)&qword_1403AA280;
  qword_1403AA420 = 0LL;
  qword_1403AA298 = (__int64)&qword_1403AA290;
  qword_1403AA290 = (__int64)&qword_1403AA290;
  memset(&xmmword_1403AA430, 0, 0x20uLL);
  dword_1403AA3F0 = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v0 = 4LL;
  v1 = &unk_1403AA388;
  LOBYTE(xmmword_1403AA430) = 1;
  byte_1403AA3E8 = 0;
  byte_1403AA404 = 0;
  dword_1403AA400 = 0;
  dword_1403AA408 = 0;
  qword_1403AA410 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  stru_1403AA368.Header.WaitListHead.Blink = &stru_1403AA368.Header.WaitListHead;
  stru_1403AA368.Header.WaitListHead.Flink = &stru_1403AA368.Header.WaitListHead;
  *(_QWORD *)&stru_1403AA2E8.Header.Lock = 8LL;
  qword_1403AA340 = (__int64)PopBatteryWakeDpc;
  LOWORD(stru_1403AA368.Header.Lock) = 1;
  stru_1403AA2E8.Header.WaitListHead.Blink = &stru_1403AA2E8.Header.WaitListHead;
  stru_1403AA2E8.Header.WaitListHead.Flink = &stru_1403AA2E8.Header.WaitListHead;
  stru_1403AA368.Header.Size = 6;
  stru_1403AA368.Header.SignalState = 0;
  qword_1403AA418 = 0LL;
  dword_1403AA328 = 275;
  qword_1403AA348 = 0LL;
  qword_1403AA360 = 0LL;
  qword_1403AA338 = 0LL;
  stru_1403AA2E8.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1403AA2E8.Processor = 0LL;
  byte_1403AA278 = 0;
  v3 = 196616;
  KeInitializeIRTimer((__int64)&PopBatteryWakeTimer, (__int64)xHalTimerWatchdogStop, 0LL, (unsigned __int8 *)&v3, 2);
  dword_1403AA2DC = 0;
  *(_QWORD *)&stru_1403A9B80.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_1403A9B58 = (__int64)PopBatteryRefreshStatus;
  result = &stru_1403A9B80.Header.WaitListHead;
  stru_1403A9B80.Header.WaitListHead.Blink = &stru_1403A9B80.Header.WaitListHead;
  stru_1403A9B80.Header.WaitListHead.Flink = &stru_1403A9B80.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_1403A9B60 = 0LL;
  qword_1403A9B78 = 0LL;
  qword_1403A9B50 = 0LL;
  stru_1403A9B80.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1403A9B80.Processor = 0LL;
  return result;
}
