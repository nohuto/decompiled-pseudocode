/*
 * XREFs of ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x18008F570
 * Callers:
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x18008F690 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdg @ 0x1800877E4 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CAudioSession::SetChannelVolume(
        const wchar_t **this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  unsigned int v9; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v11; // [rsp+48h] [rbp-20h]

  v5 = a2;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this[108]);
  }
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 110);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v5 < *((_DWORD *)this + 258) )
  {
    *(float *)&this[130][2 * v5] = a3;
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    LOBYTE(v9) = 0;
    (*((void (__fastcall **)(char *, __int64, const struct _GUID *, _QWORD, unsigned int, _QWORD))this[2] + 3))(
      (char *)this + 16,
      1LL,
      a4,
      (unsigned int)v5,
      v9,
      0LL);
  }
  else
  {
    v7 = -2147024809;
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetChannelVolume", 1243, -2147024809);
  }
  return v7;
}
