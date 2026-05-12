/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C0009B90
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C0031A30 (RaidQosSupportedCommand.c)
 */

__int64 StorpTelemetryCollectPerfData(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  int v7; // r15d
  union _LARGE_INTEGER v8; // rcx
  unsigned int v9; // ebp
  bool v10; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  char v15; // r15
  _QWORD *v16; // rcx
  __int64 *v17; // r10
  __int64 v18; // rax
  int v19; // r9d
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // ebx
  _QWORD *v24; // rcx
  unsigned __int64 *v25; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rcx
  int v29; // edx
  int v30; // eax
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned __int64 v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+68h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+78h] [rbp+20h]
  __int64 v36; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v36 = va_arg(va1, _QWORD);
  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v3;
  v8.QuadPart = 0LL;
  v9 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v10 = UseQPCTime == 0;
    goto LABEL_5;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_60:
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v8 = PerformanceFrequency;
      v12.QuadPart = UnbiasedInterruptTime;
      goto LABEL_7;
    }
    v10 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_5:
    if ( !v10 )
    {
      PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)PerformanceFrequencya);
      v8 = PerformanceFrequency;
      v12 = PerformanceCounter;
      goto LABEL_7;
    }
    goto LABEL_60;
  }
  v12.QuadPart = 0LL;
LABEL_7:
  v13 = v12.QuadPart - *(_QWORD *)(a1 + 696);
  v33 = v13;
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_40:
      v14 = v13;
      v32 = v13;
      goto LABEL_14;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v8.QuadPart )
        return 3221225534LL;
      v27 = 10000000 * v13;
      if ( v8.QuadPart == 2343751 )
        v13 = v27 / 2343751;
      else
        v13 = v27 / v8.QuadPart;
      v33 = v13;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_40;
  if ( !v8.QuadPart )
    return 3221225534LL;
  v14 = 10000000 * v13 / v8.QuadPart;
  v32 = v14;
LABEL_14:
  if ( *(_BYTE *)(a3 + 2576)
    && (unsigned __int8)RaidQosSupportedCommand(a2)
    && v14 + *(_QWORD *)(a1 + 688) >= *(_QWORD *)(a3 + 2616) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 1800));
    v14 = v32;
    v13 = v33;
  }
  if ( v7 )
    return 3221225473LL;
  v15 = v36;
  if ( (((_BYTE)v36 - 8) & 0x5D) != 0 )
  {
    if ( (_BYTE)v36 == 66 )
    {
      v28 = (__int64 *)qword_1C00553A0;
      v29 = 1;
    }
    else
    {
      if ( (_BYTE)v36 != 53 && (_BYTE)v36 != 0x91 )
        return 3221225473LL;
      v28 = (__int64 *)qword_1C00553A0;
      v29 = 0;
    }
    v30 = 4;
    while ( v13 > *v28 )
    {
      ++v9;
      ++v28;
      if ( v9 >= 4 )
        goto LABEL_49;
    }
    v30 = v9;
LABEL_49:
    v22 = dword_1C00553BC;
    v23 = v29 + v30 * (unsigned __int16)qword_1C0055390;
    goto LABEL_26;
  }
  v16 = qword_1C0055370;
  v17 = (__int64 *)qword_1C0055378;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v18 = *(unsigned int *)(a2 + 60);
  else
    v18 = *(unsigned int *)(a2 + 16);
  v19 = 3;
  v20 = 0;
  while ( v18 > *v16 )
  {
    ++v20;
    ++v16;
    if ( v20 >= 3 )
      goto LABEL_22;
  }
  v19 = v20;
LABEL_22:
  v21 = 4;
  while ( v13 > *v17 )
  {
    ++v9;
    ++v17;
    if ( v9 >= 4 )
      goto LABEL_25;
  }
  v21 = v9;
LABEL_25:
  v22 = dword_1C005538C;
  v23 = ((((_BYTE)v36 - 8) & 0x5F) != 0)
      + (unsigned __int16)TelemetryPerfContext * (v19 + v21 * HIWORD(TelemetryPerfContext));
LABEL_26:
  v24 = (_QWORD *)(*(_QWORD *)(a3 + 1848)
                 + KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors * (unsigned int)dword_1C00553C4
                 + 8 * (v23 + (unsigned __int64)v22));
  ++*v24;
  if ( ((v15 - 8) & 0x5D) != 0 )
  {
    if ( v15 == 53 || v15 == -111 )
    {
      if ( *(_QWORD *)(a3 + 1880) < v14 )
        *(_QWORD *)(a3 + 1880) = v14;
    }
    else if ( v15 == 66 && *(_QWORD *)(a3 + 1888) < v14 )
    {
      *(_QWORD *)(a3 + 1888) = v14;
    }
  }
  else if ( *(_QWORD *)(a3 + 1872) )
  {
    v25 = (unsigned __int64 *)(*(_QWORD *)(a3 + 1872)
                             + dword_1C00553D8
                             * (KeGetCurrentNodeNumber()
                              % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1)));
    if ( *v25 < v14 )
      *v25 = v14;
  }
  return 0LL;
}
