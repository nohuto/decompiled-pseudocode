/*
 * XREFs of ZwQueryValueKey @ 0x18009ADA0
 * Callers:
 *     EtwpGetCpuSpeed_0 @ 0x180009478 (EtwpGetCpuSpeed_0.c)
 *     sub_180009558 @ 0x180009558 (sub_180009558.c)
 *     sub_18000983C @ 0x18000983C (sub_18000983C.c)
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     sub_18006E5A4 @ 0x18006E5A4 (sub_18006E5A4.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 *     sub_1800758D4 @ 0x1800758D4 (sub_1800758D4.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     RtlGetPersistedStateLocation @ 0x180079AB0 (RtlGetPersistedStateLocation.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     RtlpNtQueryValueKey @ 0x18007CDF0 (RtlpNtQueryValueKey.c)
 *     sub_18007CF10 @ 0x18007CF10 (sub_18007CF10.c)
 *     sub_180081384 @ 0x180081384 (sub_180081384.c)
 *     sub_180085FA8 @ 0x180085FA8 (sub_180085FA8.c)
 *     sub_180088E4C @ 0x180088E4C (sub_180088E4C.c)
 *     RtlInitializeRXact @ 0x18008A4F0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800C86BC @ 0x1800C86BC (sub_1800C86BC.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D0488 @ 0x1800D0488 (sub_1800D0488.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800D88C0 @ 0x1800D88C0 (sub_1800D88C0.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800DBF00 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E6F44 @ 0x1800E6F44 (sub_1800E6F44.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800E7320 (RtlQueryRegistryValueWithFallback.c)
 *     sub_1800ECD38 @ 0x1800ECD38 (sub_1800ECD38.c)
 *     sub_1800F2924 @ 0x1800F2924 (sub_1800F2924.c)
 *     RtlOsDeploymentState @ 0x1800F7160 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F72A0 (RtlQueryValidationRunlevel.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 *     sub_1801043C8 @ 0x1801043C8 (sub_1801043C8.c)
 *     sub_18010E7D8 @ 0x18010E7D8 (sub_18010E7D8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
