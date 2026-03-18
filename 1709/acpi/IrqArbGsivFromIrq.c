/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C00893E8
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0088208 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C0089060 (IrqTranslateResources.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00892CC (IcCopyInputStateToDeviceState.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0089908 (IrqArbpSetDeviceProperties.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00950DC (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009522C (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTransGetInterruptVector @ 0x1C00A8250 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A8500 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00A8744 (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 >= 0x10 )
    return (unsigned int)a1;
  else
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
}
