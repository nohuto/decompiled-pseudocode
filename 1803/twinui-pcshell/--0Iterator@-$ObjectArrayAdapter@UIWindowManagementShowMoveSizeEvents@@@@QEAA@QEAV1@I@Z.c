/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@QEAA@QEAV1@I@Z @ 0x1801F5C84
 * Callers:
 *     ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@K@Z @ 0x1801F6540 (-OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@K@Z.c)
 *     ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1801F6690 (-OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@HKUtagRECT@.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1801F6810 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@AEAAXXZ @ 0x1801F63E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::GetCurrentObject(a1);
  return a1;
}
