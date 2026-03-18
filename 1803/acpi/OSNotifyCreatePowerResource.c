/*
 * XREFs of OSNotifyCreatePowerResource @ 0x1C002E99C
 * Callers:
 *     OSNotifyCreate @ 0x1C002E5E0 (OSNotifyCreate.c)
 * Callees:
 *     ACPIBuildPowerResourceExtension @ 0x1C000BF54 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C000C080 (ACPIBuildPowerResourceRequest.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(volatile signed __int32 *a1)
{
  char v1; // di
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = (char)a1;
  v2 = ACPIBuildPowerResourceExtension(a1, &v7);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 15;
LABEL_5:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      v5,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v1,
      v2);
    return v4;
  }
  v1 = v7;
  v2 = ACPIBuildPowerResourceRequest(v7);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 16;
    goto LABEL_5;
  }
  return v4;
}
