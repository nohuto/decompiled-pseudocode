/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00B465C
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0014BD0 (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1C00669BC (-ndisFreeMappingAddress@@YAXPEAX@Z.c)
 *     ndisGetNodeIdForProcessor @ 0x1C00B4898 (ndisGetNodeIdForProcessor.c)
 *     ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C00B490C (--$MakeSizedPoolPtr@U_MDL@@@@YA-AV-$unique_ptr@U_MDL@@U-$KFreePool@U_MDL@@@@@wistd@@K_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00CA238 (--_V@YAXPEAX@Z.c)
 */

unsigned __int64 ndisAllocateNumaStripedPages(void)
{
  ULONG v0; // ebp
  SIZE_T v1; // rbx
  unsigned __int64 MappingAddress; // rdi
  SIZE_T v3; // rax
  __int64 v4; // rdx
  PMDL v5; // rsi
  struct _MDL *v6; // r12
  SIZE_T v7; // rbx
  PVOID PoolWithTag; // rax
  void *v9; // r14
  char v10; // r13
  ULONG v11; // r15d
  signed __int64 v12; // r13
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rax
  __int64 v15; // rbp
  struct _MDL **v16; // rbx
  struct _MDL *v17; // rcx
  unsigned __int64 v18; // rbx
  PMDL MemoryDescriptorList; // [rsp+90h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A0h] [rbp+18h]
  __int64 v23; // [rsp+A8h] [rbp+20h]

  v0 = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = v0 << 12;
  MappingAddress = (unsigned __int64)MmAllocateMappingAddress(v1, 0x6C53444Eu);
  if ( !MappingAddress )
    return 0LL;
  v3 = MmSizeOfMdl(0LL, (unsigned int)v1);
  MakeSizedPoolPtr<_MDL>(&MemoryDescriptorList, v4, v3);
  v5 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MemoryDescriptorList->Next = 0LL;
    v6 = v5 + 1;
    v5->ByteCount = v1;
    v5->StartVa = (PVOID)(MappingAddress & 0xFFFFFFFFFFFFF000uLL);
    v5->ByteOffset = MappingAddress & 0xFFF;
    v5->MdlFlags = 2;
    v5->Size = 8 * (((v1 + (MappingAddress & 0xFFF) + 4095) >> 12) + 6);
    v23 = v0;
    v7 = 8LL * v0;
    if ( !is_mul_ok(v0, 8uLL) )
      v7 = -1LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x6D4D444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v7);
    else
      v9 = 0LL;
    if ( !v9 )
    {
      v18 = 0LL;
LABEL_22:
      operator delete[](v9);
      ExFreePoolWithTag(v5, 0);
      goto LABEL_23;
    }
    v10 = 0;
    v11 = 0;
    if ( v0 )
    {
      v22 = -1LL;
      v12 = (_BYTE *)v9 - (_BYTE *)v6;
      while ( 1 )
      {
        v21 = 4096LL;
        NodeIdForProcessor = ndisGetNodeIdForProcessor(v11 != 0 ? v11 - 1 : 0);
        NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, v22, v21, 4096LL, 1, NodeIdForProcessor, 5);
        *(struct _MDL **)((char *)&v6->Next + v12) = (struct _MDL *)NodePagesForMdl;
        if ( !NodePagesForMdl )
          break;
        ++v11;
        v6->Next = *(struct _MDL **)(NodePagesForMdl + 48);
        v6 = (struct _MDL *)((char *)v6 + 8);
        if ( v11 >= v0 )
        {
          v10 = 0;
          goto LABEL_13;
        }
      }
    }
    else
    {
LABEL_13:
      if ( MmMapLockedPagesWithReservedMapping((PVOID)MappingAddress, 0x6C53444Eu, v5, MmCached) )
      {
LABEL_14:
        if ( v0 )
        {
          v15 = v23;
          v16 = (struct _MDL **)v9;
          do
          {
            v17 = *v16;
            if ( *v16 )
            {
              if ( v10 )
              {
                MmFreePagesFromMdl(v17);
                v17 = *v16;
              }
              ExFreePoolWithTag(v17, 0);
            }
            ++v16;
            --v15;
          }
          while ( v15 );
        }
        v18 = MappingAddress;
        MappingAddress = 0LL;
        goto LABEL_22;
      }
    }
    ndisFreeMappingAddress((void *)MappingAddress);
    MappingAddress = 0LL;
    v10 = 1;
    goto LABEL_14;
  }
  v18 = 0LL;
LABEL_23:
  if ( MappingAddress )
    ndisFreeMappingAddress((void *)MappingAddress);
  return v18;
}
