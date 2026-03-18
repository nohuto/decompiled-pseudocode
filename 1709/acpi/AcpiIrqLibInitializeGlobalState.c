/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00AFBDC
 * Callers:
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C008D37C (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C008D39C (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C0090DEC (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00AFD04 (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C0078678 = (__int64)IrqArbTestAllocation;
  qword_1C0078680 = (__int64)IrqArbRetestAllocation;
  qword_1C0078688 = (__int64)IrqArbCommitAllocation;
  qword_1C0078698 = (__int64)IrqArbBootAllocation;
  qword_1C00786A8 = (__int64)IrqArbQueryConflict;
  qword_1C00786C0 = (__int64)IrqArbPreprocessEntry;
  qword_1C00786D0 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C00786D8 = (__int64)IrqArbFindSuitableRange;
  qword_1C00786F0 = (__int64)IrqArbOverrideConflict;
  qword_1C00786E0 = (__int64)IrqArbAddAllocation;
  qword_1C00786E8 = (__int64)IrqArbBacktrackAllocation;
  qword_1C0078658 = (__int64)IrqArbUnpackRequirement;
  qword_1C0078660 = (__int64)IrqArbPackResource;
  qword_1C0078668 = (__int64)IrqArbUnpackResource;
  qword_1C0078670 = (__int64)IrqArbScoreRequirement;
  qword_1C00786C8 = (__int64)IrqArbAllocateEntry;
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
