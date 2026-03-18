/*
 * XREFs of DbgPrintRIMAlways @ 0x1C00FF030
 * Callers:
 *     RIMWatchDog @ 0x1C0051AD0 (RIMWatchDog.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00671EC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimInputApc @ 0x1C008E100 (rimInputApc.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C0092B80 (RIMHandleTTMDeviceArrival.c)
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C0099CF0 (rimStackAttachAndProcessInput.c)
 *     RIMOnPowerNotification @ 0x1C009AAC0 (RIMOnPowerNotification.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01010A0 (RIMDoMobileKeyboardInvalidation.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0108634 (RIMTransformPhysicalPointToScreen.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C010CE80 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010D020 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIMAlways(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 0, Format, va);
}
