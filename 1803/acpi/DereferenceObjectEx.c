/*
 * XREFs of DereferenceObjectEx @ 0x1C0002FD4
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0043800 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0043B68 (AMLIGetNameSpaceObjectNoLock.c)
 *     Simulator_EvaluateNode @ 0x1C0044744 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C00449D8 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0044E08 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     AMLIAddNamespaceOverride @ 0x1C00457B8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0045B94 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0045BFC (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0045F78 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0046100 (AMLIReadNamespaceOverrideObject.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     ParseDLMObjectInternal @ 0x1C004767C (ParseDLMObjectInternal.c)
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 *     DebugNotify @ 0x1C0048970 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 *     BankField @ 0x1C004A930 (BankField.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 *     Alias @ 0x1C004F180 (Alias.c)
 *     Load @ 0x1C004F530 (Load.c)
 *     DerefOf @ 0x1C0050670 (DerefOf.c)
 *     LoadTable @ 0x1C00510D0 (LoadTable.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     ParseNameObj @ 0x1C0055A68 (ParseNameObj.c)
 *     ParseNestedContext @ 0x1C0055C40 (ParseNestedContext.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 *     ParseSuperName @ 0x1C005665C (ParseSuperName.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 */

__int64 __fastcall DereferenceObjectEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      *(_WORD *)(a1 + 64) |= 4u;
      result = *(unsigned __int16 *)(a1 + 64);
      if ( (result & 0x40) == 0 )
        return FreeNameSpaceObjects();
    }
  }
  return result;
}
