/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C001A74C
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C0060B98 (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C0045AC4 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  __int64 v0; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rdx
  unsigned int v9; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset(&TelemetryPerfContext, 0, 0x80uLL);
  memset(&TelemetryPerfContext, 0, 0x30uLL);
  dword_1C0055388 = 40;
  dword_1C0055364 = 5;
  TelemetryPerfContext = 262146;
  v0 = 2LL;
  memset(&qword_1C0055390, 0, 0x30uLL);
  dword_1C00553BC = 40;
  dword_1C00553C0 = 50;
  qword_1C0055390 = 327682LL;
  dword_1C00553B8 = 10;
  dword_1C005538C = 0;
  LODWORD(dword_1C00553C4) = 448;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1C00553C4 * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C00553D0 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    P = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * (unsigned __int16)TelemetryPerfContext, 0x65546152u);
    if ( !P )
      goto LABEL_40;
  }
  else
  {
    P = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    qword_1C0055370 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(TelemetryPerfContext), 0x65546152u);
    if ( !qword_1C0055370 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0055370 = 0LL;
  }
  if ( (_WORD)dword_1C0055364 )
  {
    qword_1C0055378 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)dword_1C0055364,
                        0x65546152u);
    if ( !qword_1C0055378 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0055378 = 0LL;
  }
  if ( HIWORD(dword_1C0055364) )
  {
    qword_1C0055380 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(dword_1C0055364), 0x65546152u);
    if ( !qword_1C0055380 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0055380 = 0LL;
  }
  if ( (_WORD)qword_1C0055390 )
  {
    qword_1C0055398 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)qword_1C0055390,
                        0x65546152u);
    if ( !qword_1C0055398 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0055398 = 0LL;
  }
  if ( WORD1(qword_1C0055390) )
  {
    qword_1C00553A0 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(qword_1C0055390), 0x65546152u);
    if ( !qword_1C00553A0 )
      goto LABEL_40;
  }
  else
  {
    qword_1C00553A0 = 0LL;
  }
  if ( WORD2(qword_1C0055390) )
  {
    qword_1C00553A8 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C0055390), 0x65546152u);
    if ( !qword_1C00553A8 )
      goto LABEL_40;
  }
  else
  {
    qword_1C00553A8 = 0LL;
  }
  if ( !HIWORD(qword_1C0055390) )
  {
    qword_1C00553B0 = 0LL;
    goto LABEL_19;
  }
  qword_1C00553B0 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(qword_1C0055390), 0x65546152u);
  if ( !qword_1C00553B0 )
  {
LABEL_40:
    v9 = -1073741801;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingPerformanceEnabled = 0;
    return v9;
  }
LABEL_19:
  v2 = 0LL;
  v3 = 0LL;
  v4 = 2LL;
  do
  {
    *(_QWORD *)((char *)P + v2) = v3++;
    v2 += 8LL;
    --v4;
  }
  while ( v4 );
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    *(_QWORD *)((char *)qword_1C0055398 + v5) = v6++;
    v5 += 8LL;
    --v0;
  }
  while ( v0 );
  v7 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  *(_QWORD *)qword_1C0055370 = 4096LL;
  *((_QWORD *)qword_1C0055370 + 1) = 0x10000LL;
  *((_QWORD *)qword_1C0055370 + 2) = 0x100000LL;
  *((_QWORD *)qword_1C0055370 + 3) = 0x7FFFFFFFFFFFFFFFLL;
  if ( v7 || !UseQPCTime )
  {
    v8 = 51200000LL;
    *(_QWORD *)qword_1C0055378 = 160000LL;
    *((_QWORD *)qword_1C0055378 + 1) = 640000LL;
    *((_QWORD *)qword_1C0055378 + 2) = 20480000LL;
    *((_QWORD *)qword_1C0055378 + 3) = 51200000LL;
    *((_QWORD *)qword_1C0055378 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C00553A0 = 640000LL;
    *((_QWORD *)qword_1C00553A0 + 1) = 2560000LL;
    *((_QWORD *)qword_1C00553A0 + 2) = 10240000LL;
  }
  else
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)qword_1C0055378 = 2 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0055378 + 1) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C0055378 + 2) = (PerformanceFrequency.QuadPart << 11) / 1000;
    *((_QWORD *)qword_1C0055378 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0055378 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C00553A0 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C00553A0 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_1C00553A0 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    v8 = 5120 * PerformanceFrequency.QuadPart / 1000;
  }
  *((_QWORD *)qword_1C00553A0 + 3) = v8;
  *((_QWORD *)qword_1C00553A0 + 4) = 0x7FFFFFFFFFFFFFFFLL;
  dword_1C00553D8 = 8;
  v9 = 0;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C00553DC) = dword_1C00553D8 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v9;
}
