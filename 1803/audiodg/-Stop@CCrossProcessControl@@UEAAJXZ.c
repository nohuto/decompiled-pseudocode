/*
 * XREFs of ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400548B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x1400454E8 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x140053490 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400541AC (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Stop(CCrossProcessControl *this)
{
  unsigned __int8 v2; // r8
  int v3; // ebx
  CCrossProcessBaseEndpoint *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v4 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v5 = *(_DWORD *)(*((_QWORD *)v4 + 8) + 156LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, v5, v2) )
    {
      if ( (v5 & 1) != 0 )
      {
        v3 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 156LL), 0xFFFFFFFC);
        AERTUnlockZoneHeap(
          *(void **)(*((_QWORD *)this + 1) + 120LL),
          (void *)(unsigned int)_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 144LL), 1));
        AEWMILOG_CONTROL(v6, this, v7, 7u);
      }
      else
      {
        v3 = -2005139433;
      }
    }
    else
    {
      v3 = -2005139387;
    }
  }
  else
  {
    v3 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
        v3);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Stop", 0x602u, v3);
  }
  return (unsigned int)v3;
}
