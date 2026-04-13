/*
 * XREFs of ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180004F50
 * Callers:
 *     ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x180005090 (-s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z.c)
 * Callees:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000522C (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(
        Windows::Internal::ComTaskPool::CThread *a1)
{
  __int64 v2; // rbx

  Windows::Internal::ComTaskPool::CThread::_ThreadProc(a1);
  v2 = *((_QWORD *)a1 + 9);
  *((_QWORD *)a1 + 9) = 0LL;
  (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)a1 + 16LL))(a1);
  return v2;
}
