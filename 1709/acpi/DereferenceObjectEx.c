/*
 * XREFs of DereferenceObjectEx @ 0x1C001B118
 * Callers:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     PerformMutexDriverCallbacks @ 0x1C0011AC8 (PerformMutexDriverCallbacks.c)
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     Load @ 0x1C0012BC0 (Load.c)
 *     AMLIApplyNamespaceOverride @ 0x1C001358C (AMLIApplyNamespaceOverride.c)
 *     AMLIFindNameSpaceObject @ 0x1C0016084 (AMLIFindNameSpaceObject.c)
 *     DerefOf @ 0x1C00191C0 (DerefOf.c)
 *     Field @ 0x1C001A430 (Field.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ParseNameObj @ 0x1C001ADAC (ParseNameObj.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     Alias @ 0x1C0029CD0 (Alias.c)
 *     IndexField @ 0x1C002ABB0 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055F00 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C005BD54 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C005BFE8 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C005C418 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CA10 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CB74 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CCD0 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D050 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D1DC (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C005D8E4 (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x1C005E060 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
 *     FreeObjectHandle @ 0x1C005ECC0 (FreeObjectHandle.c)
 *     BankField @ 0x1C005EF20 (BankField.c)
 *     FreeContext @ 0x1C005FFB8 (FreeContext.c)
 *     LoadTable @ 0x1C00615E0 (LoadTable.c)
 *     ParseNestedContext @ 0x1C0063B20 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(__int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects((_QWORD *)a1);
  }
}
