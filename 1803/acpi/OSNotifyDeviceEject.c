/*
 * XREFs of OSNotifyDeviceEject @ 0x1C002ED08
 * Callers:
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     NotifyHandler @ 0x1C0035A50 (NotifyHandler.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0012C5C (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rcx

  dword_1C00678C0 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  v2 = dword_1C00678C0;
  LOBYTE(v2) = 4;
  byte_1C00678C4 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    12,
    25,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a1,
    (__int64)&dword_1C00678C0);
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
