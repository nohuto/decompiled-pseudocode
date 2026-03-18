/*
 * XREFs of MiDecrementSystemCacheViewCount @ 0x140219D8C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

char __fastcall MiDecrementSystemCacheViewCount(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  char result; // al
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  v6 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    v6 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
  }
  v9 = PteShadow;
  v7 = MI_GET_PFN_FROM_PTE(&v9, v6, a3, a4);
  result = *(_BYTE *)(v7 + 39) - 1;
  *(_BYTE *)(v7 + 39) = result;
  return result;
}
