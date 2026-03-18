/*
 * XREFs of MiObtainSystemVa @ 0x1401282A4
 * Callers:
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MiMapWithLargePages @ 0x14014734C (MiMapWithLargePages.c)
 *     MiGetLargePageWorkMapping @ 0x140158B08 (MiGetLargePageWorkMapping.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x14080308C (MiMapBBTMemory.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, unsigned int a2)
{
  __int64 *v3; // rcx

  switch ( a2 )
  {
    case 8u:
      v3 = &qword_14036C480;
      break;
    case 6u:
      v3 = &qword_14036C3A8;
      break;
    case 9u:
    case 0xFu:
      v3 = &qword_14036C2D0;
      break;
    case 0xCu:
      v3 = &qword_14036C318;
      break;
    case 0xBu:
      v3 = (__int64 *)&unk_14036C360;
      break;
    default:
      v3 = &qword_14036C438;
      if ( a2 != 7 )
        v3 = (__int64 *)&unk_14036C3F0;
      break;
  }
  return MiObtainDynamicVa(v3, a1, a2);
}
