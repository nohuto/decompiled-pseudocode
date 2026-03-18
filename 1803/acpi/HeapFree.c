/*
 * XREFs of HeapFree @ 0x1C0003D74
 * Callers:
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     ProcessEvalObj @ 0x1C0002A90 (ProcessEvalObj.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     Simulator_Free_Arguments @ 0x1C00447B8 (Simulator_Free_Arguments.c)
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C00466AC (FindNSObjMainNoLock.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     FreeObjOwner @ 0x1C004691C (FreeObjOwner.c)
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C004BDB0 (ProcessSleep.c)
 *     AccFieldUnit @ 0x1C004C040 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C004CF30 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C004D144 (RawFieldAccess.c)
 *     ReadFieldObj @ 0x1C004D690 (ReadFieldObj.c)
 *     WriteCookAccess @ 0x1C004DB30 (WriteCookAccess.c)
 *     WriteFieldLoop @ 0x1C004DF60 (WriteFieldLoop.c)
 *     WriteFieldObj @ 0x1C004E010 (WriteFieldObj.c)
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ProcessDivide @ 0x1C0052680 (ProcessDivide.c)
 *     ProcessIncDec @ 0x1C00527D0 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0052D60 (ProcessWait.c)
 *     ParseAcquire @ 0x1C0054260 (ParseAcquire.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C0055330 (ParseFieldList.c)
 *     ParseLoad @ 0x1C0055700 (ParseLoad.c)
 *     ParseNestedContext @ 0x1C0055C40 (ParseNestedContext.c)
 *     ParseRelease @ 0x1C0056060 (ParseRelease.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 *     ParseUnload @ 0x1C0056C30 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C0003DC0 (HeapInsertFreeList.c)
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  *(_DWORD *)(a1 - 16) = 0;
  byte_1C0067920 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v1 + 8));
  KeReleaseSpinLock(&gmutHeap, byte_1C0067920);
}
