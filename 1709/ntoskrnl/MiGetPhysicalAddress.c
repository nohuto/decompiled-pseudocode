/*
 * XREFs of MiGetPhysicalAddress @ 0x1400BBFF0
 * Callers:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiSetNonPagedPoolNoSteal @ 0x14015B274 (MiSetNonPagedPoolNoSteal.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // r10
  __int64 PteShadow; // r9
  __int64 v13; // r10
  __int64 *v14; // r10
  unsigned __int64 v15; // r11
  __int64 v16; // r9
  __int16 v17; // r9
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]

  *a3 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v6 = MiVaToPfn(a1);
LABEL_19:
    *a3 = 1;
    goto LABEL_20;
  }
  v20 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v7) = 3;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v7 = (unsigned int)(v7 - 1);
    v9 = (_QWORD *)*(&v20 + v7);
    v10 = *v9;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= v8 )
      LOBYTE(v10) = MiReadPteShadow(v9, *v9);
    if ( (v10 & 1) == 0 )
      return 0LL;
  }
  while ( (_DWORD)v7 );
  v11 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v11;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= v8 )
    PteShadow = MiReadPteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v11);
  v19 = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 5 )
  {
    MiSetNonPagedPoolNoSteal(v13);
    v16 = *v14;
    if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= v15 )
      v16 = MiReadPteShadow(v14, *v14);
    v19 = v16;
  }
  v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
  if ( (v17 & 0x800) != 0 )
    goto LABEL_19;
LABEL_20:
  v19 = v6 << 12;
  result = 1LL;
  LODWORD(v19) = (a1 & 0xFFF) + v19;
  *a2 = v19;
  return result;
}
