/*
 * XREFs of ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x180005090
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x180001870 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180004F50 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall __noreturn Windows::Internal::ComTaskPool::CThread::s_ThreadProc(
        Windows::Internal::ComTaskPool::CThread *Parameter)
{
  HMODULE v1; // rax

  Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Parameter);
  std::basic_ios<unsigned short>::_Add_vtordisp2();
  FreeLibraryAndExitThread(v1, 0);
}
