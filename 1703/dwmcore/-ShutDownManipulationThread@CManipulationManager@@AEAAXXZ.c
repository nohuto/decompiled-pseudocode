/*
 * XREFs of ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x18018B520
 * Callers:
 *     ??1CManipulationManager@@EEAA@XZ @ 0x180189DE0 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x18018A1BC (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 */

void __fastcall CManipulationManager::ShutDownManipulationThread(CManipulationManager *this)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 144LL))(v2, *((unsigned int *)this + 88));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 40) + 136LL))(
    *((_QWORD *)this + 40),
    *((unsigned int *)this + 82),
    1LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 232LL))(*((_QWORD *)this + 40));
  *((_BYTE *)this + 32) = 1;
  if ( *((_QWORD *)this + 3) )
  {
    SetEvent(CManipulationManager::s_rghWaitEvents);
    WaitForSingleObject(*((HANDLE *)this + 3), 0xFFFFFFFF);
    CManipulationManager::ClearWaitHandles();
    CloseHandle(*((HANDLE *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    _InterlockedExchange(&CManipulationManager::s_bManipThreadInitialized, 0);
  }
}
