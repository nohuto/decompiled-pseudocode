/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x1800A1740
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x1800878A0 (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180096A68 (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3)
{
  CAudioStream *v5; // rcx
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
      this,
      a2,
      a3);
  }
  if ( a3 >= 0.0 && a3 <= 1.0 )
  {
    v10 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v5 = (CAudioStream *)*((_QWORD *)this + 24);
    if ( v5 && *((_DWORD *)this + 46) )
    {
      v6 = CAudioStream::SetStreamChannelVolume(v5, a2, a3);
      if ( !v10 )
        goto LABEL_13;
    }
    else
    {
      v6 = -2004287487;
      if ( !v10 )
        goto LABEL_14;
    }
    LeaveCriticalSection(lpCriticalSection);
LABEL_13:
    if ( v6 >= 0 )
      return (unsigned int)v6;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetChannelVolume", 2345, v6);
    return (unsigned int)v6;
  }
  return 2147942487LL;
}
