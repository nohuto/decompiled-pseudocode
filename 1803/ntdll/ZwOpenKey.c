/*
 * XREFs of ZwOpenKey @ 0x18009AD00
 * Callers:
 *     EtwpGetCpuSpeed_0 @ 0x180009478 (EtwpGetCpuSpeed_0.c)
 *     sub_180009558 @ 0x180009558 (sub_180009558.c)
 *     sub_18000983C @ 0x18000983C (sub_18000983C.c)
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     sub_180031574 @ 0x180031574 (sub_180031574.c)
 *     sub_180041624 @ 0x180041624 (sub_180041624.c)
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     sub_18004E6B0 @ 0x18004E6B0 (sub_18004E6B0.c)
 *     sub_18006E5A4 @ 0x18006E5A4 (sub_18006E5A4.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006E970 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     RtlOpenCurrentUser @ 0x18006F9B0 (RtlOpenCurrentUser.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180075690 (RtlpGetDeviceFamilyInfoEnum.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_180076424 @ 0x180076424 (sub_180076424.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     RtlGetPersistedStateLocation @ 0x180079AB0 (RtlGetPersistedStateLocation.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_18007CF10 @ 0x18007CF10 (sub_18007CF10.c)
 *     RtlpNtOpenKey @ 0x18007D860 (RtlpNtOpenKey.c)
 *     sub_180085FA8 @ 0x180085FA8 (sub_180085FA8.c)
 *     sub_180088E4C @ 0x180088E4C (sub_180088E4C.c)
 *     sub_180089438 @ 0x180089438 (sub_180089438.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D48E4 @ 0x1800D48E4 (sub_1800D48E4.c)
 *     sub_1800D8768 @ 0x1800D8768 (sub_1800D8768.c)
 *     sub_1800D8814 @ 0x1800D8814 (sub_1800D8814.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 *     sub_1800DBE70 @ 0x1800DBE70 (sub_1800DBE70.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800DBF00 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E6F44 @ 0x1800E6F44 (sub_1800E6F44.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800ECD38 @ 0x1800ECD38 (sub_1800ECD38.c)
 *     sub_1800F287C @ 0x1800F287C (sub_1800F287C.c)
 *     RtlOsDeploymentState @ 0x1800F7160 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F72A0 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 *     sub_1801043C8 @ 0x1801043C8 (sub_1801043C8.c)
 *     sub_18010E964 @ 0x18010E964 (sub_18010E964.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
