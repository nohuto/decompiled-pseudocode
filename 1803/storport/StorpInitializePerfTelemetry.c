/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C0043214
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C00675A4 (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C0046E68 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rdx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset(&TelemetryPerfContext, 0, 0x80uLL);
  v0 = 0;
  memset(&TelemetryPerfContext, 0, 0x30uLL);
  dword_1C00563A8 = 40;
  dword_1C0056384 = 5;
  TelemetryPerfContext = 262146;
  v1 = 2LL;
  memset(&qword_1C00563B0, 0, 0x30uLL);
  dword_1C00563DC = 40;
  qword_1C00563B0 = 327682LL;
  dword_1C00563D8 = 10;
  dword_1C00563AC = 0;
  dword_1C00563E0 = 50;
  LODWORD(dword_1C00563E4) = 448;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1C00563E4 * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C00563F0 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    P = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * (unsigned __int16)TelemetryPerfContext, 0x65546152u);
    if ( !P )
      goto LABEL_34;
  }
  else
  {
    P = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    qword_1C0056390 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(TelemetryPerfContext), 0x65546152u);
    if ( !qword_1C0056390 )
      goto LABEL_34;
  }
  else
  {
    qword_1C0056390 = 0LL;
  }
  if ( (_WORD)dword_1C0056384 )
  {
    qword_1C0056398 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)dword_1C0056384,
                        0x65546152u);
    if ( !qword_1C0056398 )
      goto LABEL_34;
  }
  else
  {
    qword_1C0056398 = 0LL;
  }
  if ( HIWORD(dword_1C0056384) )
  {
    qword_1C00563A0 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(dword_1C0056384), 0x65546152u);
    if ( !qword_1C00563A0 )
      goto LABEL_34;
  }
  else
  {
    qword_1C00563A0 = 0LL;
  }
  if ( (_WORD)qword_1C00563B0 )
  {
    qword_1C00563B8 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)qword_1C00563B0,
                        0x65546152u);
    if ( !qword_1C00563B8 )
      goto LABEL_34;
  }
  else
  {
    qword_1C00563B8 = 0LL;
  }
  if ( WORD1(qword_1C00563B0) )
  {
    qword_1C00563C0 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(qword_1C00563B0), 0x65546152u);
    if ( !qword_1C00563C0 )
      goto LABEL_34;
  }
  else
  {
    qword_1C00563C0 = 0LL;
  }
  if ( WORD2(qword_1C00563B0) )
  {
    qword_1C00563C8 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C00563B0), 0x65546152u);
    if ( !qword_1C00563C8 )
      goto LABEL_34;
  }
  else
  {
    qword_1C00563C8 = 0LL;
  }
  if ( HIWORD(qword_1C00563B0) )
  {
    qword_1C00563D0 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(qword_1C00563B0), 0x65546152u);
    if ( !qword_1C00563D0 )
    {
LABEL_34:
      StorpUninitializePerfTelemetry();
      g_StorpTraceLoggingPerformanceEnabled = 0;
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    qword_1C00563D0 = 0LL;
  }
  v3 = 0LL;
  v4 = 0LL;
  v5 = 2LL;
  do
  {
    *(_QWORD *)((char *)P + v3) = v4++;
    v3 += 8LL;
    --v5;
  }
  while ( v5 );
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    *(_QWORD *)((char *)qword_1C00563B8 + v6) = v7++;
    v6 += 8LL;
    --v1;
  }
  while ( v1 );
  v8 = UseQPCTime == 0;
  *(_QWORD *)qword_1C0056390 = 4096LL;
  *((_QWORD *)qword_1C0056390 + 1) = 0x10000LL;
  *((_QWORD *)qword_1C0056390 + 2) = 0x100000LL;
  *((_QWORD *)qword_1C0056390 + 3) = 0x7FFFFFFFFFFFFFFFLL;
  if ( v8 || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    v9 = 51200000LL;
    *(_QWORD *)qword_1C0056398 = 160000LL;
    *((_QWORD *)qword_1C0056398 + 1) = 640000LL;
    *((_QWORD *)qword_1C0056398 + 2) = 20480000LL;
    *((_QWORD *)qword_1C0056398 + 3) = 51200000LL;
    *((_QWORD *)qword_1C0056398 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C00563C0 = 640000LL;
    *((_QWORD *)qword_1C00563C0 + 1) = 2560000LL;
    *((_QWORD *)qword_1C00563C0 + 2) = 10240000LL;
  }
  else
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)qword_1C0056398 = 2 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0056398 + 1) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C0056398 + 2) = (PerformanceFrequency.QuadPart << 11) / 1000;
    *((_QWORD *)qword_1C0056398 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0056398 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C00563C0 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C00563C0 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_1C00563C0 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    v9 = 5120 * PerformanceFrequency.QuadPart / 1000;
  }
  *((_QWORD *)qword_1C00563C0 + 3) = v9;
  *((_QWORD *)qword_1C00563C0 + 4) = 0x7FFFFFFFFFFFFFFFLL;
  dword_1C00563F8 = 8;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C00563FC) = dword_1C00563F8 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v0;
}
