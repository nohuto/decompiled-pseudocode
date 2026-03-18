/*
 * XREFs of LogError @ 0x1C001D178
 * Callers:
 *     SyncEvalObject @ 0x1C0002920 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0010F30 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00121AC (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C00122D0 (WriteBuffField.c)
 *     ReadBuffField @ 0x1C0012594 (ReadBuffField.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     PushAccFieldObj @ 0x1C0013BE8 (PushAccFieldObj.c)
 *     ParseAndGetNameSpaceObject @ 0x1C00140C4 (ParseAndGetNameSpaceObject.c)
 *     ParseArgObj @ 0x1C0014144 (ParseArgObj.c)
 *     ParseName @ 0x1C00143AC (ParseName.c)
 *     ParseNameTail @ 0x1C0014650 (ParseNameTail.c)
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     ParseAcquire @ 0x1C00156F0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0015880 (ParseRelease.c)
 *     WriteFieldLoop @ 0x1C0015A80 (WriteFieldLoop.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     AcquireASLMutex @ 0x1C0016400 (AcquireASLMutex.c)
 *     ParseArg @ 0x1C001681C (ParseArg.c)
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 *     PushTerm @ 0x1C00169B8 (PushTerm.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     PushCall @ 0x1C0016E3C (PushCall.c)
 *     WriteField @ 0x1C0017038 (WriteField.c)
 *     AcquireGL @ 0x1C0017420 (AcquireGL.c)
 *     CreateXField @ 0x1C00177E8 (CreateXField.c)
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 *     IfElse @ 0x1C001A100 (IfElse.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     Return @ 0x1C001A7B0 (Return.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     ExprOp2_64 @ 0x1C001AB40 (ExprOp2_64.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     Store @ 0x1C001B040 (Store.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     Method @ 0x1C001B390 (Method.c)
 *     Package @ 0x1C001B560 (Package.c)
 *     Index @ 0x1C001B680 (Index.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C001BD30 (CopyObjBuffer.c)
 *     Buffer @ 0x1C001BE50 (Buffer.c)
 *     PushScope @ 0x1C001BFE8 (PushScope.c)
 *     Field @ 0x1C001C180 (Field.c)
 *     ParseObjName @ 0x1C001C334 (ParseObjName.c)
 *     OpRegion @ 0x1C001C420 (OpRegion.c)
 *     ProcessIncDec @ 0x1C001C570 (ProcessIncDec.c)
 *     LogOp2_32 @ 0x1C001C6CC (LogOp2_32.c)
 *     Acquire @ 0x1C001CB50 (Acquire.c)
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     MapUnmapPhysMem @ 0x1C001CD70 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C001CE7C (AmlpValidateFirmwareMemoryAddress.c)
 *     Release @ 0x1C001D360 (Release.c)
 *     NewObjOwner @ 0x1C001D89C (NewObjOwner.c)
 *     LoadDDB @ 0x1C001D980 (LoadDDB.c)
 *     Processor @ 0x1C001DA30 (Processor.c)
 *     NewGlobalHeap @ 0x1C0020AB0 (NewGlobalHeap.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0023600 (InitMutex.c)
 *     NewLocalHeap @ 0x1C0025B14 (NewLocalHeap.c)
 *     WriteCookAccess @ 0x1C0025BD0 (WriteCookAccess.c)
 *     AMLIRegEventHandler @ 0x1C0026FB4 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C00271A0 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C00271C8 (RegRSAccess.c)
 *     Load @ 0x1C00296F0 (Load.c)
 *     LoadMemDDB @ 0x1C00297D8 (LoadMemDDB.c)
 *     IndexField @ 0x1C0029CC0 (IndexField.c)
 *     ObjTypeSizeOf @ 0x1C002A0B0 (ObjTypeSizeOf.c)
 *     CreateField @ 0x1C002A760 (CreateField.c)
 *     InitEvent @ 0x1C002AC90 (InitEvent.c)
 *     RegOpcodeHandler @ 0x1C005DD34 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C005E15C (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C005E380 (BankField.c)
 *     PowerRes @ 0x1C005E5F0 (PowerRes.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C005F670 (Notify.c)
 *     ResetSignal @ 0x1C005F7B0 (ResetSignal.c)
 *     SleepStall @ 0x1C005F920 (SleepStall.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005FD60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C005FF60 (CopyObject.c)
 *     LoadTable @ 0x1C00603E0 (LoadTable.c)
 *     MidString @ 0x1C0060B70 (MidString.c)
 *     ProcessLoadTable @ 0x1C0060F20 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0061560 (ToDecStr.c)
 *     ToHexStr @ 0x1C00618F0 (ToHexStr.c)
 *     ToString @ 0x1C0061C00 (ToString.c)
 *     Wait @ 0x1C0061DD0 (Wait.c)
 *     ParseFieldConnection @ 0x1C00626A0 (ParseFieldConnection.c)
 *     SyncLoadDDB @ 0x1C00ABECC (SyncLoadDDB.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00ACABC (InitIllegalIOAddressListFromHAL.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005198 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C001D220 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  dword_1C00776F8 = a1;
  if ( off_1C00759C8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00759C0 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00759C0 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, *((const char **)&unk_1C00759C0 + 2 * v1 + 1));
    WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C00759C0 + v5 + 1));
  }
}
