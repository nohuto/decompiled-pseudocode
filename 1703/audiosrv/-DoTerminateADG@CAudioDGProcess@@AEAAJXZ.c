/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18001730C
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18001726C (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800CD960 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180016D9C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180023E70 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this)
{
  CAudioSrv *v2; // rcx
  void (__fastcall *v3)(CAudioSrv *__hidden); // rax
  unsigned int Pointer; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = (CAudioSrv *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(CAudioSrv *__hidden))(*(_QWORD *)v2 + 8LL);
    if ( v3 == CAudioSrv::PreADGTermination )
      CAudioSrv::PreADGTermination(v2);
    else
      v3(v2);
  }
  Pointer = (unsigned int)CAudioDGProcess::DoShutdownADG(this).Pointer;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return Pointer;
}
