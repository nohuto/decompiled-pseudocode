/*
 * XREFs of memset_0 @ 0x180007B70
 * Callers:
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     HamCompleteExtendedExecution @ 0x180004500 (HamCompleteExtendedExecution.c)
 *     HampConnectionObjectCreate @ 0x18000471C (HampConnectionObjectCreate.c)
 *     RmpClientReleaseResourceSet @ 0x1800047C8 (RmpClientReleaseResourceSet.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180004868 (RmpClientUnregisterActivityHostCallbacks.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x180004920 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientWnfCreateSubscription @ 0x180004BEC (RmpClientWnfCreateSubscription.c)
 *     HampConnectionInitialize @ 0x180004E1C (HampConnectionInitialize.c)
 *     HamIpcChannelInitialize @ 0x180004E94 (HamIpcChannelInitialize.c)
 *     HamPopulateActivityProperties @ 0x180005000 (HamPopulateActivityProperties.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x1800055F0 (RmpClientSubscriptionDeliverPayload.c)
 *     RmpClientAcquireResourceSet @ 0x180005E60 (RmpClientAcquireResourceSet.c)
 *     RmResourceSetPropertiesInitialize @ 0x180006870 (RmResourceSetPropertiesInitialize.c)
 *     RmGameModeInitializeResourceRequest @ 0x180009F30 (RmGameModeInitializeResourceRequest.c)
 *     RmResourceLimitsInitialize @ 0x18000BFF0 (RmResourceLimitsInitialize.c)
 *     RmpClientConnectionInitialize @ 0x18000C23C (RmpClientConnectionInitialize.c)
 *     CrmSubscribe @ 0x18000D500 (CrmSubscribe.c)
 *     ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x18000E3F0 (-Apply@ResourceSetClientProxy@@UEAAJK@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x18000EC40 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000F0B0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000F160 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000F160.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F788 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
