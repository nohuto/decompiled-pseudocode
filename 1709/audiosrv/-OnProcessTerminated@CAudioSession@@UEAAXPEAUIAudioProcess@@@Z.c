/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x180018BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001E264 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18001F4F0 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnProcessTerminated(struct _TP_WORK **this, struct IAudioProcess *a2)
{
  struct _TP_WORK *v3; // rdx
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 95LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this);
  }
  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 85);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)this + 102) == 2 )
  {
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  }
  else
  {
    (*((void (__fastcall **)(struct _TP_WORK **))*this + 1))(this);
    v3 = this[84];
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
    if ( v4 == CAudioThreadPool::SubmitWork )
      CAudioThreadPool::SubmitWork(ThreadPool, v3);
    else
      v4(ThreadPool, v3);
    if ( v6 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
