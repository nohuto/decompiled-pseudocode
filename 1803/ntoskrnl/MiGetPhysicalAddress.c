/*
 * XREFs of MiGetPhysicalAddress @ 0x14003C3F8
 * Callers:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x14003C4FC (MiVaToPfn.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140163350 (MiSetNonPagedPoolNoSteal.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __int16 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v6 = MiVaToPfn(a1);
LABEL_3:
    *a3 = 1;
    goto LABEL_4;
  }
  MiFillPteHierarchy(a1, v13);
  v8 = 4LL;
  do
  {
    if ( (MI_READ_PTE_LOCK_FREE(v13[v8 - 1]) & 1) == 0 )
      return 0LL;
  }
  while ( v8 != 1 );
  v14 = MI_READ_PTE_LOCK_FREE(v13[0]);
  if ( (v14 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 5 )
  {
    MiSetNonPagedPoolNoSteal(v9);
    v14 = MI_READ_PTE_LOCK_FREE(v11);
  }
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL;
  if ( (v10 & 0x800) != 0 )
    goto LABEL_3;
LABEL_4:
  v14 = __PAIR64__(v6 >> 20, ((_DWORD)v6 << 12) + (unsigned int)(a1 & 0xFFF));
  result = 1LL;
  *a2 = v14;
  return result;
}
