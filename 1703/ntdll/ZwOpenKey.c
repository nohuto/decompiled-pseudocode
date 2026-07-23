/*
 * XREFs of ZwOpenKey @ 0x1800A5540
 * Callers:
 *     sub_180004DBC @ 0x180004DBC (sub_180004DBC.c)
 *     RtlOpenCurrentUser @ 0x18003B960 (RtlOpenCurrentUser.c)
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 *     sub_18005021C @ 0x18005021C (sub_18005021C.c)
 *     sub_180050AC0 @ 0x180050AC0 (sub_180050AC0.c)
 *     EtwpGetCpuSpeed_0 @ 0x180053FB8 (EtwpGetCpuSpeed_0.c)
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_18005D1A4 @ 0x18005D1A4 (sub_18005D1A4.c)
 *     sub_18006C31C @ 0x18006C31C (sub_18006C31C.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006C490 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006E400 (RtlpLoadUserUIByPolicy.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800795F0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     sub_18007C40C @ 0x18007C40C (sub_18007C40C.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_1800818B0 @ 0x1800818B0 (sub_1800818B0.c)
 *     RtlpNtOpenKey @ 0x180082600 (RtlpNtOpenKey.c)
 *     sub_18008A858 @ 0x18008A858 (sub_18008A858.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800DB144 @ 0x1800DB144 (sub_1800DB144.c)
 *     sub_1800DEEF4 @ 0x1800DEEF4 (sub_1800DEEF4.c)
 *     sub_1800DEFA0 @ 0x1800DEFA0 (sub_1800DEFA0.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 *     sub_1800E21DC @ 0x1800E21DC (sub_1800E21DC.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F52EC @ 0x1800F52EC (sub_1800F52EC.c)
 *     sub_1800F546C @ 0x1800F546C (sub_1800F546C.c)
 *     sub_1800F5960 @ 0x1800F5960 (sub_1800F5960.c)
 *     RtlOsDeploymentState @ 0x1800F9660 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F97A0 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F9FF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 *     sub_1800FD750 @ 0x1800FD750 (sub_1800FD750.c)
 *     sub_18010B774 @ 0x18010B774 (sub_18010B774.c)
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
