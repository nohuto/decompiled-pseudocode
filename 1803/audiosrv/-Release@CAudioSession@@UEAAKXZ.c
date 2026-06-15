/*
 * XREFs of ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ??1?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017F1C (--1-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032BE0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180048A90 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?Release@CAudioSession@@W7EAAKXZ @ 0x180065920 (-Release@CAudioSession@@W7EAAKXZ.c)
 *     ?Release@CAudioSession@@WBA@EAAKXZ @ 0x180065930 (-Release@CAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CAudioSession@@WBI@EAAKXZ @ 0x180065940 (-Release@CAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CAudioSession@@WCA@EAAKXZ @ 0x180065950 (-Release@CAudioSession@@WCA@EAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::Release(CAudioSession *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
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
