/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1404E660C
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14073CE10 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14073D28C (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140742C9C (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, void *a2, _DWORD *a3, __int64 a4, _DWORD *a5, unsigned int *a6)
{
  return RegRtlQueryInfoKey(a2, a3, 0LL, a5, a6, 0LL);
}
