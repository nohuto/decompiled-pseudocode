/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18001DA6C
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18001D9D0 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800D9A04 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18001D400 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x18002C670 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
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
  v2 = (CAudioSrv *)*((_QWORD *)this + 18);
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
