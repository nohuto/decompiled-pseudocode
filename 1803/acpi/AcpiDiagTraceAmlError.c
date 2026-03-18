/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C0006B18
 * Callers:
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     AMLIRegEventHandler @ 0x1C0044038 (AMLIRegEventHandler.c)
 *     AcquireGL @ 0x1C004616C (AcquireGL.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0046204 (AmlpValidateFirmwareMemoryAddress.c)
 *     CopyObjBuffer @ 0x1C0046368 (CopyObjBuffer.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     GetFieldUnitRegionObj @ 0x1C0046B60 (GetFieldUnitRegionObj.c)
 *     MapUnmapPhysMem @ 0x1C0046F34 (MapUnmapPhysMem.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 *     NewObjOwner @ 0x1C00472E8 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 *     RegEventHandler @ 0x1C0047ABC (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x1C0047B18 (RegOpcodeHandler.c)
 *     RegRSAccess @ 0x1C0047BD4 (RegRSAccess.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     NewGlobalHeap @ 0x1C004995C (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C0049A10 (NewLocalHeap.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004A2E0 (GetNameSpaceObjectNoLock.c)
 *     LoadDDB @ 0x1C004A4D8 (LoadDDB.c)
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004A7D0 (LoadMemDDB.c)
 *     BankField @ 0x1C004A930 (BankField.c)
 *     CreateField @ 0x1C004AC50 (CreateField.c)
 *     CreateXField @ 0x1C004ADAC (CreateXField.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 *     InitEvent @ 0x1C004B37C (InitEvent.c)
 *     InitMutex @ 0x1C004B434 (InitMutex.c)
 *     Method @ 0x1C004B510 (Method.c)
 *     OpRegion @ 0x1C004B730 (OpRegion.c)
 *     PowerRes @ 0x1C004B8B0 (PowerRes.c)
 *     Processor @ 0x1C004BA20 (Processor.c)
 *     AccessBaseField @ 0x1C004C1C0 (AccessBaseField.c)
 *     RawFieldAccess @ 0x1C004D144 (RawFieldAccess.c)
 *     ReadBuffField @ 0x1C004D3F8 (ReadBuffField.c)
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 *     WriteBuffField @ 0x1C004DA50 (WriteBuffField.c)
 *     WriteCookAccess @ 0x1C004DB30 (WriteCookAccess.c)
 *     WriteField @ 0x1C004DDF4 (WriteField.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     PushCall @ 0x1C004E600 (PushCall.c)
 *     PushTerm @ 0x1C004E810 (PushTerm.c)
 *     AcquireASLMutex @ 0x1C004E924 (AcquireASLMutex.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     IfElse @ 0x1C004F3F0 (IfElse.c)
 *     Load @ 0x1C004F530 (Load.c)
 *     Notify @ 0x1C004F6B0 (Notify.c)
 *     Release @ 0x1C004F7F0 (Release.c)
 *     ResetSignal @ 0x1C004F950 (ResetSignal.c)
 *     SleepStall @ 0x1C004FAF0 (SleepStall.c)
 *     Acquire @ 0x1C004FCE0 (Acquire.c)
 *     Buffer @ 0x1C004FE30 (Buffer.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00502A0 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0050550 (CopyObject.c)
 *     Index @ 0x1C0050E60 (Index.c)
 *     LoadTable @ 0x1C00510D0 (LoadTable.c)
 *     LogOp2_32 @ 0x1C0051564 (LogOp2_32.c)
 *     MidString @ 0x1C0051D60 (MidString.c)
 *     ObjTypeSizeOf @ 0x1C00521E0 (ObjTypeSizeOf.c)
 *     Package @ 0x1C00522C0 (Package.c)
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ProcessIncDec @ 0x1C00527D0 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     ToString @ 0x1C00536D0 (ToString.c)
 *     Wait @ 0x1C00538B0 (Wait.c)
 *     ParseAcquire @ 0x1C0054260 (ParseAcquire.c)
 *     ParseAndGetNameSpaceObject @ 0x1C0054530 (ParseAndGetNameSpaceObject.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 *     ParseArgObj @ 0x1C0054760 (ParseArgObj.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C0055330 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C00554A0 (ParseIntObj.c)
 *     ParseName @ 0x1C0055960 (ParseName.c)
 *     ParseNameTail @ 0x1C0055B00 (ParseNameTail.c)
 *     ParseObjName @ 0x1C0055CEC (ParseObjName.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 *     ParseRelease @ 0x1C0056060 (ParseRelease.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 *     ParseSuperName @ 0x1C005665C (ParseSuperName.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C009C330 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C009C4AC (SyncLoadDDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v3; // r10d
  int v4; // r9d
  __int64 v5; // rax
  char *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 v10; // rax
  char *v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
  int v16; // [rsp+30h] [rbp-19h] BYREF
  char v17; // [rsp+34h] [rbp-15h]
  int v18; // [rsp+38h] [rbp-11h] BYREF
  char v19; // [rsp+3Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v21; // [rsp+50h] [rbp+7h]
  int v22; // [rsp+58h] [rbp+Fh]
  int v23; // [rsp+5Ch] [rbp+13h]
  int *v24; // [rsp+60h] [rbp+17h]
  __int64 v25; // [rsp+68h] [rbp+1Fh]
  __int64 v26; // [rsp+70h] [rbp+27h] BYREF
  __int16 v27; // [rsp+78h] [rbp+2Fh]
  __int64 v28; // [rsp+80h] [rbp+37h] BYREF
  __int16 v29; // [rsp+88h] [rbp+3Fh]
  int v30; // [rsp+B8h] [rbp+6Fh] BYREF

  v30 = a2;
  v29 = 0;
  v28 = 0x41002F004ELL;
  v26 = 0x41002F004ELL;
  v27 = 0;
  v3 = 3;
  v18 = 0;
  v4 = 3;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = (char *)&v16;
      v16 = *(_DWORD *)(v5 + 40);
      v7 = &v26;
      v8 = 4LL;
      do
      {
        v9 = *v6++;
        *(_WORD *)v7 = v9;
        v7 = (__int64 *)((char *)v7 + 2);
        --v8;
      }
      while ( v8 );
      v27 = 0;
      v4 = 5;
    }
    v10 = *(_QWORD *)(a1 + 72);
    if ( v10 )
    {
      v11 = (char *)&v18;
      v18 = *(_DWORD *)(v10 + 40);
      v12 = &v28;
      v13 = 4LL;
      do
      {
        v14 = *v11++;
        *(_WORD *)v12 = v14;
        v12 = (__int64 *)((char *)v12 + 2);
        --v13;
      }
      while ( v13 );
      v29 = 0;
      v3 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v26;
  UserData.Reserved = 0;
  UserData.Size = 2 * v4;
  v23 = 0;
  v21 = &v28;
  v25 = 4LL;
  v22 = 2 * v3;
  v24 = &v30;
  return EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
}
