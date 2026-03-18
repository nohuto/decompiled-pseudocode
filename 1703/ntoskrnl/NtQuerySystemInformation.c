/*
 * XREFs of NtQuerySystemInformation @ 0x140528020
 * Callers:
 *     AlpcpInitSystem @ 0x1405D0188 (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *p_Group; // rdx
  NTSTATUS result; // eax
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  if ( SystemInformationClass < SystemProcessorIdleCycleTimeInformation
    && SystemInformationClass >= SystemWow64SharedInformationObsolete
    || SystemInformationClass > (SystemAddVerifier|0x80) )
  {
LABEL_3:
    p_Group = 0LL;
    return ExpQuerySystemInformation(SystemInformationClass, p_Group);
  }
  else
  {
    switch ( SystemInformationClass )
    {
      case SystemProcessorPerformanceInformation:
      case SystemInterruptInformation:
      case SystemPowerInformationNative:
      case SystemProcessorPowerInformation:
      case SystemProcessorIdleCycleTimeInformation:
      case SystemPrefetchPathInformation|SystemPathInformation:
      case SystemPrefetchPathInformation|SystemLocksInformation:
      case SystemStackTraceInformation|0x80:
        Group = KeGetCurrentPrcb()->Group;
        p_Group = &Group;
        return ExpQuerySystemInformation(SystemInformationClass, p_Group);
      case SystemLogicalProcessorInformation:
        Group = 0;
        p_Group = &Group;
        return ExpQuerySystemInformation(SystemInformationClass, p_Group);
      case MaxSystemInfoClass|SystemFlagsInformation:
      case SystemVerifierFaultsInformation|SystemDpcBehaviorInformation:
      case SystemAddVerifier|0x80:
        result = -1073741821;
        break;
      default:
        goto LABEL_3;
    }
  }
  return result;
}
