/*
 * XREFs of HvlPhase2Initialize @ 0x140168040
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14006EED0 (ExNotifyWithProcessing.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x140148580 (ExRegisterCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017B6EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x14017B8E8 (HvlpDetectHypervisorSchedulerType.c)
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401E586C (HvlpGetLogicalProcessorProperty.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401E9B50 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpCheckTscSync @ 0x1401EB060 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x1401EB18C (HvlpEtwRegister.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401EB1D4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401EB248 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x1401EB3AC (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401EB54C (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x1401EB614 (HvlpWriteEventLog.c)
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     HvlpDiscoverTopologyComplete @ 0x1408326B4 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // eax
  int *v4; // rcx
  unsigned __int16 v5; // ax
  unsigned int v6; // edi
  ULONG *v7; // rbx
  NTSTATUS result; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v12[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID SecurityDescriptor; // [rsp+98h] [rbp-70h]
  _BYTE v14[3264]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(_QWORD *)(v1 + 2208);
  *(_OWORD *)&CallbackObject_8.RootDirectory = *(_OWORD *)(v1 + 2216);
  *(_OWORD *)&CallbackObject_8.Attributes = *(_OWORD *)(v1 + 2232);
  *(_QWORD *)&CallbackObject_8.Length = v2;
  if ( v2 )
  {
    HvlpEtwRegister();
    v12[0] = *(_OWORD *)&CallbackObject_8.Length;
    SecurityDescriptor = CallbackObject_8.SecurityDescriptor;
    v12[1] = *(_OWORD *)&CallbackObject_8.ObjectName;
    HvlpLogHypervisorLaunchError(v12);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpDiscoverTopologyComplete();
    HvlpDetectHypervisorSchedulerType();
  }
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
  v3 = HvlpLogicalProcessorCount;
  if ( (unsigned int)HvlpLogicalProcessorCount < 0x200 )
  {
    v4 = &HvlpLogicalProcessorRegions[28 * (unsigned int)HvlpLogicalProcessorCount];
    if ( !*v4 )
    {
      v5 = *((_WORD *)v4 + 24);
      if ( v5 )
        HvlpLogProcessorStartupFailure((unsigned int)v4[2], v5);
    }
    v3 = HvlpLogicalProcessorCount;
  }
  v6 = 0;
  if ( v3 )
  {
    v7 = (ULONG *)&dword_1403E8DB4;
    do
    {
      HvlpGetLogicalProcessorProperty(*v7, 5LL, v14);
      if ( (int)CmLogMcUpdateStatus(*v7) < 0 )
        break;
      ++v6;
      v7 += 28;
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
    goto LABEL_18;
  }
  return result;
}
