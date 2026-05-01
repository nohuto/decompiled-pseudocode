/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardCompareHelper@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardMergeHelper@UAppSpecialInfo@CAppTransitionManager@@@@@@QEAAXXZ @ 0x1802ACB04
 * Callers:
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1802ABC10 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1802ACEDC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ??_GPositionAdjustmentHistory@@UEAAPEAXI@Z @ 0x1802D4740 (--_GPositionAdjustmentHistory@@UEAAPEAXI@Z.c)
 *     ?ClearHistory@PositionAdjustmentHistory@@UEAAXXZ @ 0x1802D4920 (-ClearHistory@PositionAdjustmentHistory@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
