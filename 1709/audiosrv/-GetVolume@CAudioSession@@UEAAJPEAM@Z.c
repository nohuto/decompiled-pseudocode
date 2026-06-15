/*
 * XREFs of ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x18001ADE0
 * Callers:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180016E10 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sg @ 0x180076E18 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetVolume(CAudioSession *this, float *a2)
{
  int v4; // r8d
  bool v5; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15,
      v4,
      *((_QWORD *)this + 99),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this + 226)));
  }
  v5 = v8 == 0;
  *a2 = *((float *)this + 226);
  if ( !v5 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
