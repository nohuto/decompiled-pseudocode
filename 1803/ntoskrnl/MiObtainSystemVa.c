/*
 * XREFs of MiObtainSystemVa @ 0x140049998
 * Callers:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1400C2710 (MiExpandSystemCache.c)
 *     MiMapWithLargePages @ 0x140177EDC (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x14089D6E4 (MiMapBBTMemory.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140049920 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x1400499C0 (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, int a2)
{
  __int64 *v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v4, v3);
}
