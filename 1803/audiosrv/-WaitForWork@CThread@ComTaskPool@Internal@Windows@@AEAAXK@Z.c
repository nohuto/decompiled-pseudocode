/*
 * XREFs of ?WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z @ 0x180065468
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180112454 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x180112738 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::WaitForWork(Windows::Internal::ComTaskPool::CThread *this)
{
  ULONGLONG TickCount64; // rax
  ULONGLONG v3; // rdi

  TickCount64 = GetTickCount64();
  v3 = TickCount64 + 30000;
  while ( !*((_QWORD *)this + 18) && TickCount64 < v3 )
  {
    Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(this, v3 - TickCount64);
    TickCount64 = GetTickCount64();
  }
}
