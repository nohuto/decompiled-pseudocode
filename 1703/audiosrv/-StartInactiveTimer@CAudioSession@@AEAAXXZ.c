/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800144B0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180015990 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18007A7E0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180024230 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::StartInactiveTimer(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rdx
  void (__fastcall *v3)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  struct _FILETIME v4; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 103LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this);
  }
  v2 = this[92];
  v4 = (struct _FILETIME)(-10000LL * *((unsigned int *)this + 96));
  v3 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
  if ( v3 == CAudioThreadPool::SetTimer )
    CAudioThreadPool::SetTimer(ThreadPool, v2, &v4, 0, 0x64u);
  else
    v3(ThreadPool, v2, &v4, 0, 100u);
}
