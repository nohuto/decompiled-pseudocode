/*
 * XREFs of PpmTraceExitLatency @ 0x14022973C
 * Callers:
 *     PpmIdleCompleteExitLatencyTrace @ 0x14022864C (PpmIdleCompleteExitLatencyTrace.c)
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmTraceExitLatency(__int64 a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  int v9; // r10d
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v9 = -1;
  if ( PopFxSystemLatencyLimit == -1 )
    return 0;
  if ( a5 != -1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = a5 + PpmConvertTime(PerformanceCounter.QuadPart - *a6, PopQpcFrequency, 0x989680uLL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x4000000) != 0 )
  {
    v13[4] = v9;
    v13[0] = 0;
    v14 = v13;
    v12 = a4 | 4;
    v13[1] = a3;
    v13[2] = a2;
    v13[3] = a5;
    if ( a5 != -1 )
      v12 = a4;
    v15 = 20;
    v16 = 0;
    v13[0] = v12;
    EtwTraceKernelEvent((int)&v14, 1, 0x44000000u, 4668, 1538);
  }
  return 1;
}
