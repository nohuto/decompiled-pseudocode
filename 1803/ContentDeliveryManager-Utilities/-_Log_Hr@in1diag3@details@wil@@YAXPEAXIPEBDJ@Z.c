/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029864
 * Callers:
 *     _lambda_a7d6de2484dea847792845a02e267be3_::operator() @ 0x18002F608 (_lambda_a7d6de2484dea847792845a02e267be3_--operator().c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180030C58 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180030DC8 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_a7d6de2484dea847792845a02e267be3___ @ 0x18003AC20 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_a7d6de2484dea847792845a02e267be3___.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180044A44 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18004B140 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x180077D78 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x1800787E0 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800788E4 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007FA08 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180084A58 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800960E8 (-Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x180097ECC (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002E80 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
