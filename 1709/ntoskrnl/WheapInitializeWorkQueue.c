/*
 * XREFs of WheapInitializeWorkQueue @ 0x14015C4C0
 * Callers:
 *     WheaInitialize @ 0x140840C7C (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.Reserved, 0, 0x88uLL);
  *((_QWORD *)&WheapDispatchPtr.Reserved + 1) = &WheapDispatchPtr.Reserved;
  WheapDispatchPtr.Reserved = &WheapDispatchPtr.Reserved;
  qword_14035ADB8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_14035ADF0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_14035AE00 = (__int64)WheapProcessWorkQueueItem;
  qword_14035AD90 = 0LL;
  dword_14035ADA0 = 275;
  qword_14035ADC0 = (__int64)&WheapDispatchPtr.Reserved;
  qword_14035ADD8 = 0LL;
  qword_14035ADB0 = 0LL;
  qword_14035ADF8 = (__int64)&WheapDispatchPtr.Reserved;
  qword_14035ADE0 = 0LL;
  return result;
}
