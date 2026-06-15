/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800A18B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x180096A10 (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  int v5; // ebx
  CAudioStream *v7; // rcx
  __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) || (v7 = (CAudioStream *)*((_QWORD *)this + 24)) == 0LL )
  {
    v5 = -2004287487;
    goto LABEL_3;
  }
  v8 = *((_QWORD *)v7 + 6);
  if ( a2 != v8 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
        a2,
        v8);
    }
    v5 = -2147024809;
    goto LABEL_3;
  }
  v5 = CAudioStream::SetSampleRate(v7, a3);
  if ( v5 < 0 )
  {
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetStreamSampleRate", 2251, v5);
    goto LABEL_4;
  }
  v5 = 0;
LABEL_4:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
