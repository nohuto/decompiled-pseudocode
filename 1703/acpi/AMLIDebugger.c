/*
 * XREFs of AMLIDebugger @ 0x1C005BEF8
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0017370 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     Load @ 0x1C00296F0 (Load.c)
 *     CatError @ 0x1C005BF4C (CatError.c)
 *     BreakPoint @ 0x1C005F5D0 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C0060F20 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1C00ABDC8 (AMLILoadDDB.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     Debugger @ 0x1C005DF60 (Debugger.c)
 */

ULONG AMLIDebugger()
{
  ULONG result; // eax

  result = gdwfAMLIInit;
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
