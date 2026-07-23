/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x140204F5C
 * Callers:
 *     KiInterruptDispatchCommon @ 0x140204C2C (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x140006060 (KiCallInterruptServiceRoutine.c)
 *     PerfInfoLogInterrupt @ 0x140010A80 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // r14
  unsigned __int8 CurrentIrql; // r15
  char v7; // r13
  bool v8; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r13
  char v13; // [rsp+30h] [rbp-A9h]
  __int16 Object; // [rsp+38h] [rbp-A1h] BYREF
  char v15; // [rsp+3Ah] [rbp-9Fh]
  int v16; // [rsp+3Ch] [rbp-9Dh]
  _QWORD v17[4]; // [rsp+40h] [rbp-99h] BYREF
  struct _KTIMER v18; // [rsp+60h] [rbp-79h] BYREF
  int v19[4]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-29h]
  void *v21; // [rsp+B8h] [rbp-21h]
  __int16 *p_Object; // [rsp+C0h] [rbp-19h]
  __int64 v23; // [rsp+D8h] [rbp-1h]
  LARGE_INTEGER v24[3]; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *(_BYTE *)(a1 + 93);
  memset(v24, 0, sizeof(v24));
  CurrentIrql = a2;
  v13 = 0;
  v7 = 1;
  v8 = 0;
  if ( v3 )
  {
    if ( a2 != v3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v3);
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
      v17[2] = a1;
      v17[0] = v17;
      Object = 1;
      v18.Header.WaitListHead.Blink = &v18.Header.WaitListHead;
      v15 = 6;
      v18.Header.WaitListHead.Flink = &v18.Header.WaitListHead;
      v21 = &KiPassiveIsrWatchdog;
      p_Object = &Object;
      v16 = 0;
      v18.DueTime.QuadPart = 0LL;
      *(_QWORD *)&v18.Processor = 0LL;
      v19[0] = 275;
      v23 = 0LL;
      v20 = 0LL;
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
  if ( v3 )
  {
    if ( CurrentIrql != v3 )
      __writecr8(CurrentIrql);
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v11 == 1;
}
