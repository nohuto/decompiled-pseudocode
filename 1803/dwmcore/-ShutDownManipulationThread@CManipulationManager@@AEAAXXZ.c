/*
 * XREFs of ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x1801D09BC
 * Callers:
 *     ??1CManipulationManager@@EEAA@XZ @ 0x1801CE164 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x1801CE904 (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 */

void __fastcall CManipulationManager::ShutDownManipulationThread(CManipulationManager *this)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 144LL))(v2, *((_QWORD *)this + 44));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 40) + 136LL))(
    *((_QWORD *)this + 40),
    *((_QWORD *)this + 41),
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
