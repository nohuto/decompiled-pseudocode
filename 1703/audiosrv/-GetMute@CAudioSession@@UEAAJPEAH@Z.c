/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800163B0
 * Callers:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180020BF0 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 880);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((_QWORD *)this + 108),
      *((_DWORD *)this + 231));
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 231);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
