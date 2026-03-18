/*
 * XREFs of MiInitializeDynamicRegion @ 0x14082D78C
 * Callers:
 *     MiInitializeSystemCache @ 0x1405B3A64 (MiInitializeSystemCache.c)
 *     MiInitializeSpecialPool @ 0x1405B6FA0 (MiInitializeSpecialPool.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
