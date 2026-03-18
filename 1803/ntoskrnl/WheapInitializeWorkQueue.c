/*
 * XREFs of WheapInitializeWorkQueue @ 0x140186650
 * Callers:
 *     WheaInitialize @ 0x1408A29A0 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.Reserved, 0, 0x88uLL);
  *((_QWORD *)&WheapDispatchPtr.Reserved + 1) = &WheapDispatchPtr.Reserved;
  WheapDispatchPtr.Reserved = &WheapDispatchPtr.Reserved;
  qword_14039E3F8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_14039E430 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_14039E440 = (__int64)WheapProcessWorkQueueItem;
  qword_14039E3D0 = 0LL;
  dword_14039E3E0 = 275;
  qword_14039E400 = (__int64)&WheapDispatchPtr.Reserved;
  qword_14039E418 = 0LL;
  qword_14039E3F0 = 0LL;
  qword_14039E438 = (__int64)&WheapDispatchPtr.Reserved;
  qword_14039E420 = 0LL;
  return result;
}
