/*
 * XREFs of EtwTraceTimedEvent @ 0x140020870
 * Callers:
 *     PfHardFaultLog @ 0x14002A488 (PfHardFaultLog.c)
 *     IopTimerDispatch @ 0x14003A410 (IopTimerDispatch.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14012B0CC (KiFinalizeTimer2Disablement.c)
 *     EtwTraceCpuCacheFlush @ 0x1402533D4 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x140254CF0 (EtwpTraceFltTimedIo.c)
 *     PerfInfoLogIpi @ 0x1402553CC (PerfInfoLogIpi.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceTimedEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool v8; // zf
  unsigned __int64 i; // rdi
  void *result; // rax
  char *v11; // rcx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+3Ch] [rbp-3Ch]
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]

  v6 = EtwpActiveSystemLoggers;
  v17 = a3;
  v18 = a4;
  v19 = 0;
  v8 = !_BitScanForward((unsigned int *)&a3, EtwpActiveSystemLoggers);
  for ( i = a2; !v8; v8 = !_BitScanForward((unsigned int *)&a3, v6) )
  {
    v6 &= v6 - 1;
    result = &EtwpGroupMasks;
    v11 = (char *)&EtwpGroupMasks + 32 * (unsigned int)a3;
    if ( v11 )
    {
      result = (void *)(i >> 29);
      if ( ((unsigned int)i & *(_DWORD *)&v11[4 * (i >> 29)] & 0x1FFFFFFF) != 0 )
      {
        v12 = (unsigned __int8)EtwpSystemLogger[2 * a3 + 1];
        v16 = 0;
        v13 = (unsigned __int8)EtwpSystemLogger[2 * a3];
        v15 = 8;
        v14 = a6 + 8LL * (v12 - 1);
        result = (void *)EtwpLogKernelEvent((unsigned int)&v14, EtwpHostSiloState, v13, 2, a1, a5);
      }
    }
  }
  return result;
}
