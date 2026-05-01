/*
 * XREFs of ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x180095568
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1800F040C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
        __int64 a1,
        int *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v7; // edx
  _DWORD *i; // rcx

  v4 = 0LL;
  *a4 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    return 2147647531LL;
  v7 = *a2;
  for ( i = *(_DWORD **)a1; *i != v7; i += 6 )
  {
    if ( ++v4 >= v5 )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
