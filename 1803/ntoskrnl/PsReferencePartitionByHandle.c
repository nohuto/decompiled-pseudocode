/*
 * XREFs of PsReferencePartitionByHandle @ 0x140512414
 * Callers:
 *     MiInitializeCreateSectionPacket @ 0x1404C34D0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1404E8560 (MiAllocateVirtualMemoryCommon.c)
 *     NtManagePartition @ 0x1405121CC (NtManagePartition.c)
 *     NtAllocateVirtualMemory @ 0x1405B4760 (NtAllocateVirtualMemory.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x14077C020 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14077E934 (NtCreatePartition.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, __int64 a2, __int64 a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  PVOID v9; // r8
  void *v10; // r8
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( a1 == -1LL )
  {
    v9 = *(PVOID *)&KeGetCurrentThread()->ApcState.Process[2].AddressPolicy;
  }
  else if ( a1 == -2LL )
  {
    v9 = PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, Tag, (__int64)&v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = v11;
  }
  if ( PsReferencePartitionSafe((__int64)v9) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
