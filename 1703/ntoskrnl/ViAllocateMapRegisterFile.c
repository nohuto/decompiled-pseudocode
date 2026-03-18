/*
 * XREFs of ViAllocateMapRegisterFile @ 0x14076B29C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfHalAllocateMapRegisters @ 0x14076A4A0 (VfHalAllocateMapRegisters.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x140022570 (ExInterlockedInsertHeadList.c)
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ViAllocateFromContiguousMemory @ 0x14076B1FC (ViAllocateFromContiguousMemory.c)
 *     ViFreeToContiguousMemory @ 0x14076C16C (ViFreeToContiguousMemory.c)
 *     ViInitializePadding @ 0x14076C958 (ViInitializePadding.c)
 */

char *__fastcall ViAllocateMapRegisterFile(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  SIZE_T v4; // rbp
  char *PoolWithTag; // rax
  char *v6; // rbx
  PMDL Mdl; // rbp
  PVOID v8; // rax
  struct _MDL *v9; // r15
  __int64 *v10; // r14
  __int64 v11; // rax
  PVOID v12; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PVOID v14; // rax
  int v16; // esi
  PVOID *v17; // r14
  void *v18; // rcx

  v3 = a2;
  if ( a2 + *(_DWORD *)(a1 + 160) <= 0x20 )
  {
    if ( a2 )
    {
      v4 = 32 * (a2 - 1) + 120;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x566C6148u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)v4);
        *((_DWORD *)v6 + 7) = v3;
        Mdl = IoAllocateMdl(0LL, v3 << 12, 0, 0, 0LL);
        if ( Mdl )
        {
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int64)v3 << 12, 0x566C6148u);
          *((_QWORD *)v6 + 9) = v8;
          if ( v8 )
          {
            v9 = Mdl + 1;
            v10 = (__int64 *)(v6 + 104);
            do
            {
              v11 = ViAllocateFromContiguousMemory(a1, *((_DWORD *)v6 + 7) - v3);
              *v10 = v11;
              if ( v11 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(a1 + 312));
              }
              else
              {
                v12 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x3000uLL, 0x566C6148u);
                *v10 = (__int64)v12;
                if ( !v12 )
                  goto LABEL_14;
                _InterlockedIncrement((volatile signed __int32 *)(a1 + 316));
              }
              ViInitializePadding(*v10, 12288LL, 0LL, 0LL);
              PhysicalAddress = MmGetPhysicalAddress((PVOID)(*v10 + 4096));
              v10 += 4;
              v9->Next = (struct _MDL *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
              v9 = (struct _MDL *)((char *)v9 + 8);
              --v3;
            }
            while ( v3 );
            Mdl->MdlFlags |= 2u;
            v14 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
            *((_QWORD *)v6 + 8) = v14;
            if ( v14 )
            {
              *((_QWORD *)v6 + 10) = 0LL;
              *((_QWORD *)v6 + 7) = Mdl;
              *(_DWORD *)v6 = -1393569779;
              ExInterlockedInsertHeadList((PLIST_ENTRY)(a1 + 104), (PLIST_ENTRY)(v6 + 8), (PKSPIN_LOCK)(a1 + 120));
              return v6;
            }
          }
        }
LABEL_14:
        v16 = *((_DWORD *)v6 + 7);
        if ( v16 )
        {
          v17 = (PVOID *)(v6 + 104);
          do
          {
            if ( !*v17 )
              break;
            if ( !(unsigned int)ViFreeToContiguousMemory(a1, *v17, (unsigned int)(*((_DWORD *)v6 + 7) - v16)) )
              ExFreePoolWithTag(*v17, 0);
            v17 += 4;
            --v16;
          }
          while ( v16 );
        }
        if ( Mdl )
          IoFreeMdl(Mdl);
        v18 = (void *)*((_QWORD *)v6 + 9);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        ExFreePoolWithTag(v6, 0);
      }
    }
  }
  return 0LL;
}
