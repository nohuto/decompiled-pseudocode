/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800AF6C4
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x1800AF700 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800B45B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 56LL))(this) )
    return 2290679811LL;
  *((_BYTE *)this + 484) = a2;
  return 0LL;
}
