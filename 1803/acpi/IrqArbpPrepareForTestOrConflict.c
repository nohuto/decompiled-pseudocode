/*
 * XREFs of IrqArbpPrepareForTestOrConflict @ 0x1C00917CC
 * Callers:
 *     IrqArbRetestAllocation @ 0x1C0090C20 (IrqArbRetestAllocation.c)
 *     IrqArbTestAllocation @ 0x1C0090C90 (IrqArbTestAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009183C (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     LinkNodeClearPossibleData @ 0x1C008D108 (LinkNodeClearPossibleData.c)
 *     LinkNodeCopyData @ 0x1C008D13C (LinkNodeCopyData.c)
 *     ProcessorCopyData @ 0x1C008E278 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C008E834 (ProcessorpClearData.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 *     IcClearPossibleData @ 0x1C00921E0 (IcClearPossibleData.c)
 *     IcCopyData @ 0x1C0092288 (IcCopyData.c)
 *     IcUpdateControllers @ 0x1C0092990 (IcUpdateControllers.c)
 */

__int64 __fastcall IrqArbpPrepareForTestOrConflict(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  ProcessorpClearData(1);
  IcClearPossibleData();
  IcUpdateControllers();
  LinkNodeClearPossibleData();
  result = ProcessorCopyData(1u);
  if ( (int)result >= 0 )
  {
    result = IcCopyData(1LL);
    if ( (int)result >= 0 )
    {
      result = LinkNodeCopyData(1);
      if ( (int)result >= 0 )
        return IrqArbpUnreferenceArbitrationList(a1, a2);
    }
  }
  return result;
}
