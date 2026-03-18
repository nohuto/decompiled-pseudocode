/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00AA9C4
 * Callers:
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C0083A3C (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C0083A5C (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C0084878 (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00AAAEC (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C0076618 = (__int64)IrqArbTestAllocation;
  qword_1C0076620 = (__int64)IrqArbRetestAllocation;
  qword_1C0076628 = (__int64)IrqArbCommitAllocation;
  qword_1C0076638 = (__int64)IrqArbBootAllocation;
  qword_1C0076648 = (__int64)IrqArbQueryConflict;
  qword_1C0076660 = (__int64)IrqArbPreprocessEntry;
  qword_1C0076670 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C0076678 = (__int64)IrqArbFindSuitableRange;
  qword_1C0076690 = (__int64)IrqArbOverrideConflict;
  qword_1C0076680 = (__int64)IrqArbAddAllocation;
  qword_1C0076688 = (__int64)IrqArbBacktrackAllocation;
  qword_1C00765F8 = (__int64)IrqArbUnpackRequirement;
  qword_1C0076600 = (__int64)IrqArbPackResource;
  qword_1C0076608 = (__int64)IrqArbUnpackResource;
  qword_1C0076610 = (__int64)IrqArbScoreRequirement;
  qword_1C0076668 = (__int64)IrqArbAllocateEntry;
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
