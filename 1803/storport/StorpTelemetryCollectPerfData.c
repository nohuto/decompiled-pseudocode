/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C000C510
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C002E430 (RaidQosSupportedCommand.c)
 */

__int64 StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  int v7; // ebp
  union _LARGE_INTEGER v8; // rcx
  unsigned int v9; // r14d
  bool v10; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  char v17; // bp
  _QWORD *v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  unsigned int v22; // r8d
  int v23; // eax
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  ULONG CurrentProcessorNumber; // eax
  unsigned int v27; // r8d
  _QWORD *v28; // rcx
  unsigned __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 *v35; // rcx
  int v36; // edx
  int v37; // eax
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+60h] [rbp+8h]
  __int64 v40; // [rsp+68h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+78h] [rbp+20h]
  __int64 v43; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
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
LABEL_51:
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
    goto LABEL_51;
  }
  v12.QuadPart = 0LL;
LABEL_7:
  v13 = v12.QuadPart - a1[87];
  v14 = v13;
  v40 = v13;
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_52:
      v16 = v13;
      v39 = v13;
      goto LABEL_16;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v8.QuadPart )
        return 3221225534LL;
      v14 = 10000000 * v13 / v8.QuadPart;
      v13 = v14;
      v40 = v14;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_52;
  if ( !v8.QuadPart )
    return 3221225534LL;
  v15 = 10000000 * v14;
  if ( v8.QuadPart == 10000000 )
    v16 = v15 / 10000000;
  else
    v16 = v15 / v8.QuadPart;
  v39 = v16;
LABEL_16:
  if ( *(_BYTE *)(a3 + 2624) && (unsigned __int8)RaidQosSupportedCommand(a2) && v16 + a1[86] >= *(_QWORD *)(a3 + 2664) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 1832));
    v16 = v39;
    v13 = v40;
  }
  if ( v7 )
    return 3221225473LL;
  v17 = v43;
  if ( (((_BYTE)v43 - 8) & 0x5D) == 0 )
  {
    v18 = qword_1C0056390;
    v19 = (__int64 *)qword_1C0056398;
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v20 = *(unsigned int *)(a2 + 60);
    else
      v20 = *(unsigned int *)(a2 + 16);
    v21 = 3;
    v22 = 0;
    while ( v20 > *v18 )
    {
      ++v22;
      ++v18;
      if ( v22 >= 3 )
        goto LABEL_24;
    }
    v21 = v22;
LABEL_24:
    v23 = 4;
    while ( v13 > *v19 )
    {
      ++v9;
      ++v19;
      if ( v9 >= 4 )
        goto LABEL_27;
    }
    v23 = v9;
LABEL_27:
    v24 = dword_1C00563AC;
    v25 = ((((_BYTE)v43 - 8) & 0x5F) != 0)
        + (unsigned __int16)TelemetryPerfContext * (v21 + v23 * HIWORD(TelemetryPerfContext));
    goto LABEL_28;
  }
  if ( (_BYTE)v43 == 66 )
  {
    v35 = (__int64 *)qword_1C00563C0;
    v36 = 1;
  }
  else
  {
    if ( (_BYTE)v43 != 53 && (_BYTE)v43 != 0x91 )
      return 3221225473LL;
    v35 = (__int64 *)qword_1C00563C0;
    v36 = 0;
  }
  v37 = 4;
  while ( v13 > *v35 )
  {
    ++v9;
    ++v35;
    if ( v9 >= 4 )
      goto LABEL_63;
  }
  v37 = v9;
LABEL_63:
  v24 = dword_1C00563DC;
  v25 = v36 + v37 * (unsigned __int16)qword_1C00563B0;
LABEL_28:
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( g_RaidNumberProcessors == 24 )
    v27 = CurrentProcessorNumber % 0x18;
  else
    v27 = CurrentProcessorNumber % g_RaidNumberProcessors;
  v28 = (_QWORD *)(*(_QWORD *)(a3 + 1880) + v27 * (unsigned int)dword_1C00563E4 + 8 * (v25 + (unsigned __int64)v24));
  ++*v28;
  if ( ((v17 - 8) & 0x5D) != 0 )
  {
    if ( v17 == 53 || v17 == -111 )
    {
      if ( *(_QWORD *)(a3 + 1912) < v16 )
        *(_QWORD *)(a3 + 1912) = v16;
    }
    else if ( v17 == 66 )
    {
      if ( *(_QWORD *)(a3 + 1920) < v16 )
        *(_QWORD *)(a3 + 1920) = v16;
      return 0LL;
    }
  }
  else if ( *(_QWORD *)(a3 + 1904) )
  {
    v29 = (unsigned __int64 *)(*(_QWORD *)(a3 + 1904)
                             + dword_1C00563F8
                             * (KeGetCurrentNodeNumber()
                              % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1)));
    if ( *v29 < v16 )
      *v29 = v16;
  }
  if ( ((v17 - 10) & 0x5F) == 0 )
  {
    v30 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
    *(_QWORD *)(a3 + 2592) += v30;
    v31 = a1[96];
    if ( v31 || (v31 = a1[22]) != 0 )
    {
      if ( (*(_DWORD *)(v31 + 16) & 8) != 0 )
        v31 = *(_QWORD *)(v31 + 24);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 184);
        if ( v32 )
        {
          if ( *(_WORD *)(v32 + 16) )
          {
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v38 = *(unsigned int *)(a2 + 60);
            else
              v38 = *(unsigned int *)(a2 + 16);
            *(_QWORD *)(a3 + 2600) += v38;
          }
        }
      }
    }
  }
  return 0LL;
}
