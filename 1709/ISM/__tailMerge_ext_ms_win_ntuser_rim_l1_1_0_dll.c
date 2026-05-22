/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x1800CBBC9
 * Callers:
 *     __imp_load_RIMSetTestModeStatus @ 0x1800CBBBD (__imp_load_RIMSetTestModeStatus.c)
 *     __imp_load_RIMDeviceIoControl @ 0x1800CBC42 (__imp_load_RIMDeviceIoControl.c)
 *     __imp_load_RIMFreeInputBuffer @ 0x1800CBC4E (__imp_load_RIMFreeInputBuffer.c)
 *     __imp_load_RIMRegisterForInput @ 0x1800CBC5A (__imp_load_RIMRegisterForInput.c)
 *     __imp_load_RIMReadInput @ 0x1800CBC66 (__imp_load_RIMReadInput.c)
 *     __imp_load_RIMOnPnpNotification @ 0x1800CBC72 (__imp_load_RIMOnPnpNotification.c)
 *     __imp_load_RIMOnTimerNotification @ 0x1800CBC7E (__imp_load_RIMOnTimerNotification.c)
 *     __imp_load_RIMGetSourceProcessId @ 0x1800CBC8A (__imp_load_RIMGetSourceProcessId.c)
 *     __imp_load_RIMGetPhysicalDeviceRect @ 0x1800CBC96 (__imp_load_RIMGetPhysicalDeviceRect.c)
 *     __imp_load_RIMGetDeviceProperties @ 0x1800CBCA2 (__imp_load_RIMGetDeviceProperties.c)
 *     __imp_load_RIMEnableMonitorMappingForDevice @ 0x1800CBCAE (__imp_load_RIMEnableMonitorMappingForDevice.c)
 *     __imp_load_RIMGetDevicePreparsedData @ 0x1800CBCBA (__imp_load_RIMGetDevicePreparsedData.c)
 *     __imp_load_InitializeInputDeviceInjection @ 0x1800CC125 (__imp_load_InitializeInputDeviceInjection.c)
 *     __imp_load_InjectPointerInput @ 0x1800CC131 (__imp_load_InjectPointerInput.c)
 *     __imp_load_RemoveInjectionDevice @ 0x1800CC13D (__imp_load_RemoveInjectionDevice.c)
 *     __imp_load_InjectDeviceInput @ 0x1800CC1CE (__imp_load_InjectDeviceInput.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180005A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rim_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
