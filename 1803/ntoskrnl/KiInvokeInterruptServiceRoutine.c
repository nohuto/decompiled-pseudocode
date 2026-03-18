/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x1402494EC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402491BC (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KiCallInterruptServiceRoutine @ 0x14007EA00 (KiCallInterruptServiceRoutine.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x1400AAE80 (PerfInfoLogInterrupt.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  unsigned __int8 v6; // di
  char v7; // r13
  bool v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // si
  char v13; // [rsp+30h] [rbp-D0h]
  __int16 Object; // [rsp+38h] [rbp-C8h] BYREF
  char v15; // [rsp+3Ah] [rbp-C6h]
  int v16; // [rsp+3Ch] [rbp-C4h]
  _QWORD v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KTIMER v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  void *v21; // [rsp+B8h] [rbp-48h]
  __int16 *p_Object; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER v24[4]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v24, 0, sizeof(v24));
  v6 = *(_BYTE *)(a1 + 93);
  v13 = 0;
  v7 = 1;
  v8 = 0;
  if ( v6 )
  {
    if ( CurrentIrql != v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v7 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      *(_QWORD *)&v18.Header.Lock = 8LL;
      v17[1] = v17;
      v16 = 0;
      v17[0] = v17;
      v18.DueTime.QuadPart = 0LL;
      v18.Header.WaitListHead.Blink = &v18.Header.WaitListHead;
      v18.Header.WaitListHead.Flink = &v18.Header.WaitListHead;
      v21 = &KiPassiveIsrWatchdog;
      *(_QWORD *)&v18.Processor = 0LL;
      v23 = 0LL;
      v20 = 0LL;
      p_Object = &Object;
      v17[2] = a1;
      Object = 1;
      v15 = 6;
      v19[0] = 275;
      KiSetTimerEx((__int64)&v18, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v19);
      v13 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp(v24, 0x20004000u);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  v11 = v10;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v24);
  if ( v13 && !KeCancelTimer(&v18) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( v6 )
  {
    if ( CurrentIrql != v6 )
      __writecr8(CurrentIrql);
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v11 == 1;
}
