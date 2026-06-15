/*
 * XREFs of ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180016580
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180004700 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180018144 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001AD10 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetProcess(CAudioSession *this, struct IAudioProcess **a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 109) + 8LL))(*((_QWORD *)this + 109));
  result = 0LL;
  *a2 = (struct IAudioProcess *)*((_QWORD *)this + 109);
  return result;
}
