/*
 * XREFs of ?end@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA?AVIterator@1@XZ @ 0x1800798E4
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180079020 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ @ 0x180079C34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IApplicationViewChangeListener>::end(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::GetCurrentObject(a2);
  return a2;
}
