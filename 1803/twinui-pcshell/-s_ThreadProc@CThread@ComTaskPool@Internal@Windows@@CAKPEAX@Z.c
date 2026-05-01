/*
 * XREFs of ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x18008E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18008E8B8 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall __noreturn Windows::Internal::ComTaskPool::CThread::s_ThreadProc(PVOID Parameter)
{
  HMODULE v1; // rax

  v1 = Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Parameter);
  FreeLibraryAndExitThread(v1, 0);
}
