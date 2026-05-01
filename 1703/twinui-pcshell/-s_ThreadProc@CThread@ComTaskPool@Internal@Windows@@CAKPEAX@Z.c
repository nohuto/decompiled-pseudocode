/*
 * XREFs of ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x1800223C0
 * Callers:
 *     <none>
 * Callees:
 *     ?v_OnAggregatedUnknownCreated@CWrlLightweightHandlerBase@@MEAAXXZ @ 0x1800023E0 (-v_OnAggregatedUnknownCreated@CWrlLightweightHandlerBase@@MEAAXXZ.c)
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18002236C (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall __noreturn Windows::Internal::ComTaskPool::CThread::s_ThreadProc(
        Windows::Internal::ComTaskPool::CThread *Parameter)
{
  CWrlLightweightHandlerBase *v1; // rcx
  HMODULE v2; // rax

  Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Parameter);
  CWrlLightweightHandlerBase::v_OnAggregatedUnknownCreated(v1);
  FreeLibraryAndExitThread(v2, 0);
}
