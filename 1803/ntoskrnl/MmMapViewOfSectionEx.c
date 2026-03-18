/*
 * XREFs of MmMapViewOfSectionEx @ 0x140069F4C
 * Callers:
 *     PspMapSystemDll @ 0x1404E9248 (PspMapSystemDll.c)
 *     MiMapCfgBitMapSection @ 0x140575A40 (MiMapCfgBitMapSection.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1404E8D2C (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  return MiMapViewOfSectionExCommon(a1, a2, 1, a3, a4, a5, a6, a7, a8, 1, a10, a11, 0);
}
