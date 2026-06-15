/*
 * XREFs of ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140054770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x1400452C8 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x140053490 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400541AC (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Start(CCrossProcessControl *this)
{
  int v2; // ebx
  void *v3; // rdx
  CCrossProcessBaseEndpoint *v4; // rax
  int v5; // ebx
  unsigned __int8 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 72LL))(*((_QWORD *)this + 1));
    if ( v2 >= 0 )
    {
      AERTLockZoneHeap(*(void **)(*((_QWORD *)this + 1) + 120LL), v3);
      v4 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
      v5 = *(_DWORD *)(*((_QWORD *)v4 + 8) + 156LL);
      if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, v5, v6) )
      {
        if ( (v5 & 1) != 0 )
        {
          v2 = -2005139434;
        }
        else
        {
          WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 1) + 128LL), 0x3E8u);
          v2 = 0;
          v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 64LL);
          _InterlockedOr((volatile signed __int32 *)(v7 + 156), 1u);
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 144LL), 1);
          AEWMILOG_CONTROL(v7, this, v8, 6u);
        }
      }
      else
      {
        v2 = -2005139387;
      }
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        (__int64)&WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
        v2);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Start", 0x5CBu, v2);
  }
  return (unsigned int)v2;
}
