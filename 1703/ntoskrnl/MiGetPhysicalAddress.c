/*
 * XREFs of MiGetPhysicalAddress @ 0x1400A7900
 * Callers:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 * Callees:
 *     MiSetNonPagedPoolNoSteal @ 0x14003C144 (MiSetNonPagedPoolNoSteal.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // r10
  __int16 v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+38h] [rbp-30h]

  *a3 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v6 = MiVaToPfn(a1);
LABEL_10:
    *a3 = 1;
    goto LABEL_11;
  }
  v14 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 3;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    if ( (MI_READ_PTE_LOCK_FREE(*(&v14 + (unsigned int)(v7 - 1))) & 1) == 0 )
      return 0LL;
  }
  while ( v7 );
  v13 = MI_READ_PTE_LOCK_FREE(v8 + ((a1 >> 9) & 0x7FFFFFFFF8LL));
  if ( (v13 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 5 )
  {
    MiSetNonPagedPoolNoSteal(v9);
    v13 = MI_READ_PTE_LOCK_FREE(v10);
  }
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v13) >> 12) & 0xFFFFFFFFFLL;
  if ( (v11 & 0x800) != 0 )
    goto LABEL_10;
LABEL_11:
  v13 = v6 << 12;
  result = 1LL;
  LODWORD(v13) = (a1 & 0xFFF) + v13;
  *a2 = v13;
  return result;
}
