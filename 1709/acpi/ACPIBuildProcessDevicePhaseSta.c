/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x1C001EB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E1F8 (ACPIDetectDuplicateHID.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     LinkNodeAddLinkNode @ 0x1C002AF90 (LinkNodeAddLinkNode.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C0055994 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  __int64 v1; // rbx
  const char *v3; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v1 + 8) & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 184));
    *(_DWORD *)(v1 + 196) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  *(_DWORD *)(a1 + 32) = 14;
  v3 = (const char *)&unk_1C0067B08;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C0067B08;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v3 = *(const char **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x30u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    0,
    v1,
    v3,
    v5);
  ACPIDetectDuplicateHID((_QWORD *)v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  v6 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v6);
  return 0LL;
}
