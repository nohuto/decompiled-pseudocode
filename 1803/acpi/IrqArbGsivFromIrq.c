/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C0090A20
 * Callers:
 *     IrqTransGetInterruptVector @ 0x1C008D6B0 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C008D7D0 (IrqTranslateResources.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C0090240 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C0090D44 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00910D4 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpSetDeviceProperties @ 0x1C00918EC (IrqArbpSetDeviceProperties.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00923E0 (IcCopyInputStateToDeviceState.c)
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
