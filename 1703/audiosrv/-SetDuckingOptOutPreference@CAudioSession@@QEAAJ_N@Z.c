/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180091D14
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180091D50 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180094AD0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 56LL))(this) )
    return 2290679811LL;
  *((_BYTE *)this + 620) = a2;
  return 0LL;
}
