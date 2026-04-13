/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8
 * Callers:
 *     _lambda_a4f13cb95add8140a6fafa459ff1c2f1_::operator() @ 0x18002C36C (_lambda_a4f13cb95add8140a6fafa459ff1c2f1_--operator().c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x18002D9A4 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002DB18 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_a4f13cb95add8140a6fafa459ff1c2f1___ @ 0x180037328 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_a4f13cb95add8140a6fafa459ff1c2f1___.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180041174 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180047490 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x18006D8D4 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x18006E320 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18006E404 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x180074F48 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180079A48 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x180088DC4 (-Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x18008AAD8 (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002BF8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
