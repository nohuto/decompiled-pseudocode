/*
 * XREFs of AMLIDebugger @ 0x1C005DC30
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalPkgDataElement @ 0x1C000D7EC (AMLIEvalPkgDataElement.c)
 *     Load @ 0x1C0012BC0 (Load.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     CatError @ 0x1C005DC80 (CatError.c)
 *     BreakPoint @ 0x1C00607D0 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C0062100 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00AED78 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     Debugger @ 0x1C005EAFC (Debugger.c)
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
