/*
 * XREFs of ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1801133B0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180112B70 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::s_ThreadPoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context)
{
  HMODULE v4; // rax

  CallbackMayRunLong(Instance);
  v4 = (HMODULE)Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Context);
  FreeLibraryWhenCallbackReturns(Instance, v4);
}
