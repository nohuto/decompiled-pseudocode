/*
 * XREFs of ?GetFrequencyForOffload@CVADServer@@UEAAJPEA_K@Z @ 0x18008B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z @ 0x18007C8AC (-GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetFrequencyForOffload(CVADServer *this, unsigned __int64 *a2)
{
  CAudioStream *v4; // rcx
  int FrequencyForOffload; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) || (v4 = (CAudioStream *)*((_QWORD *)this + 24)) == 0LL )
  {
    FrequencyForOffload = -2004287487;
    goto LABEL_12;
  }
  FrequencyForOffload = CAudioStream::GetFrequencyForOffload(v4, a2);
  if ( FrequencyForOffload < 0 )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetFrequencyForOffload", 2119, FrequencyForOffload);
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, *a2);
  }
LABEL_8:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)FrequencyForOffload;
}
