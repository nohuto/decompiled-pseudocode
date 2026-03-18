/*
 * XREFs of MiObtainSystemVa @ 0x1400F61D8
 * Callers:
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiMapWithLargePages @ 0x14014F450 (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x14085826C (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1400F6200 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v5, v4);
}
