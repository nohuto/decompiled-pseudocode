/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C0079C98
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_sqL @ 0x1C0020584 (WPP_RECORDER_SF_sqL.c)
 *     WPP_RECORDER_SF_sqSD @ 0x1C002170C (WPP_RECORDER_SF_sqSD.c)
 *     AMLIGetNSObjectNotifyFlag @ 0x1C0043A54 (AMLIGetNSObjectNotifyFlag.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C007A774 (AcpiExternalAddBiosNameDeviceAssociation.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  PVOID P; // [rsp+58h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 712);
  v13 = 0LL;
  P = 0LL;
  if ( v2 && AMLIGetNSObjectNotifyFlag(v2) )
  {
    v4 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v13);
    v5 = *(_QWORD *)(a1 + 720);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation(&v13, v5);
      if ( v3 < 0 )
        WPP_RECORDER_SF_sqSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v10, v11);
    }
    else
    {
      v12 = v4;
      WPP_RECORDER_SF_sqL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x14u,
        (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
        "ACPIInternalNotifyAvailableDeviceObject",
        v5,
        v12);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v3;
}
