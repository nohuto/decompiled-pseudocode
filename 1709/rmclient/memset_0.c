/*
 * XREFs of memset_0 @ 0x180008068
 * Callers:
 *     HamCreateActivityForProcess @ 0x1800014D0 (HamCreateActivityForProcess.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180001890 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 *     HampConnectionInitialize @ 0x1800042F0 (HampConnectionInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x180004400 (RmpClientWnfCreateSubscription.c)
 *     HamIpcChannelInitialize @ 0x180004590 (HamIpcChannelInitialize.c)
 *     RmpClientWnfMessageQueueWorker @ 0x180004810 (RmpClientWnfMessageQueueWorker.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x180004E30 (RmpClientSubscriptionDeliverPayload.c)
 *     RmResourceSetPropertiesInitialize @ 0x1800052E0 (RmResourceSetPropertiesInitialize.c)
 *     RmResourceLimitsInitialize @ 0x180005430 (RmResourceLimitsInitialize.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x1800054A0 (RmpClientUnregisterActivityHostCallbacks.c)
 *     HampIpcChannelWnfCallback @ 0x180005830 (HampIpcChannelWnfCallback.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x180005B80 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientAcquireResourceSet @ 0x180005D70 (RmpClientAcquireResourceSet.c)
 *     RmpClientConnectionInitialize @ 0x1800065AC (RmpClientConnectionInitialize.c)
 *     __scrt_fastfail @ 0x180007EFC (__scrt_fastfail.c)
 *     RmGameModeInitializeResourceRequest @ 0x18000AD70 (RmGameModeInitializeResourceRequest.c)
 *     HampConnectionObjectCreate @ 0x18000D7B8 (HampConnectionObjectCreate.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000DE00 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000DE00.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000F2F0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F904 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
