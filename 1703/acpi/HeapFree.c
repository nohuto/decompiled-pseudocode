/*
 * XREFs of HeapFree @ 0x1C0015C58
 * Callers:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     ParseRelease @ 0x1C0015880 (ParseRelease.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ProcessIncDec @ 0x1C001C570 (ProcessIncDec.c)
 *     ParseLoad @ 0x1C001D4D0 (ParseLoad.c)
 *     FindNSObjMainNoLock @ 0x1C001E46C (FindNSObjMainNoLock.c)
 *     WriteCookAccess @ 0x1C0025BD0 (WriteCookAccess.c)
 *     Simulator_Free_Arguments @ 0x1C005B258 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C005D4A4 (FreeObjOwner.c)
 *     FreeObjectHandle @ 0x1C005E124 (FreeObjectHandle.c)
 *     LoadFieldUnitDDB @ 0x1C005E15C (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C005E760 (ProcessSleep.c)
 *     PreserveWriteObj @ 0x1C005EA10 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C0060DD0 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C0060F20 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C00613C0 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C00626A0 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C0062950 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C0062A70 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  *(_DWORD *)(a1 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v1 + 8), v1);
  KeReleaseSpinLock(&gmutHeap, NewIrql);
}
