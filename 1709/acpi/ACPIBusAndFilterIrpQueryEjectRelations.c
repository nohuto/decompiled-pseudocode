/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A014C
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0087230 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008C7B0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqss @ 0x1C0001518 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042104 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C00474C4 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // r10
  __int64 CorrespondingDock; // rax
  int v13; // edi
  __int64 v14; // r8
  const char *v15; // rax
  const char *v16; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  v7 = *(__int64 **)(DeviceExtension + 712);
  if ( v7 )
  {
    if ( ACPIDockIsDockDevice(v7) )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v13 = ACPIDetectEjectDevices((__int64)v6, a3, CorrespondingDock);
    if ( v13 < 0 )
    {
      v14 = v6[1];
      v15 = byte_1C0067B08;
      v16 = byte_1C0067B08;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (const char *)v6[70];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (const char *)v6[71];
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x11u,
        (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
        v13,
        (char)v6,
        v15,
        v16);
    }
    return (unsigned int)v13;
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C0067B08;
    v10 = byte_1C0067B08;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v6[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = (const char *)v6[71];
    }
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
      a2,
      0,
      (char)v6,
      v9,
      v10);
    return 3221225485LL;
  }
}
