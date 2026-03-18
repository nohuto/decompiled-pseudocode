/*
 * XREFs of DbgPrintRIMAlways @ 0x1C00F0070
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDev @ 0x1C000C32C (RIMOpenDev.c)
 *     RIMWatchDog @ 0x1C00180F0 (RIMWatchDog.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007618C (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimInputApc @ 0x1C00954A0 (rimInputApc.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C009C380 (RIMHandleTTMDeviceArrival.c)
 *     RIMOnPowerNotification @ 0x1C00A3A20 (RIMOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C00A49F0 (rimStackAttachAndProcessInput.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01014E4 (RIMDoMobileKeyboardInvalidation.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C010BE50 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010BFF0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIMAlways(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 0, Format, va);
}
