/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x18001AD70
 * Callers:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180016DE0 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      *((_QWORD *)this + 99),
      *((_DWORD *)this + 227));
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 227);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
