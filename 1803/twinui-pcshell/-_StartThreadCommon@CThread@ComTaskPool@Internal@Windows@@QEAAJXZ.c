/*
 * XREFs of ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x18003B90C
 * Callers:
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x18003B964 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_StartThreadCommon(
        Windows::Internal::ComTaskPool::CThread *this)
{
  HANDLE Event; // rax
  __int64 result; // rax

  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  *((_QWORD *)this + 14) = Event;
  if ( Event || (result = ResultFromKnownLastError(), (int)result >= 0) )
  {
    if ( GetModuleHandleExW(4u, (LPCWSTR)Windows::Internal::ComTaskPool::CThread::s_ThreadProc, (HMODULE *)this + 9) )
      return 0LL;
    else
      return ResultFromKnownLastError();
  }
  return result;
}
