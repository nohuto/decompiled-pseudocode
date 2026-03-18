/*
 * XREFs of OSNotifyCreateThermalZone @ 0x1C002A160
 * Callers:
 *     OSNotifyCreate @ 0x1C001C840 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002A1CC (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002A2B0 (ACPIBuildThermalZoneExtension.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(__int64 a1, unsigned __int64 a2)
{
  char v3; // di
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v9; // r9d
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = a1;
  v4 = ACPIBuildThermalZoneExtension(a1, a2, &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = 20;
    goto LABEL_6;
  }
  ACPIInitReferenceDeviceExtension(v10);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), a2);
  v3 = v10;
  v4 = ACPIBuildThermalZoneRequest(v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = 21;
LABEL_6:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      v9,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
      v3,
      v4);
  }
  return v6;
}
