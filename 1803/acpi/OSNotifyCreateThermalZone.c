/*
 * XREFs of OSNotifyCreateThermalZone @ 0x1C002EAFC
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C002E5E0 (OSNotifyCreate.c)
 * Callees:
 *     ACPIBuildThermalZoneExtension @ 0x1C001192C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0011B7C (ACPIBuildThermalZoneRequest.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(volatile signed __int32 *a1, unsigned __int64 a2)
{
  char v3; // di
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = (char)a1;
  v4 = ACPIBuildThermalZoneExtension(a1, a2, &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = 20;
    goto LABEL_5;
  }
  ACPIInitReferenceDeviceExtension(v10);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), a2);
  v3 = v10;
  v4 = ACPIBuildThermalZoneRequest(v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = 21;
LABEL_5:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      v8,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v3,
      v4);
  }
  return v6;
}
