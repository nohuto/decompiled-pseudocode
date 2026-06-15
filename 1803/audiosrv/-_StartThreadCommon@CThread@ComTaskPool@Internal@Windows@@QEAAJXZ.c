/*
 * XREFs of ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1801123F8
 * Callers:
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180112008 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1801120EC (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180111DBC (-ResultFromKnownLastError@@YAJXZ.c)
 */

int __fastcall Windows::Internal::ComTaskPool::CThread::_StartThreadCommon(
        Windows::Internal::ComTaskPool::CThread *this)
{
  HANDLE Event; // rax
  int result; // eax

  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  *((_QWORD *)this + 14) = Event;
  if ( Event || (result = ResultFromKnownLastError(), result >= 0) )
  {
    if ( GetModuleHandleExW(4u, (LPCWSTR)Windows::Internal::ComTaskPool::CThread::s_ThreadProc, (HMODULE *)this + 9) )
      return 0;
    else
      return ResultFromKnownLastError();
  }
  return result;
}
