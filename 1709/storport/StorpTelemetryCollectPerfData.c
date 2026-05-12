/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C000B5A0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C0032670 (RaidQosSupportedCommand.c)
 */

__int64 StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  int v7; // esi
  union _LARGE_INTEGER v8; // rcx
  unsigned int v9; // ebp
  bool v10; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  char v15; // si
  _QWORD *v16; // rcx
  __int64 *v17; // r9
  __int64 v18; // rax
  int v19; // r8d
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // ebx
  _QWORD *v24; // rcx
  unsigned __int64 *v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 *v32; // rcx
  int v33; // edx
  int v34; // eax
  unsigned __int64 v35; // [rsp+60h] [rbp+8h]
  __int64 v36; // [rsp+68h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+78h] [rbp+20h]
  __int64 v39; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v39 = va_arg(va1, _QWORD);
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
LABEL_48:
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
    goto LABEL_48;
  }
  v12.QuadPart = 0LL;
LABEL_7:
  v13 = v12.QuadPart - a1[87];
  v36 = v13;
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_49:
      v14 = v13;
      v35 = v13;
      goto LABEL_14;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v8.QuadPart )
        return 3221225534LL;
      v13 = 10000000 * v13 / v8.QuadPart;
      v36 = v13;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_49;
  if ( !v8.QuadPart )
    return 3221225534LL;
  v14 = 10000000 * v13 / v8.QuadPart;
  v35 = v14;
LABEL_14:
  if ( *(_BYTE *)(a3 + 2624) && (unsigned __int8)RaidQosSupportedCommand(a2) && v14 + a1[86] >= *(_QWORD *)(a3 + 2664) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 1832));
    v14 = v35;
    v13 = v36;
  }
  if ( v7 )
    return 3221225473LL;
  v15 = v39;
  if ( (((_BYTE)v39 - 8) & 0x5D) == 0 )
  {
    v16 = qword_1C0056390;
    v17 = (__int64 *)qword_1C0056398;
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
    v22 = dword_1C00563AC;
    v23 = ((((_BYTE)v39 - 8) & 0x5F) != 0)
        + (unsigned __int16)TelemetryPerfContext * (v19 + v21 * HIWORD(TelemetryPerfContext));
    goto LABEL_26;
  }
  if ( (_BYTE)v39 == 66 )
  {
    v32 = (__int64 *)qword_1C00563C0;
    v33 = 1;
  }
  else
  {
    if ( (_BYTE)v39 != 53 && (_BYTE)v39 != 0x91 )
      return 3221225473LL;
    v32 = (__int64 *)qword_1C00563C0;
    v33 = 0;
  }
  v34 = 4;
  while ( v13 > *v32 )
  {
    ++v9;
    ++v32;
    if ( v9 >= 4 )
      goto LABEL_57;
  }
  v34 = v9;
LABEL_57:
  v22 = dword_1C00563DC;
  v23 = v33 + v34 * (unsigned __int16)qword_1C00563B0;
LABEL_26:
  v24 = (_QWORD *)(*(_QWORD *)(a3 + 1880)
                 + KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors * (unsigned int)dword_1C00563E4
                 + 8 * (v23 + (unsigned __int64)v22));
  ++*v24;
  if ( ((v15 - 8) & 0x5D) != 0 )
  {
    if ( v15 == 53 || v15 == -111 )
    {
      if ( *(_QWORD *)(a3 + 1912) < v14 )
        *(_QWORD *)(a3 + 1912) = v14;
    }
    else if ( v15 == 66 )
    {
      if ( *(_QWORD *)(a3 + 1920) < v14 )
        *(_QWORD *)(a3 + 1920) = v14;
      return 0LL;
    }
  }
  else if ( *(_QWORD *)(a3 + 1904) )
  {
    v25 = (unsigned __int64 *)(*(_QWORD *)(a3 + 1904)
                             + dword_1C00563F8
                             * (KeGetCurrentNodeNumber()
                              % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1)));
    if ( *v25 < v14 )
      *v25 = v14;
  }
  if ( ((v15 - 10) & 0x5F) == 0 )
  {
    v27 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
    *(_QWORD *)(a3 + 2592) += v27;
    v28 = a1[96];
    if ( v28 || (v28 = a1[22]) != 0 )
    {
      if ( (*(_DWORD *)(v28 + 16) & 8) != 0 )
        v28 = *(_QWORD *)(v28 + 24);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 184);
        if ( v29 )
        {
          if ( (unsigned __int16)*(_DWORD *)(v29 + 16) )
          {
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v30 = *(unsigned int *)(a2 + 60);
            else
              v30 = *(unsigned int *)(a2 + 16);
            *(_QWORD *)(a3 + 2600) += v30;
          }
        }
      }
    }
  }
  return 0LL;
}
