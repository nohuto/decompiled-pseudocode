/*
 * XREFs of NtAllocateVirtualMemory @ 0x1405B4760
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405B4210 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  char PreviousMode; // bl
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID v11; // rdi
  ULONG_PTR v12; // rsi
  __int64 v13; // r13
  NTSTATUS v14; // ebx
  __int64 v15; // rdx
  unsigned __int8 v17; // [rsp+70h] [rbp-108h]
  __int64 *v18; // [rsp+78h] [rbp-100h] BYREF
  __int64 v19; // [rsp+80h] [rbp-F8h]
  PVOID Object; // [rsp+88h] [rbp-F0h] BYREF
  void *v21; // [rsp+90h] [rbp-E8h] BYREF
  PVOID v22; // [rsp+98h] [rbp-E0h]
  ULONG_PTR v23; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v24[5]; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v25[14]; // [rsp+E0h] [rbp-98h] BYREF

  memset(v24, 0, sizeof(v24));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  v11 = *BaseAddress;
  v22 = *BaseAddress;
  v12 = *RegionSize;
  v23 = *RegionSize;
  LODWORD(v24[4]) = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  memset(v25, 0, 0x68uLL);
  v13 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v14 = MiAllocateVirtualMemoryPrepare(
          (ULONG_PTR)ProcessHandle,
          (unsigned __int64)v11,
          ZeroBits,
          v12,
          AllocationType & 0xFFFFFF80,
          Protect,
          v24,
          PreviousMode,
          0,
          0,
          0LL,
          (__int64)v25,
          &Object);
  if ( v14 >= 0 )
  {
    if ( !v24[3] )
    {
      v15 = 0LL;
      goto LABEL_11;
    }
    if ( (AllocationType & 0x20400000) == 541065216 || (AllocationType & 0x20000000) == 0 )
    {
      v14 = -1073741811;
LABEL_21:
      if ( v25[0] )
        ++dword_1403CBECC;
      else
        ++dword_1403CBEC8;
      goto LABEL_14;
    }
    v14 = PsReferencePartitionByHandle(v24[3], 2LL, v17, 0x61566D4Du, &v18);
    v13 = (__int64)v18;
    if ( v14 >= 0 )
    {
      if ( v18 == *(__int64 **)(v25[10] + 2096LL) )
        v15 = v19;
      else
        v15 = *v18;
LABEL_11:
      v14 = MiAllocateVirtualMemory(v25, v15, &v21);
      if ( v14 >= 0 )
      {
        v11 = v21;
        v22 = v21;
        v12 = v25[3];
        v23 = v25[3];
      }
    }
  }
  if ( v14 < 0 )
    goto LABEL_21;
LABEL_14:
  if ( v13 )
    PsDereferencePartition(v13);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v14 >= 0 )
  {
    *BaseAddress = v11;
    *RegionSize = v12;
  }
  return v14;
}
