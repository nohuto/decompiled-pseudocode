/*
 * XREFs of ?Release@CAudioSession@@UEAAKXZ @ 0x180018410
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180015510 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180017090 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180018DF0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002F440 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?Release@CAudioSession@@W7EAAKXZ @ 0x180036D00 (-Release@CAudioSession@@W7EAAKXZ.c)
 *     ?Release@CAudioSession@@WBA@EAAKXZ @ 0x180036D10 (-Release@CAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CAudioSession@@WBI@EAAKXZ @ 0x180036D20 (-Release@CAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CAudioSession@@WCA@EAAKXZ @ 0x180036D30 (-Release@CAudioSession@@WCA@EAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180019F00 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::Release(CAudioSession *this)
{
  char *v1; // rbx
  unsigned __int32 v2; // edi
  void (__fastcall *v4)(CAudioSession *__hidden); // rax
  CAudioSession *v5; // rcx

  v1 = (char *)this + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v4 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v1 + 32LL);
    v5 = (CAudioSession *)((char *)this + 32);
    if ( v4 == CAudioSession::FinalRelease )
      CAudioSession::FinalRelease(v5);
    else
      v4(v5);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
