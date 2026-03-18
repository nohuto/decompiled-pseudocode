/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C00936CC
 * Callers:
 *     ACPIDispatchIrp @ 0x1C00010A0 (ACPIDispatchIrp.c)
 * Callees:
 *     AMLIGetNSObjectNotifyFlag @ 0x1C0028814 (AMLIGetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_sqL @ 0x1C004B2C8 (WPP_RECORDER_SF_sqL.c)
 *     WPP_RECORDER_SF_sqSD @ 0x1C004C230 (WPP_RECORDER_SF_sqSD.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008E2C4 (ACPIQueryDeviceBiosName.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C009E71C (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 712);
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  if ( v2 && (unsigned __int8)AMLIGetNSObjectNotifyFlag(v2) )
  {
    v5 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v12);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation(&v12, *(_QWORD *)(a1 + 720));
      if ( v3 < 0 )
        WPP_RECORDER_SF_sqSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, v10);
    }
    else
    {
      v11 = v5;
      WPP_RECORDER_SF_sqL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x14u,
        (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
        "ACPIInternalNotifyAvailableDeviceObject",
        *(_QWORD *)(a1 + 720),
        v11);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0x53706341u);
  return (unsigned int)v3;
}
