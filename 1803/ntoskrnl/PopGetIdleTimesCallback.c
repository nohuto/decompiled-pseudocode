/*
 * XREFs of PopGetIdleTimesCallback @ 0x1400384F0
 * Callers:
 *     PoGetIdleTimes @ 0x14003837C (PoGetIdleTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140038C54 (PpmContinueActiveTimeAccumulation.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edx
  _PROC_IDLE_ACCOUNTING *v21; // r11
  _PPM_IDLE_STATES *v22; // r9
  unsigned int i; // r8d
  unsigned int StateCount; // eax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rdx
  _QWORD *v30; // rcx
  unsigned __int64 TotalTime; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // [rsp+20h] [rbp-68h]
  _QWORD *v35; // [rsp+28h] [rbp-60h]
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+30h] [rbp-58h]
  _PPM_IDLE_STATES *IdleStates; // [rsp+38h] [rbp-50h]
  _QWORD *v38; // [rsp+40h] [rbp-48h]
  _DWORD *v39; // [rsp+48h] [rbp-40h]
  ULONG SpareLong0; // [rsp+90h] [rbp+8h]
  unsigned int KernelTime; // [rsp+A8h] [rbp+20h]

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
          v34 = i;
          v38 = v10;
          v39 = v9;
          if ( v21->StateCount >= v22->ProcessorIdleCount )
            StateCount = v22->ProcessorIdleCount;
          if ( i >= StateCount )
          {
            *a2 = PpmConvertTime(v21->PriorIdleTime, PopQpcFrequency, 10000000LL);
            break;
          }
          v25 = i;
          if ( v22->State[v25].StateType )
          {
            if ( v22->State[v25].StateType == 1 )
            {
              v26 = 1;
              goto LABEL_33;
            }
            if ( v22->State[v25].StateType == 2 )
            {
              v26 = 2;
              goto LABEL_33;
            }
          }
          else if ( v22->State[v25].ContextRetained )
          {
            v26 = 2 - (v22->State[v25].CacheCoherent != 0);
            goto LABEL_33;
          }
          v26 = 3;
LABEL_33:
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 == 1 )
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
          v10 = v30;
          v9 = v29;
          v35 = v30;
          if ( i != v22->ActualState )
          {
            v10 = v38;
            v9 = v39;
          }
          if ( v29 && v30 )
          {
            *v29 += v21->State[i].FailureCount + v21->State[i].SuccessCount;
            TotalTime = v21->State[i].TotalTime;
            if ( v22->ActualState == i )
              TotalTime += a1->PowerState.IdleTimeLast;
            v32 = PpmConvertTime(TotalTime, PopQpcFrequency, 10000000LL);
            i = v34;
            v22 = IdleStates;
            v21 = IdleAccounting;
            *v35 += v32;
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( !v7 )
      ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(
        a1,
        (LARGE_INTEGER)PerformanceCounter.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(a1->PowerState.PerfFeedback.StallTime, PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_18;
  _m_prefetchw((const void *)&a1->PowerState.IdleTimeEntry);
  v14 = a1->PowerState.IdleTimeEntry;
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->PowerState.IdleTimeEntry, v14, v14);
  }
  while ( v15 != v14 );
  if ( v8.QuadPart != v14 )
    return 3221225473LL;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v8.QuadPart )
    goto LABEL_18;
  v16 = PpmConvertTime(PerformanceCounter.QuadPart - v8.QuadPart, PopQpcFrequency, 10000000LL);
  if ( v10 && v9 )
  {
    ++*v9;
    *v10 += v16;
  }
  if ( v16 > KeMaximumIncrement )
  {
    v17 = v16 / KeMaximumIncrement - 1;
    v18 = v17 + SpareLong0;
    v19 = v17 + KernelTime;
    SpareLong0 += v17;
    KernelTime += v17;
  }
  else
  {
LABEL_18:
    v18 = SpareLong0;
    v19 = KernelTime;
  }
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
    {
      *a2 += a2[1] + a2[2] + a2[3];
    }
    else
    {
      v33 = v18 * KeMaximumIncrement;
      LODWORD(v18) = SpareLong0;
      *a2 = v33;
      v19 = KernelTime;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v18;
    *(_DWORD *)(a3 + 4) = v19;
  }
  return 0LL;
}
