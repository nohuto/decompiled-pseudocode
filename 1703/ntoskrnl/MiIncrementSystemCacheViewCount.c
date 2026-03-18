/*
 * XREFs of MiIncrementSystemCacheViewCount @ 0x14021232C
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIncrementSystemCacheViewCount(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  result = MI_GET_PFN_FROM_PTE(&v5, v1, v2, v3);
  ++*(_BYTE *)(result + 39);
  return result;
}
