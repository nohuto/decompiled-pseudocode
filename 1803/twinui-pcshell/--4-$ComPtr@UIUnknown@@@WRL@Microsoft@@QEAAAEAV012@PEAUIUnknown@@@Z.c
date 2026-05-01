/*
 * XREFs of ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18004EB20 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x180113700 (-SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180160268 (-RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801613F8 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016F554 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180170068 (-RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017D21C (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180182598 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1801E7360 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 *     ?SetObject@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18020F008 (-SetObject@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x18022B3E0 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x1802A455C (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@@Z @ 0x1802A5594 (-RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingView.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1802B2110 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x1802D4480 (-SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x1802DCA00 (-SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@AppResizeView@@UEAAJPEAUIUnknown@@@Z @ 0x1802DFCA0 (-SetSite@AppResizeView@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z @ 0x1802E36C0 (-SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1802E47F4 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1802EEF00 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x1802F2320 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CWinRTApplicationView **__fastcall Microsoft::WRL::ComPtr<IUnknown>::operator=(
        CWinRTApplicationView **a1,
        CWinRTApplicationView *a2)
{
  CWinRTApplicationView *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
