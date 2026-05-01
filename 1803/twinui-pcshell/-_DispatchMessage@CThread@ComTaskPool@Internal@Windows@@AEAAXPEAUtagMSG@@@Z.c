/*
 * XREFs of ?_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z @ 0x18010F354
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x18003B870 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::_DispatchMessage(
        Windows::Internal::ComTaskPool::CThread *this,
        struct tagMSG *a2)
{
  *((_BYTE *)this + 96) = 1;
  TranslateMessage(a2);
  DispatchMessageW(a2);
  *((_BYTE *)this + 96) = 0;
}
