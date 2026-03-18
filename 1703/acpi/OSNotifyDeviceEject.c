/*
 * XREFs of OSNotifyDeviceEject @ 0x1C00516C8
 * Callers:
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     NotifyHandler @ 0x1C0055070 (NotifyHandler.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00453F4 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rcx

  dword_1C0077574 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  v2 = dword_1C0077574;
  LOBYTE(v2) = 4;
  byte_1C0077578 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    12,
    25,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    a1,
    (__int64)&dword_1C0077574);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v4 )
    ACPIBuildSynchronizationRequestInternal(
      v4,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      v3,
      1);
  return 0LL;
}
