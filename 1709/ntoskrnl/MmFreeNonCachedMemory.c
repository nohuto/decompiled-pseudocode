/*
 * XREFs of MmFreeNonCachedMemory @ 0x1406E0910
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MmFreePagesFromMdl @ 0x140130F50 (MmFreePagesFromMdl.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiSetPfnOriginalPte @ 0x14017CAF8 (MiSetPfnOriginalPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rsi
  __int64 *PteAddress; // rdi
  __int64 PteShadow; // rax
  struct _MDL *v5; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)BaseAddress);
  PteShadow = *PteAddress;
  if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v9 = PteShadow;
  v5 = *(struct _MDL **)(MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v9) + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_140389360, (unsigned __int64)PteAddress, v2, v8);
}
