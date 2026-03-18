/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x140212660
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  result = MI_GET_PFN_FROM_PTE(&v6, v1, v2, v3);
  *(_QWORD *)(result + 16) = v5;
  return result;
}
