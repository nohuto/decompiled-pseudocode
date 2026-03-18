/*
 * XREFs of DereferenceObjectEx @ 0x1C00156D8
 * Callers:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     DerefOf @ 0x1C0013AA0 (DerefOf.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ParseNameObj @ 0x1C00147FC (ParseNameObj.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0017370 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     Field @ 0x1C001C180 (Field.c)
 *     AMLIApplyNamespaceOverride @ 0x1C001D95C (AMLIApplyNamespaceOverride.c)
 *     AMLIFindNameSpaceObject @ 0x1C001E344 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     Alias @ 0x1C0029030 (Alias.c)
 *     Load @ 0x1C00296F0 (Load.c)
 *     IndexField @ 0x1C0029CC0 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055310 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C005B1E4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C005B474 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C005B900 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005BA04 (AMLICreateNativeNamespaceObject.c)
 *     DebugNotify @ 0x1C005C2C0 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CC20 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CD84 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CEE0 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D260 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D3E8 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C005DAE8 (ParseDLMObjectInternal.c)
 *     FreeObjectHandle @ 0x1C005E124 (FreeObjectHandle.c)
 *     BankField @ 0x1C005E380 (BankField.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 *     LoadTable @ 0x1C00603E0 (LoadTable.c)
 *     ParseNestedContext @ 0x1C0062950 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceObjectEx(_QWORD *a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 28, 0xFFFFFFFF) == 1 )
  {
    *((_WORD *)a1 + 32) |= 4u;
    if ( (a1[8] & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}
