/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C009C790
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C008D3F8 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C00925B8 (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C00943AC (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C009CE90 (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C0066638 = (__int64)IrqArbTestAllocation;
  qword_1C0066640 = (__int64)IrqArbRetestAllocation;
  qword_1C0066648 = (__int64)IrqArbCommitAllocation;
  qword_1C0066658 = (__int64)IrqArbBootAllocation;
  qword_1C0066668 = (__int64)IrqArbQueryConflict;
  qword_1C0066680 = (__int64)IrqArbPreprocessEntry;
  qword_1C0066690 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C0066698 = (__int64)IrqArbFindSuitableRange;
  qword_1C00666B0 = (__int64)IrqArbOverrideConflict;
  qword_1C00666A0 = (__int64)IrqArbAddAllocation;
  qword_1C00666A8 = (__int64)IrqArbBacktrackAllocation;
  qword_1C0066618 = (__int64)IrqArbUnpackRequirement;
  qword_1C0066620 = (__int64)IrqArbPackResource;
  qword_1C0066628 = (__int64)IrqArbUnpackResource;
  qword_1C0066630 = (__int64)IrqArbScoreRequirement;
  qword_1C0066688 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = LinkNodeInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = IcInitGlobalState();
      if ( (int)result >= 0 )
        return ProcessorInitGlobalState();
    }
  }
  return result;
}
