/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1404E67DC
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14073C984 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14073CE10 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14073EA7C (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x140445A14 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        unsigned int *a5,
        _DWORD *a6,
        void *a7,
        unsigned int *a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
