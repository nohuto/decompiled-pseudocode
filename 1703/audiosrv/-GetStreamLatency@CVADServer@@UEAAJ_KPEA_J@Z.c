/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800A0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x1800960A0 (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, __int64 a2, __int64 *a3)
{
  int StreamLatency; // ebx
  CAudioStream *v8; // rcx
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a3 )
  {
    StreamLatency = -2147467261;
    goto LABEL_3;
  }
  if ( !*((_DWORD *)this + 46) || (v8 = (CAudioStream *)*((_QWORD *)this + 24)) == 0LL )
  {
    StreamLatency = -2004287487;
    goto LABEL_3;
  }
  v9 = *((_QWORD *)v8 + 6);
  if ( a2 != v9 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x35u,
        (__int64)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
        a2,
        v9);
    }
    StreamLatency = -2147024809;
    goto LABEL_3;
  }
  StreamLatency = CAudioStream::GetStreamLatency(v8, a3);
  if ( StreamLatency < 0 )
  {
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetStreamLatency", 2213, StreamLatency);
    goto LABEL_4;
  }
  StreamLatency = 0;
LABEL_4:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)StreamLatency;
}
