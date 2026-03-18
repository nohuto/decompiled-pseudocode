/*
 * XREFs of ConPrintf @ 0x1C0048620
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 *     ProcessEvalObj @ 0x1C0002A90 (ProcessEvalObj.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     ReadObject @ 0x1C00031E0 (ReadObject.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0043B68 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     CatError @ 0x1C0048590 (CatError.c)
 *     DebugInPort @ 0x1C004886C (DebugInPort.c)
 *     DebugNotify @ 0x1C0048970 (DebugNotify.c)
 *     DebugQuit @ 0x1C0048BF0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0049104 (PrintBuffData.c)
 *     PrintIndent @ 0x1C004917C (PrintIndent.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C00492E0 (RunMethodCallBack.c)
 *     AccFieldUnit @ 0x1C004C040 (AccFieldUnit.c)
 *     DumpObject @ 0x1C004C888 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C004F350 (BreakPoint.c)
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0054040 (DbgParseOneArg.c)
 *     ParseArgObj @ 0x1C0054760 (ParseArgObj.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     ParseFieldList @ 0x1C0055330 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C00554A0 (ParseIntObj.c)
 *     ParseInteger @ 0x1C005568C (ParseInteger.c)
 *     ParseLocalObj @ 0x1C00558EC (ParseLocalObj.c)
 *     ParseName @ 0x1C0055960 (ParseName.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 *     ParseSuperName @ 0x1C005665C (ParseSuperName.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0042C44 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0068020, 0x400uLL, pszFormat, va);
  if ( qword_1C0067798 )
    return qword_1C0067798(byte_1C0068020, qword_1C00677A0);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0068020);
}
