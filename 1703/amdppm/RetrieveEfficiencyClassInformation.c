/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C0027854
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0027218 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0008E90 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rdi
  UCHAR v1; // r15
  __int64 v2; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  ULONG v4; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *PoolWithTag; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v6; // rsi
  int v7; // eax
  unsigned int i; // ecx
  __int64 v10[4]; // [rsp+20h] [rbp-20h] BYREF
  ULONG Length; // [rsp+80h] [rbp+40h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+48h] BYREF
  __int64 v13; // [rsp+90h] [rbp+50h] BYREF

  qword_1C0011968 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v10);
  ResetEnumerationContext(v10);
  v0 = &qword_1C0011968;
  if ( (unsigned int)EnumerateNextDevice((__int64)v10, &v13) )
  {
LABEL_15:
    v7 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( !*(_DWORD *)v0 )
        break;
      ++v7;
      v0 = (__int64 *)((char *)v0 + 4);
    }
    dword_1C0011964 = v7;
    return 0;
  }
  v1 = Length;
  while ( 1 )
  {
    v2 = v13;
    if ( (*(_QWORD *)(v13 + 264) & 0x2000000000LL) != 0 )
      break;
LABEL_14:
    if ( (unsigned int)EnumerateNextDevice((__int64)v10, &v13) )
      goto LABEL_15;
  }
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v13 + 56), &ProcNumber);
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
        v1 = v6->Processor.Reserved[0];
      ExFreePoolWithTag(v6, 0x72637250u);
      v4 = 2 * Length;
      Length *= 2;
      if ( ProcessorNumberFromIndex != -1073741820 )
        goto LABEL_12;
    }
    ProcessorNumberFromIndex = -1073741670;
  }
LABEL_12:
  if ( ProcessorNumberFromIndex >= 0 )
  {
    *(_BYTE *)(v2 + 352) = v1;
    ++*((_DWORD *)&qword_1C0011968 + v1);
    goto LABEL_14;
  }
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v10);
  ResetEnumerationContext(v10);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v10, &v13) )
  {
    if ( (*(_QWORD *)(v13 + 264) & 0x2000000000LL) != 0 )
      *(_BYTE *)(v13 + 352) = 0;
  }
  dword_1C0011964 = 1;
  qword_1C0011968 = 0LL;
  LODWORD(qword_1C0011968) = dword_1C00113E4;
  return (unsigned int)ProcessorNumberFromIndex;
}
