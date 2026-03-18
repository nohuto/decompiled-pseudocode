/*
 * XREFs of AMLIDebugger @ 0x1C0048460
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0043B68 (AMLIGetNameSpaceObjectNoLock.c)
 *     CatError @ 0x1C0048590 (CatError.c)
 *     BreakPoint @ 0x1C004F350 (BreakPoint.c)
 *     Load @ 0x1C004F530 (Load.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     Debugger @ 0x1C0049678 (Debugger.c)
 */

__int64 AMLIDebugger()
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
