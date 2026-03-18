/*
 * XREFs of OSNotifyDeviceEject @ 0x1C0052108
 * Callers:
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     NotifyHandler @ 0x1C0055C60 (NotifyHandler.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0044DB8 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx

  dword_1C0079638 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C007963C = 0;
  WPP_RECORDER_SF_qs(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xCu,
    0x19u,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    a1,
    (const char *)&dword_1C0079638);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v3 )
    ACPIBuildSynchronizationRequestInternal(
      v3,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      v2,
      1);
  return 0LL;
}
