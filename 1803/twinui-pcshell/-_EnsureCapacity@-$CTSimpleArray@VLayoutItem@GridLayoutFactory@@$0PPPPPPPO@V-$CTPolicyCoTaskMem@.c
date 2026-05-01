/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C
 * Callers:
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x180113070 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     RecoverWindowsProc @ 0x1801131C0 (RecoverWindowsProc.c)
 *     ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x1801C5080 (-SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@P.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801DD4C0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x18029ECA4 (_lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_--operator().c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1802A00D8 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 *     ?ItemRemoved@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1802A98D0 (-ItemRemoved@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PE.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x1802AC65C (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1802D4780 (-AddPositionAdjustment@PositionAdjustmentHistory@@UEAA-AW4PositionAdjustmentAction@@PEAUIApplica.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18000C660 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = 4294967294LL;
  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = 0LL;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( is_mul_ok(v6, 2uLL) )
      {
        result = 0LL;
      }
      else
      {
        v7 = -1LL;
        result = 2147942934LL;
      }
      if ( (int)result >= 0 )
      {
        v8 = v7 - v6;
        v9 = v6 + 4096;
        if ( v8 <= 0x1000 )
          v9 = v7;
        v10 = v9;
        if ( a2 > v9 )
          v10 = a2;
        if ( v10 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( a2 > v9 )
            v3 = a2;
        }
        v11 = 0LL;
        if ( is_mul_ok(v3, 0x10uLL) )
        {
          result = CTCoAllocPolicy::Realloc(
                     (IMalloc *)&v11,
                     (v3 * (unsigned __int128)0x10uLL) >> 64,
                     *(void **)a1,
                     16 * v3,
                     &v11);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(a1 + 24) = v3;
          }
        }
        else
        {
          return 2147942934LL;
        }
      }
    }
  }
  return result;
}
