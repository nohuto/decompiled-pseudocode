/*
 * XREFs of ?FindFirstOutstandingFrameIndex@CIndependentRefreshRateScheduler@@AEAAIXZ @ 0x18013CCA8
 * Callers:
 *     ?RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z @ 0x18013DF10 (-RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z.c)
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndependentRefreshRateScheduler::FindFirstOutstandingFrameIndex(
        CIndependentRefreshRateScheduler *this)
{
  int v2; // ecx
  unsigned int v3; // r8d
  char i; // dl
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned int v8; // ecx
  int v9; // edx
  __int64 v10; // r10

  v2 = *((_DWORD *)this + 5369);
  v3 = -1;
  if ( v2 == -1 )
  {
    v8 = *((_DWORD *)this + 5368);
    if ( v8 != -1 )
    {
      v9 = ((_BYTE)v8 + 1) & 0xF;
      while ( v8 != v9 )
      {
        v10 = 1328LL * v8;
        if ( *((_BYTE *)this + v10 + 504) )
          break;
        if ( *((_BYTE *)this + v10 + 489) )
          v3 = v8;
        v8 = ((_BYTE)v8 - 1) & 0xF;
      }
    }
  }
  else
  {
    for ( i = v2 + 1; ; i = v6 + 1 )
    {
      v6 = i & 0xF;
      if ( v6 == v2 || v3 != -1 )
        break;
      v5 = 1328LL * v6;
      if ( *((_BYTE *)this + v5 + 489) && !*((_BYTE *)this + v5 + 504) )
        v3 = v6;
    }
  }
  return v3;
}
