/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x1404E8560
 * Callers:
 *     MmAllocateUserStack @ 0x1404E830C (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1404E8410 (MmAllocateVirtualMemory.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405B4210 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        int a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8,
        int a9,
        int a10,
        __int64 a11)
{
  int v15; // ebp
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r13
  int VirtualMemoryPrepare; // ebx
  __int64 v22; // rcx
  int v23; // eax
  int v25; // eax
  __int64 *v26; // [rsp+70h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v28[14]; // [rsp+80h] [rbp-98h] BYREF

  memset(v28, 0, 0x68uLL);
  v15 = a9;
  v16 = a7;
  v17 = 0LL;
  v18 = *a4;
  v19 = *a2;
  v20 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           a1,
                           v19,
                           a3,
                           v18,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)v28,
                           (__int64)&Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_18;
  v22 = *(_QWORD *)(v16 + 24);
  if ( v22 )
  {
    if ( (((a5 & 0x20400000) != 541065216) & _bittest(&a5, 0x1Du)) == 0 )
    {
      VirtualMemoryPrepare = -1073741811;
      goto LABEL_18;
    }
    v25 = PsReferencePartitionByHandle(v22, 2LL, a8, 1633054029LL, &v26);
    v17 = (__int64)v26;
    VirtualMemoryPrepare = v25;
    if ( v25 < 0 )
      goto LABEL_18;
    if ( v26 != *(__int64 **)(v28[10] + 2096LL) )
      v20 = *v26;
  }
  if ( v15 < 0 )
    v23 = MiAllocateUserStack(v28, &v26);
  else
    v23 = MiAllocateVirtualMemory(v28, v20, &v26);
  VirtualMemoryPrepare = v23;
  if ( v23 >= 0 )
  {
    *a2 = (__int64)v26;
    *a4 = v28[3];
    goto LABEL_7;
  }
LABEL_18:
  if ( v28[0] )
    ++dword_1403CBECC;
  else
    ++dword_1403CBEC8;
LABEL_7:
  if ( v17 )
    PsDereferencePartition(v17);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}
