/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790
 * Callers:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002FE90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032BE0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034980 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180046980 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180043F80 (-CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180043F90 (-CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180046AB8 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  char *v2; // rbx
  struct _TP_TIMER *v3; // rdx
  void (__fastcall *v4)(CAudioThreadPool *, struct _TP_TIMER *); // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  struct _TP_WORK *v7; // rdx
  void (*v8)(void); // rax
  __int64 v9; // rax
  wchar_t Buffer[1024]; // [rsp+30h] [rbp-818h] BYREF

  if ( *((_BYTE *)this + 944) )
  {
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 4) + 64LL))((char *)this - 32);
    StringCchPrintfW(Buffer, 1024LL, L"Session %ws is missing a transition to inactive", v9, -2LL);
    LogProductionAssert(0x7206F6uLL, Buffer);
  }
  v2 = (char *)this - 32;
  if ( *((_QWORD *)this + 71) )
  {
    CAudioSession::CancelInactiveTimer((CAudioSession *)((char *)this - 32));
    v3 = (struct _TP_TIMER *)*((_QWORD *)v2 + 75);
    v4 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL);
    if ( v4 == CAudioThreadPool::CloseTimer )
      CAudioThreadPool::CloseTimer(ThreadPool, v3);
    else
      v4(ThreadPool, v3);
    *((_QWORD *)v2 + 75) = 0LL;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 93);
  v6 = (_QWORD *)*((_QWORD *)this + 94);
  while ( v5 != v6 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 32LL))(*v5, v2);
    ++v5;
  }
  v7 = (struct _TP_WORK *)*((_QWORD *)v2 + 76);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)ThreadPool + 64LL);
    if ( (char *)v8 == (char *)CAudioThreadPool::CloseWork )
      CAudioThreadPool::CloseWork(ThreadPool, v7);
    else
      v8();
    *((_QWORD *)v2 + 76) = 0LL;
  }
}
