/*
 * XREFs of ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800243C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180024C8C (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CThread::s_ThreadPoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        Windows::Internal::ComTaskPool::CThread *Context)
{
  HMODULE v4; // rbx

  CallbackMayRunLong(Instance);
  Windows::Internal::ComTaskPool::CThread::_ThreadProc(Context);
  v4 = (HMODULE)*((_QWORD *)Context + 9);
  *((_QWORD *)Context + 9) = 0LL;
  (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)Context + 16LL))(Context);
  FreeLibraryWhenCallbackReturns(Instance, v4);
}
