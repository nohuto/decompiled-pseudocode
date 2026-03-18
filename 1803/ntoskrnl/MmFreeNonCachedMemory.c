/*
 * XREFs of MmFreeNonCachedMemory @ 0x14074B840
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFreePagesFromMdl @ 0x1400CEF30 (MmFreePagesFromMdl.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiSetPfnOriginalPte @ 0x1401A6920 (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  unsigned __int64 PteAddress; // rdi
  struct _MDL *v4; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v7 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v4 = *(struct _MDL **)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v6, DemandZeroPte);
  MmFreePagesFromMdl(v4);
  ExFreePoolWithTag(v4, 0);
  MiReleasePtes(
    (__int64)&qword_1403CC5E0,
    PteAddress,
    (unsigned int)(NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0));
}
