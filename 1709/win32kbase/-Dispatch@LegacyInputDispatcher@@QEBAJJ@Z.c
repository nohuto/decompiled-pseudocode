/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C003BBA8
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C003BBE0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0119270 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 4)
                                                   + 16LL * (unsigned int)(a2 - *((_DWORD *)this + 10))))(
           *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * a2),
           *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * (unsigned int)(a2 - *((_DWORD *)this + 10)) + 8));
}
