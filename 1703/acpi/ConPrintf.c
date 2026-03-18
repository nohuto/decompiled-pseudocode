/*
 * XREFs of ConPrintf @ 0x1C002C03C
 * Callers:
 *     ProcessEvalObj @ 0x1C0001B70 (ProcessEvalObj.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParseArgObj @ 0x1C0014144 (ParseArgObj.c)
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     ParseName @ 0x1C00143AC (ParseName.c)
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0017370 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ParseInteger @ 0x1C002887C (ParseInteger.c)
 *     ParseLocalObj @ 0x1C0029AD8 (ParseLocalObj.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     CatError @ 0x1C005BF4C (CatError.c)
 *     DebugInPort @ 0x1C005C1B4 (DebugInPort.c)
 *     DebugNotify @ 0x1C005C2C0 (DebugNotify.c)
 *     DebugQuit @ 0x1C005C530 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C005C994 (PrintBuffData.c)
 *     PrintIndent @ 0x1C005CA0C (PrintIndent.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C005CB70 (RunMethodCallBack.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C005F5D0 (BreakPoint.c)
 *     ToDecStr @ 0x1C0061560 (ToDecStr.c)
 *     ToHexStr @ 0x1C00618F0 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0062480 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00ABDC8 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C005A85C (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0078290, 0x400uLL, pszFormat, va);
  if ( qword_1C00776D8 )
    return qword_1C00776D8(byte_1C0078290, qword_1C00776E0);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0078290);
}
