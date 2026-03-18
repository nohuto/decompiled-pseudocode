/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C0086A70
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C0085820 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C00866E0 (IrqTranslateResources.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0086954 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00898E8 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0089D58 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C008FB74 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqTransGetInterruptVector @ 0x1C00A57A0 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A5A60 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00A5CA4 (IrqArbUpdateInterruptProperties.c)
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
