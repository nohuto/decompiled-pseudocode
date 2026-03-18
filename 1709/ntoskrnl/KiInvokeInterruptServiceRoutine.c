/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x14020B154
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 * Callees:
 *     PerfInfoLogInterrupt @ 0x140003920 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KiCallInterruptServiceRoutine @ 0x1400A92A0 (KiCallInterruptServiceRoutine.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // si
  unsigned __int8 CurrentIrql; // r14
  char v7; // r12
  bool v8; // di
  char v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r12
  __int16 Object; // [rsp+38h] [rbp-A1h] BYREF
  char v15; // [rsp+3Ah] [rbp-9Fh]
  int v16; // [rsp+3Ch] [rbp-9Dh]
  _QWORD v17[4]; // [rsp+40h] [rbp-99h] BYREF
  struct _KTIMER v18; // [rsp+60h] [rbp-79h] BYREF
  LARGE_INTEGER v19; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-29h]
  void *v21; // [rsp+B8h] [rbp-21h]
  __int16 *p_Object; // [rsp+C0h] [rbp-19h]
  __int64 v23; // [rsp+D8h] [rbp-1h]
  __int64 v24[3]; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *(_BYTE *)(a1 + 93);
  CurrentIrql = a2;
  memset(v24, 0, sizeof(v24));
  v7 = 1;
  v8 = 0;
  v9 = 0;
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
      v19.LowPart = 275;
      KiSetTimerEx((__int64)&v18, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)&v19);
      v9 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp(v24, 0x20004000u);
  v11 = KiCallInterruptServiceRoutine(a1, v7);
  v12 = v11;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v11, (__int64)v24);
  if ( v9 && !KeCancelTimer(&v18) )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v12 == 1;
}
