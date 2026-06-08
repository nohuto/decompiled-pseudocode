/*
 * XREFs of GetProcessorEfficiencyClass @ 0x1C002F650
 * Callers:
 *     RetrieveEfficiencyClassInformation @ 0x1C002FADC (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessorEfficiencyClass(__int64 a1, _BYTE *a2)
{
  NTSTATUS ProcessorNumberFromIndex; // ebx
  ULONG v4; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *PoolWithTag; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v6; // rdi
  ULONG Length; // [rsp+30h] [rbp+8h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+18h] BYREF

  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), &ProcNumber);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    v4 = 80;
    Length = 80;
    while ( 1 )
    {
      PoolWithTag = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(PagedPool, v4, 0x72637250u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      ProcessorNumberFromIndex = KeQueryLogicalProcessorRelationship(
                                   &ProcNumber,
                                   RelationProcessorCore,
                                   PoolWithTag,
                                   &Length);
      if ( ProcessorNumberFromIndex >= 0 )
        *a2 = v6->Processor.Reserved[0];
      ExFreePoolWithTag(v6, 0x72637250u);
      v4 = 2 * Length;
      Length *= 2;
      if ( ProcessorNumberFromIndex != -1073741820 )
        return (unsigned int)ProcessorNumberFromIndex;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
