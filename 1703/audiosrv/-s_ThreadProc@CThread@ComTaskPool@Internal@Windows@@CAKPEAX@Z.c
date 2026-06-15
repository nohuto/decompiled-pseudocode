/*
 * XREFs of ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x1800D8AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x1800D825C (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall __noreturn Windows::Internal::ComTaskPool::CThread::s_ThreadProc(__int64 Parameter)
{
  HMODULE v1; // rax

  v1 = (HMODULE)Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Parameter);
  FreeLibraryAndExitThread(v1, 0);
}
