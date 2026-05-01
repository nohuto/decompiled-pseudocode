/*
 * XREFs of ?WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z @ 0x18009CFFC
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x18003B870 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::WaitForWork(HANDLE *this)
{
  ULONGLONG TickCount64; // rax
  ULONGLONG v3; // rdi

  TickCount64 = GetTickCount64();
  v3 = TickCount64 + 30000;
  while ( !this[18] && TickCount64 < v3 )
  {
    Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(this, v3 - TickCount64);
    TickCount64 = GetTickCount64();
  }
}
