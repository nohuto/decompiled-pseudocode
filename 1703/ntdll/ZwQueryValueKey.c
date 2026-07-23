/*
 * XREFs of ZwQueryValueKey @ 0x1800A55E0
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 *     sub_18005021C @ 0x18005021C (sub_18005021C.c)
 *     sub_180050AC0 @ 0x180050AC0 (sub_180050AC0.c)
 *     EtwpGetCpuSpeed_0 @ 0x180053FB8 (EtwpGetCpuSpeed_0.c)
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     sub_18005DF88 @ 0x18005DF88 (sub_18005DF88.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     sub_180079820 @ 0x180079820 (sub_180079820.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     RtlpNtQueryValueKey @ 0x180080B00 (RtlpNtQueryValueKey.c)
 *     sub_1800818B0 @ 0x1800818B0 (sub_1800818B0.c)
 *     sub_18008A858 @ 0x18008A858 (sub_18008A858.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D400C @ 0x1800D400C (sub_1800D400C.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800DF04C @ 0x1800DF04C (sub_1800DF04C.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 *     sub_1800F5394 @ 0x1800F5394 (sub_1800F5394.c)
 *     sub_1800F546C @ 0x1800F546C (sub_1800F546C.c)
 *     sub_1800F5960 @ 0x1800F5960 (sub_1800F5960.c)
 *     RtlOsDeploymentState @ 0x1800F9660 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F97A0 (RtlQueryValidationRunlevel.c)
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 *     sub_18010B5E8 @ 0x18010B5E8 (sub_18010B5E8.c)
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
