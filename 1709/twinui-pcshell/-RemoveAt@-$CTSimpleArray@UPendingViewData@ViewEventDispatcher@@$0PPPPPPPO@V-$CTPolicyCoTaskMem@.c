/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90
 * Callers:
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18011DEC8 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801229C0 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180123280 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x18012411C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___::_ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___ @ 0x1801263E0 (wil--details--ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___--_ScopeExitFn__lambda_8061.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = *a1;
  v6 = 3 * a2;
  v7 = *(_QWORD *)(*a1 + 24 * a2 + 8);
  if ( v7 )
  {
    *(_QWORD *)(v5 + 24 * a2 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = a1[1];
  if ( a2 != v8 - 1 )
    memmove((void *)(*a1 + 8 * v6), (const void *)(*a1 + 8 * v6 + 24), 24 * (v8 - a2) - 24);
  --a1[1];
  return 0LL;
}
