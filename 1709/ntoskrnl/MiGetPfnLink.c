/*
 * XREFs of MiGetPfnLink @ 0x14012FE20
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14043D2B4 (MiMakeShadowPageTableRange.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x1404D1E58 (MiFreeReadListPages.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MiGetPageForEnclave @ 0x1406E8908 (MiGetPageForEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1406E9118 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
