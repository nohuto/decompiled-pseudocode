/*
 * XREFs of ConPrintf @ 0x1C005DD10
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     ProcessEvalObj @ 0x1C000C830 (ProcessEvalObj.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalPkgDataElement @ 0x1C000D7EC (AMLIEvalPkgDataElement.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     ParsePackage @ 0x1C0019240 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 *     ParseArgObj @ 0x1C001A078 (ParseArgObj.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     ParseIntObj @ 0x1C001A1F4 (ParseIntObj.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ParseName @ 0x1C001B778 (ParseName.c)
 *     ParseFieldList @ 0x1C001BFC8 (ParseFieldList.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 *     AccFieldUnit @ 0x1C001FA10 (AccFieldUnit.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     ParseInteger @ 0x1C00295FC (ParseInteger.c)
 *     ParseLocalObj @ 0x1C002A9E0 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     CatError @ 0x1C005DC80 (CatError.c)
 *     DebugInPort @ 0x1C005DF5C (DebugInPort.c)
 *     DebugNotify @ 0x1C005E060 (DebugNotify.c)
 *     DebugQuit @ 0x1C005E2E0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C005E748 (PrintBuffData.c)
 *     PrintIndent @ 0x1C005E7C0 (PrintIndent.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C005E920 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C005F5C8 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C00607D0 (BreakPoint.c)
 *     ToDecStr @ 0x1C0062730 (ToDecStr.c)
 *     ToHexStr @ 0x1C0062AC0 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0063650 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00AED78 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C005B36C (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C007A350, 0x400uLL, pszFormat, va);
  if ( qword_1C0079798 )
    return qword_1C0079798(byte_1C007A350, qword_1C00797A0);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C007A350);
}
