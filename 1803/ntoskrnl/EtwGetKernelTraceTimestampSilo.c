/*
 * XREFs of EtwGetKernelTraceTimestampSilo @ 0x1400B7A08
 * Callers:
 *     PfHardFaultRecord @ 0x1400B797C (PfHardFaultRecord.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestampSilo(LARGE_INTEGER *a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  unsigned __int64 v4; // r11
  LARGE_INTEGER *v5; // rdi
  _QWORD *v6; // r8
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v10; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( a3 )
    v6 = *(_QWORD **)(a3 + 1256);
  else
    v6 = &PspHostSiloGlobals;
  v7 = v6[108];
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4188);
    while ( _BitScanForward((unsigned int *)&a1, v8) )
    {
      v8 &= v8 - 1;
      v10 = v7 + 32LL * ((_QWORD)a1 + 132);
      if ( v10 )
      {
        if ( ((unsigned int)v4 & *(_DWORD *)(v10 + 4 * (v4 >> 29)) & 0x1FFFFFFF) != 0 )
          v3 |= 1 << *(_BYTE *)(v7 + 2LL * (_QWORD)a1 + 4173);
      }
    }
  }
  else
  {
    LOBYTE(v3) = 30;
  }
  if ( (v3 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *v5 = PerformanceCounter;
  if ( (v3 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1);
  else
    result = 0LL;
  v5[1].QuadPart = result;
  if ( (v3 & 8) != 0 )
  {
    result = __rdtsc();
    v5[2].QuadPart = result;
  }
  else
  {
    v5[2].QuadPart = 0LL;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140398AC0)(&v13);
    result = v13;
    v5[3].QuadPart = v13;
  }
  else
  {
    v5[3].QuadPart = 0LL;
  }
  return result;
}
