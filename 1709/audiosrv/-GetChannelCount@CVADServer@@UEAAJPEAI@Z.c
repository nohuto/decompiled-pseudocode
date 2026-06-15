/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180025F70
 * Callers:
 *     AudioServerGetChannelCount @ 0x1800295E0 (AudioServerGetChannelCount.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetChannelCount(CVADServer *this, unsigned int *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, this);
  }
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 24);
  if ( v4 && *((_DWORD *)this + 46) )
  {
    v5 = 0;
    *a2 = *(_DWORD *)(v4 + 84);
  }
  else
  {
    v5 = -2004287487;
    AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelCount", 0x8C0u, -2004287487);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
