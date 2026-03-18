/*
 * XREFs of ?CalculatePresentAndGlitchDeadlines@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C620
 * Callers:
 *     ?ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C784 (-ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndependentRefreshRateScheduler::CalculatePresentAndGlitchDeadlines(
        CIndependentRefreshRateScheduler *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r10
  int v9; // r11d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  if ( *((_DWORD *)this + 6364) )
  {
    *(_QWORD *)(*((_QWORD *)this + 2685) + 1304LL) += *((_QWORD *)this + 18);
    *(_QWORD *)(*((_QWORD *)this + 2685) + 1296LL) += *((_QWORD *)this + 20);
    *(_BYTE *)(*((_QWORD *)this + 2685) + 1312LL) = 1;
    v2 = *((_QWORD *)this + 2685);
    if ( *(_BYTE *)(v2 + 648) )
    {
      v3 = *(_DWORD *)(v2 + 100) + 2;
LABEL_6:
      *(_DWORD *)(v2 + 164) = v3;
    }
  }
  else
  {
    v2 = *((_QWORD *)this + 2685);
    if ( *(_BYTE *)(v2 + 648) )
    {
      v3 = *(_DWORD *)(v2 + 100) + 1;
      goto LABEL_6;
    }
  }
  v4 = *((_QWORD *)this + 2685);
  if ( *(_BYTE *)(v4 + 648) )
  {
    v5 = 1;
    if ( *(_DWORD *)(v4 + 656) > 1u )
    {
      do
      {
        v6 = *((_QWORD *)this + 2685);
        v7 = 32LL * v5;
        v8 = v5;
        v9 = *(_DWORD *)(v7 + v6 + 680);
        if ( *(_QWORD *)(v6 + 8LL * v5 + 520) )
        {
          v10 = *(_QWORD *)(v7 + v6 + 688);
          v11 = *(_QWORD *)(v6 + 1296);
          if ( v11 > v10 )
            v9 += (v11 - v10) / *(_QWORD *)(v6 + 8LL * v5 + 520);
        }
        if ( (*(_QWORD *)(v6 + 8LL * v5 + 520) + (*(_QWORD *)(v6 + 520) >> 1)) / *(_QWORD *)(v6 + 520) < 2uLL )
          *(_DWORD *)(v6 + 4LL * v5 + 164) = v9;
        else
          *(_DWORD *)(v6 + 4LL * v5 + 164) = v9 + 1;
        ++v5;
        *(_DWORD *)(*((_QWORD *)this + 2685) + 4 * v8 + 100) = v9 + 1;
      }
      while ( v5 < *(_DWORD *)(*((_QWORD *)this + 2685) + 656LL) );
    }
  }
  CScheduleStatistics::TraceFrameVsyncDeadlines(
    *(_DWORD *)(*((_QWORD *)this + 2685) + 96LL),
    *((const struct CFrameInfo **)this + 2685));
}
