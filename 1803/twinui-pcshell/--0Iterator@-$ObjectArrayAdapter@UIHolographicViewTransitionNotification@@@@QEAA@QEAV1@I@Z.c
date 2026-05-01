/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA@QEAV1@I@Z @ 0x1801AC868
 * Callers:
 *     _lambda_4fd3127ed7710849848c55d6ef740a2d_::operator() @ 0x18009EE60 (_lambda_4fd3127ed7710849848c55d6ef740a2d_--operator().c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAXXZ @ 0x1801AE544 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(a1);
  return a1;
}
