/*
 * XREFs of MmFreeNonCachedMemory @ 0x1406B4910
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x140033E40 (MmFreePagesFromMdl.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiSetPfnOriginalPte @ 0x14017D2B0 (MiSetPfnOriginalPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  _BOOL8 v3; // rsi
  _QWORD *PteAddress; // rdi
  struct _MDL *v5; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = (NumberOfBytes & 0xFFF) != 0;
  PteAddress = (_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  v5 = *(struct _MDL **)(MI_GET_PFN_FROM_PTE((__int64)&v8) + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_14036D0A0, PteAddress, v3 + (NumberOfBytes >> 12));
}
