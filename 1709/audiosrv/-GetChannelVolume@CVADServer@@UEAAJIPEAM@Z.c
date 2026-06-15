/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x18008B610
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18007CA3C (-GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(CVADServer *this, unsigned int a2, float *a3)
{
  CAudioStream *v6; // rcx
  int StreamChannelVolume; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x36u,
      (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
      this,
      a2);
  }
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( v6 && *((_DWORD *)this + 46) )
    StreamChannelVolume = CAudioStream::GetStreamChannelVolume(v6, a2, a3);
  else
    StreamChannelVolume = -2004287487;
  if ( StreamChannelVolume < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelVolume", 2329, StreamChannelVolume);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)StreamChannelVolume;
}
