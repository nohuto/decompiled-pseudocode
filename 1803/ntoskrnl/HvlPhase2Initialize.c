/*
 * XREFs of HvlPhase2Initialize @ 0x1401869A4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140072E18 (ExNotifyWithProcessing.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14016BF30 (ExRegisterCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401A57C4 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x14022C4D0 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x14022C620 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14022D2F4 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x14022D518 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x14022D644 (HvlpEtwRegister.c)
 *     HvlpLogHypervisorLaunchError @ 0x14022D68C (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14022D700 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x14022D864 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14022DA04 (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x14022DACC (HvlpWriteEventLog.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140717B14 (HvlpLogMicrocodeUpdateStatus.c)
 *     HvlpDiscoverTopologyComplete @ 0x1408DDDE0 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS result; // eax
  int *v4; // rcx
  unsigned __int16 v5; // ax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v8[2]; // [rsp+60h] [rbp+27h] BYREF
  PVOID SecurityDescriptor; // [rsp+80h] [rbp+47h]
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(_QWORD *)(v1 + 2208);
  ObjectAttributes.RootDirectory = *(HANDLE *)(v1 + 2216);
  ObjectAttributes.ObjectName = *(PUNICODE_STRING *)(v1 + 2224);
  *(_QWORD *)&ObjectAttributes.Attributes = *(_QWORD *)(v1 + 2232);
  ObjectAttributes.SecurityDescriptor = *(PVOID *)(v1 + 2240);
  *(_QWORD *)&ObjectAttributes.Length = v2;
  if ( v2 )
  {
    HvlpEtwRegister();
    v8[0] = *(_OWORD *)&ObjectAttributes.Length;
    SecurityDescriptor = ObjectAttributes.SecurityDescriptor;
    v8[1] = *(_OWORD *)&ObjectAttributes.ObjectName;
    HvlpLogHypervisorLaunchError(v8);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpDiscoverTopologyComplete();
    HvlpDetectHypervisorSchedulerType();
    if ( HvlpRootSchedulerEnabled )
    {
      result = HvlpInitializeSvmIommuSupport();
      if ( result >= 0 )
      {
        result = 0;
      }
      else if ( result == -1073741637 )
      {
        goto LABEL_11;
      }
      if ( result < 0 )
        return result;
    }
  }
LABEL_11:
  IoAddTriageDumpDataBlock((int)&HvlpFlags, 4);
  IoAddTriageDumpDataBlock((int)&HvlpRootFlags, 4);
  IoAddTriageDumpDataBlock((int)&HvlpEnlightenments, 4);
  if ( (HvlpRootFlags & 1) == 0 )
  {
LABEL_18:
    if ( ExCbEnlightenmentState )
      ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
    HvlpRegisterPowerPolicyCallbacks();
    return 0;
  }
  HvlpEtwRegister();
  HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
  HvlpLogHypervisorSchedulerType();
  HvlpCheckTscSync();
  HvlpLogIommuInitStatus();
  HvlpLogGuestStateScrubbingStatus();
  if ( (unsigned int)HvlpLogicalProcessorCount < 0x200 )
  {
    v4 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
    if ( !*v4 )
    {
      v5 = *((_WORD *)v4 + 28);
      if ( v5 )
        HvlpLogProcessorStartupFailure((unsigned int)v4[2], v5);
    }
  }
  HvlpLogMicrocodeUpdateStatus();
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  CallbackObject = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, HvlpPowerStateCallback, 0LL);
    goto LABEL_18;
  }
  return result;
}
