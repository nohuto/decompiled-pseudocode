/*
 * XREFs of ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x18001A83C (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001B064 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026000 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800262F4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026560 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioSession::GetIdentifier(CAudioSession *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 99);
}
