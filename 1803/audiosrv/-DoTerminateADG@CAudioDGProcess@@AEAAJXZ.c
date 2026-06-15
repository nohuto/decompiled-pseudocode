/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180007DC4
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180007C38 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180107B40 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180007E44 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180007FE0 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this)
{
  CAudioSrv *v2; // rcx
  void (__fastcall *v3)(CAudioSrv *__hidden); // rax
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = (CAudioSrv *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(CAudioSrv *__hidden))(*(_QWORD *)v2 + 8LL);
    if ( v3 == CAudioSrv::PreADGTermination )
      CAudioSrv::PreADGTermination(v2);
    else
      v3(v2);
  }
  v4 = CAudioDGProcess::DoShutdownADG(this);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
