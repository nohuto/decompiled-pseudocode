/*
 * XREFs of ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18008E860
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18008E8B8 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::s_ThreadPoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context)
{
  HMODULE v4; // rax

  CallbackMayRunLong(Instance);
  v4 = Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Context);
  FreeLibraryWhenCallbackReturns(Instance, v4);
}
