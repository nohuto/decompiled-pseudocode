/*
 * XREFs of HvlPhase2Initialize @ 0x14015CA00
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExNotifyWithProcessing @ 0x1400AEAC8 (ExNotifyWithProcessing.c)
 *     ExRegisterCallback @ 0x14012D810 (ExRegisterCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017AF44 (HvlpLogGuestStateScrubbingStatus.c)
 *     CmLogMcUpdateStatus @ 0x1401E3D98 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401EA6B8 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401EEC30 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1401EED80 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x1401F02EC (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x1401F0418 (HvlpEtwRegister.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401F0460 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401F04D4 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x1401F0638 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401F07D8 (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x1401F08A0 (HvlpWriteEventLog.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401F08E4 (HvlpDetectHypervisorSchedulerType.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     HvlpDiscoverTopologyComplete @ 0x1408695A8 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS result; // eax
  int *v4; // rcx
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  ULONG *v7; // rdi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v11[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID SecurityDescriptor; // [rsp+98h] [rbp-70h]
  _BYTE v13[3264]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(_QWORD *)(v1 + 2208);
  *(_OWORD *)&CallbackObject_8.RootDirectory = *(_OWORD *)(v1 + 2216);
  *(_OWORD *)&CallbackObject_8.Attributes = *(_OWORD *)(v1 + 2232);
  *(_QWORD *)&CallbackObject_8.Length = v2;
  if ( v2 )
  {
    HvlpEtwRegister();
    v11[0] = *(_OWORD *)&CallbackObject_8.Length;
    SecurityDescriptor = CallbackObject_8.SecurityDescriptor;
    v11[1] = *(_OWORD *)&CallbackObject_8.ObjectName;
    HvlpLogHypervisorLaunchError(v11);
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
LABEL_22:
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
  v6 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v7 = (ULONG *)&dword_140408354;
    do
    {
      HvlpGetLogicalProcessorProperty(*v7, 5LL, v13);
      if ( (int)CmLogMcUpdateStatus(*v7) < 0 )
        break;
      ++v6;
      v7 += 30;
    }
    while ( v6 < (unsigned int)HvlpLogicalProcessorCount );
  }
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  CallbackObject_8.Length = 48;
  CallbackObject_8.ObjectName = &DestinationString;
  CallbackObject_8.RootDirectory = 0LL;
  CallbackObject_8.Attributes = 80;
  CallbackObject = 0LL;
  *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &CallbackObject_8, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, HvlpPowerStateCallback, 0LL);
    goto LABEL_22;
  }
  return result;
}
