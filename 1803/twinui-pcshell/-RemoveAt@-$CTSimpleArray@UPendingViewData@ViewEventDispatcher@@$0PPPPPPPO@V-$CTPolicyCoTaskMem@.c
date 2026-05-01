/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180095D7C
 * Callers:
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180032E50 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1800F040C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___::_ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___ @ 0x1800FAE04 (wil--details--ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___--_ScopeExitFn__lambda_8061.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z @ 0x180095DDC (--_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v4 = 3 * a2;
  ViewEventDispatcher::PendingViewData::`scalar deleting destructor'(
    (ViewEventDispatcher::PendingViewData *)(*a1 + 24 * a2),
    a2);
  v5 = a1[1];
  if ( a2 != v5 - 1 )
  {
    memmove((void *)(*a1 + 8 * v4), (const void *)(*a1 + 8 * v4 + 24), 24 * (v5 - a2) - 24);
    v5 = a1[1];
  }
  a1[1] = v5 - 1;
  return 0LL;
}
