/*
 * XREFs of PopGetIdleTimesCallback @ 0x14008D170
 * Callers:
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14011616C (PpmContinueActiveTimeAccumulation.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // edi
  LARGE_INTEGER v8; // rbp
  _DWORD *v9; // r13
  _QWORD *v10; // r12
  signed __int64 IdleTimeEntry; // rax
  signed __int64 v12; // rtt
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v15; // rcx
  unsigned int v16; // edx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned __int64 v19; // rax
  int v20; // eax
  _PROC_IDLE_ACCOUNTING *v21; // r11
  _PPM_IDLE_STATES *v22; // r10
  unsigned int i; // r8d
  unsigned int StateCount; // eax
  unsigned __int8 *v25; // rcx
  unsigned __int8 v26; // al
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rdx
  _QWORD *v30; // rax
  unsigned __int64 TotalTime; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // [rsp+20h] [rbp-58h]
  _QWORD *v36; // [rsp+28h] [rbp-50h]
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+30h] [rbp-48h]
  _PPM_IDLE_STATES *IdleStates; // [rsp+38h] [rbp-40h]
  ULONG SpareLong0; // [rsp+80h] [rbp+8h]
  unsigned int KernelTime; // [rsp+98h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != a1;
  v8.QuadPart = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( CurrentPrcb != a1 )
  {
    _m_prefetchw((const void *)&a1->PowerState.IdleTimeEntry);
    IdleTimeEntry = a1->PowerState.IdleTimeEntry;
    do
    {
      v12 = IdleTimeEntry;
      IdleTimeEntry = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&a1->PowerState.IdleTimeEntry,
                        IdleTimeEntry,
                        IdleTimeEntry);
    }
    while ( v12 != IdleTimeEntry );
    v8.QuadPart = IdleTimeEntry;
    if ( !IdleTimeEntry )
      return 3221225473LL;
  }
  IdleAccounting = a1->PowerState.IdleAccounting;
  IdleStates = a1->PowerState.IdleStates;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KernelTime = a1->KernelTime;
  SpareLong0 = a1->IdleThread->SchedulerApc.SpareLong0;
  if ( a2 )
  {
    memset(a2, 0, 0x30uLL);
    v21 = IdleAccounting;
    if ( IdleAccounting )
    {
      v22 = IdleStates;
      if ( IdleStates )
      {
        for ( i = 0; ; ++i )
        {
          StateCount = v21->StateCount;
          v35 = i;
          if ( v21->StateCount >= v22->ProcessorIdleCount )
            StateCount = v22->ProcessorIdleCount;
          if ( i >= StateCount )
          {
            *a2 = PpmConvertTime(v21->PriorIdleTime, PopQpcFrequency, 10000000LL);
            goto LABEL_7;
          }
          v25 = &v22->InterfaceVersion + 248 * i;
          v26 = v25[1056];
          if ( v26 == 1 )
          {
            v27 = 1;
            goto LABEL_33;
          }
          if ( v26 )
            break;
          if ( !v25[1059] )
            goto LABEL_54;
          v27 = 2 - (v25[1060] != 0);
LABEL_33:
          v28 = v27 - 1;
          if ( v28 )
          {
            v33 = v28 - 1;
            if ( v33 )
            {
              if ( v33 == 1 )
              {
                v29 = a2 + 5;
                v30 = a2 + 3;
              }
              else
              {
                v29 = 0LL;
                v30 = 0LL;
              }
            }
            else
            {
              v29 = (_DWORD *)a2 + 9;
              v30 = a2 + 2;
            }
          }
          else
          {
            v29 = a2 + 4;
            v30 = a2 + 1;
          }
          v36 = v30;
          if ( i == v22->ActualState )
          {
            v10 = v30;
            v9 = v29;
          }
          if ( v29 && v30 )
          {
            *v29 += v21->State[i].FailureCount + v21->State[i].SuccessCount;
            TotalTime = v21->State[i].TotalTime;
            if ( v22->ActualState == i )
              TotalTime += a1->PowerState.IdleTimeLast;
            v32 = PpmConvertTime(TotalTime, PopQpcFrequency, 10000000LL);
            i = v35;
            v22 = IdleStates;
            v21 = IdleAccounting;
            *v36 += v32;
          }
        }
        if ( v26 == 2 )
        {
          v27 = 2;
          goto LABEL_33;
        }
LABEL_54:
        v27 = 3;
        goto LABEL_33;
      }
    }
  }
LABEL_7:
  if ( a3 )
  {
    if ( !v7 )
      ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(
        a1,
        (LARGE_INTEGER)PerformanceCounter.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(a1->PowerState.PerfFeedback.StallTime, PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_12;
  _m_prefetchw((const void *)&a1->PowerState.IdleTimeEntry);
  v17 = a1->PowerState.IdleTimeEntry;
  do
  {
    v18 = v17;
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->PowerState.IdleTimeEntry, v17, v17);
  }
  while ( v18 != v17 );
  if ( v8.QuadPart != v17 )
    return 3221225473LL;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v8.QuadPart )
    goto LABEL_12;
  v19 = PpmConvertTime(PerformanceCounter.QuadPart - v8.QuadPart, PopQpcFrequency, 10000000LL);
  if ( v10 && v9 )
  {
    ++*v9;
    *v10 += v19;
  }
  if ( v19 > KeMaximumIncrement )
  {
    v20 = v19 / KeMaximumIncrement - 1;
    v15 = v20 + SpareLong0;
    v16 = v20 + KernelTime;
    SpareLong0 += v20;
    KernelTime += v20;
  }
  else
  {
LABEL_12:
    v15 = SpareLong0;
    v16 = KernelTime;
  }
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
    {
      *a2 += a2[1] + a2[2] + a2[3];
    }
    else
    {
      v34 = v15 * KeMaximumIncrement;
      LODWORD(v15) = SpareLong0;
      *a2 = v34;
      v16 = KernelTime;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v15;
    *(_DWORD *)(a3 + 4) = v16;
  }
  return 0LL;
}
