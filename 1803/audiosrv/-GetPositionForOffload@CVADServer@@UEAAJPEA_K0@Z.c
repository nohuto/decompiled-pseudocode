/*
 * XREFs of ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x1800C1410
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPositionForOffload@CAudioStream@@QEAAJPEA_K0@Z @ 0x1800B58B0 (-GetPositionForOffload@CAudioStream@@QEAAJPEA_K0@Z.c)
 *     WPP_SF_ii @ 0x1800C6680 (WPP_SF_ii.c)
 */

__int64 __fastcall CVADServer::GetPositionForOffload(CVADServer *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  CAudioStream *v6; // rcx
  __int64 v7; // rdx
  int PositionForOffload; // ebx
  __int64 v9; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) || (v6 = (CAudioStream *)*((_QWORD *)this + 24)) == 0LL )
  {
    PositionForOffload = -2004287487;
    goto LABEL_12;
  }
  PositionForOffload = CAudioStream::GetPositionForOffload(v6, a2, a3);
  if ( PositionForOffload < 0 )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetPositionForOffload", 2239, PositionForOffload);
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v9, *a2, *a3);
  }
LABEL_8:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)PositionForOffload;
}
