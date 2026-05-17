/*
 * XREFs of NtQuerySystemInformation @ 0x1800A0780
 * Callers:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 *     TpInitializePackage @ 0x1800032C0 (TpInitializePackage.c)
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlSystemTimeToLocalTime @ 0x180084F90 (RtlSystemTimeToLocalTime.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008B7E0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CE750 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800D6C08 (LdrInitializeMrdata.c)
 *     RtlResetStackOverflow @ 0x1800DDA78 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800E29A0 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E4500 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F3DD0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F6F30 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010635C (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
