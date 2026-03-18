/*
 * XREFs of MiGetPfnLink @ 0x1400D1210
 * Callers:
 *     MiFreeReadListPages @ 0x1404BBFB8 (MiFreeReadListPages.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x14062B8BC (MiMakeShadowPageTableRange.c)
 *     MiGetPageForEnclave @ 0x140752384 (MiGetPageForEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140752CD4 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
