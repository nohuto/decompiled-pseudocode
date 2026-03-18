/*
 * XREFs of _PnpCtxRegEnumValue @ 0x14058469C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14058445C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407810BC (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140781540 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140782FD0 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x140588538 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
