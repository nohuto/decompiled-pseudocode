/*
 * XREFs of PopGetIdleTimesCallback @ 0x140088D90
 * Callers:
 *     PoGetIdleTimes @ 0x140088C1C (PoGetIdleTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14008A990 (PpmContinueActiveTimeAccumulation.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, _QWORD *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // esi
  _DWORD *v8; // r15
  _QWORD *v9; // r12
  unsigned __int64 v10; // rbp
  signed __int64 IdleTimeEntry; // rax
  signed __int64 v12; // rtt
  _PPM_IDLE_STATES *IdleStates; // r13
  LARGE_INTEGER v15; // rcx
  ULONG v16; // ecx
  unsigned int v17; // edx
  ULONG v18; // r8d
  _PROC_IDLE_ACCOUNTING *v19; // r8
  unsigned int StateCount; // eax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // rdx
  _QWORD *v26; // r15
  unsigned __int64 TotalTime; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  unsigned __int64 v30; // rax
  int v31; // eax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-58h]
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+28h] [rbp-50h]
  _DWORD *v34; // [rsp+30h] [rbp-48h]
  _QWORD *v35; // [rsp+38h] [rbp-40h]
  unsigned int KernelTime; // [rsp+80h] [rbp+8h]
  ULONG SpareLong0; // [rsp+98h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != a1;
  v8 = 0LL;
  v9 = 0LL;
  v34 = 0LL;
  v10 = 0LL;
  v35 = 0LL;
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
    v10 = IdleTimeEntry;
    if ( !IdleTimeEntry )
      return 3221225473LL;
  }
  IdleStates = a1->PowerState.IdleStates;
  IdleAccounting = a1->PowerState.IdleAccounting;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = PerformanceCounter;
  KernelTime = a1->KernelTime;
  SpareLong0 = a1->IdleThread->SchedulerApc.SpareLong0;
  if ( !a2 )
    goto LABEL_7;
  memset(a2, 0, 0x30uLL);
  v19 = IdleAccounting;
  if ( IdleAccounting && IdleStates )
  {
    while ( 1 )
    {
      StateCount = v19->StateCount;
      if ( v19->StateCount >= IdleStates->ProcessorIdleCount )
        StateCount = IdleStates->ProcessorIdleCount;
      if ( (unsigned int)v9 >= StateCount )
      {
        v8 = v34;
        v9 = v35;
        *a2 = PpmConvertTime(v19->PriorIdleTime, PopQpcFrequency, 10000000LL);
        break;
      }
      v21 = (unsigned int)v9;
      if ( IdleStates->State[v21].StateType )
      {
        if ( IdleStates->State[v21].StateType == 1 )
        {
          v22 = 1;
          goto LABEL_27;
        }
        if ( IdleStates->State[v21].StateType == 2 )
        {
          v22 = 2;
          goto LABEL_27;
        }
      }
      else if ( IdleStates->State[v21].ContextRetained )
      {
        v22 = 2 - (IdleStates->State[v21].CacheCoherent != 0);
        goto LABEL_27;
      }
      v22 = 3;
LABEL_27:
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          if ( v24 == 1 )
          {
            v25 = a2 + 5;
            v26 = a2 + 3;
          }
          else
          {
            v25 = 0LL;
            v26 = 0LL;
          }
        }
        else
        {
          v25 = (_DWORD *)a2 + 9;
          v26 = a2 + 2;
        }
      }
      else
      {
        v25 = a2 + 4;
        v26 = a2 + 1;
      }
      if ( (_DWORD)v9 == IdleStates->ActualState )
      {
        v35 = v26;
        v34 = v25;
      }
      if ( v25 && v26 )
      {
        *v25 += v19->State[(unsigned int)v9].FailureCount + v19->State[(unsigned int)v9].SuccessCount;
        TotalTime = v19->State[(unsigned int)v9].TotalTime;
        if ( IdleStates->ActualState == (_DWORD)v9 )
          TotalTime += a1->PowerState.IdleTimeLast;
        *v26 += PpmConvertTime(TotalTime, PopQpcFrequency, 10000000LL);
        v19 = IdleAccounting;
      }
      LODWORD(v9) = (_DWORD)v9 + 1;
    }
  }
  v15 = PerformanceCounter;
LABEL_7:
  if ( a3 )
  {
    if ( !v7 )
      ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(a1, (LARGE_INTEGER)v15.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(a1->PowerState.PerfFeedback.StallTime, PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_12;
  _m_prefetchw((const void *)&a1->PowerState.IdleTimeEntry);
  v28 = a1->PowerState.IdleTimeEntry;
  do
  {
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->PowerState.IdleTimeEntry, v28, v28);
  }
  while ( v29 != v28 );
  if ( v10 != v28 )
    return 3221225473LL;
  if ( PerformanceCounter.QuadPart > v10 )
  {
    v30 = PpmConvertTime(PerformanceCounter.QuadPart - v10, PopQpcFrequency, 10000000LL);
    if ( v9 && v8 )
    {
      ++*v8;
      *v9 += v30;
    }
    v16 = KeMaximumIncrement;
    if ( v30 > KeMaximumIncrement )
    {
      v31 = v30 / KeMaximumIncrement - 1;
      v18 = v31 + SpareLong0;
      v17 = v31 + KernelTime;
      KernelTime += v31;
      goto LABEL_14;
    }
  }
  else
  {
LABEL_12:
    v16 = KeMaximumIncrement;
  }
  v17 = KernelTime;
  v18 = SpareLong0;
LABEL_14:
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
    {
      *a2 += a2[1] + a2[2] + a2[3];
    }
    else
    {
      *a2 = v18 * (unsigned __int64)v16;
      v17 = KernelTime;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v18;
    *(_DWORD *)(a3 + 4) = v17;
  }
  return 0LL;
}
