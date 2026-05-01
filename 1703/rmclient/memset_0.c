/*
 * XREFs of memset_0 @ 0x180007FF4
 * Callers:
 *     RmpBindToRmRpcServer @ 0x180004120 (RmpBindToRmRpcServer.c)
 *     RmResourceSetPropertiesInitialize @ 0x180004B00 (RmResourceSetPropertiesInitialize.c)
 *     RmResourceLimitsInitialize @ 0x180004E20 (RmResourceLimitsInitialize.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180004F20 (RmpClientUnregisterActivityHostCallbacks.c)
 *     RmpClientReleaseResourceSet @ 0x1800052A0 (RmpClientReleaseResourceSet.c)
 *     RmpClientConnectionInitialize @ 0x1800071A8 (RmpClientConnectionInitialize.c)
 *     RmpClientCallbackGenerateLastMessage @ 0x180007D8C (RmpClientCallbackGenerateLastMessage.c)
 *     RmGameModeInitializeResourceRequest @ 0x18000A860 (RmGameModeInitializeResourceRequest.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000C9B0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000C9B0.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000DFD0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000E5E4 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
