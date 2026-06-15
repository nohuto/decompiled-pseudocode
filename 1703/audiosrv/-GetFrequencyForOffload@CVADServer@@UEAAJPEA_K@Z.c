/*
 * XREFs of ?GetFrequencyForOffload@CVADServer@@UEAAJPEA_K@Z @ 0x1800A09D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z @ 0x180095C70 (-GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z.c)
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
    AudSrvTraceLoggingErrorHelper("CVADServer::GetFrequencyForOffload", 2176, FrequencyForOffload);
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, *a2);
  }
LABEL_8:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)FrequencyForOffload;
}
