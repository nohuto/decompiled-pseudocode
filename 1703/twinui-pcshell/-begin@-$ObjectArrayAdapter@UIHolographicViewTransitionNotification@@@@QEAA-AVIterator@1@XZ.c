/*
 * XREFs of ?begin@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA?AVIterator@1@XZ @ 0x1800DC568
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_327db8a5b4a16058445ac484f290cbe9___::Run @ 0x1800E0B90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_327db8a5b4a16058445ac484f290cbe9___--Run.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAXXZ @ 0x1800DE230 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IHolographicViewTransitionNotification>::begin(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(a2);
  return a2;
}
