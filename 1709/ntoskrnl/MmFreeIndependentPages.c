/*
 * XREFs of MmFreeIndependentPages @ 0x1405D59B0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401F0038 (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1402844D0 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x1406B3034 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1406BA9B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1406BAD4C (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1406BB07C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1406BB3C0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406BB5EC (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1406E5004 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400C01C4 (MiReturnNonPagedPoolCharges.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 *PteAddress; // rbx
  __int64 *v5; // r15
  __int64 PteShadow; // rax
  __int64 v7; // r10
  __int64 v8; // rbp
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v15; // [rsp+90h] [rbp+18h]

  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v3 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v10 = v3;
  v13 = v3;
  PteAddress = (__int64 *)MiGetPteAddress(a1);
  v15 = PteAddress;
  v5 = &PteAddress[v3];
  do
  {
    PteShadow = *PteAddress;
    if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v14 = PteShadow;
    v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v14) - 0x58000000000LL;
    v8 = 48 * (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    *PteAddress = 0LL;
    if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    if ( (unsigned int)MiLockAndDecrementShareCount(v7, 1) == 3 )
      v11 = ++v2;
    MiLockAndDecrementShareCount(v8, 0);
    ++PteAddress;
  }
  while ( PteAddress < v5 );
  MiReleasePtes((__int64)&qword_140389360, (unsigned __int64)v15, v3, v9);
  MiReturnNonPagedPoolCharges(&v10, 1);
}
