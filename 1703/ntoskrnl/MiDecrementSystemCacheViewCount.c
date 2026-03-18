/*
 * XREFs of MiDecrementSystemCacheViewCount @ 0x1402122E4
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiDecrementSystemCacheViewCount(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r9
  char result; // al
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v4 = MI_GET_PFN_FROM_PTE(&v6, v1, v2, v3);
  result = *(_BYTE *)(v4 + 39) - 1;
  *(_BYTE *)(v4 + 39) = result;
  return result;
}
