/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009D17C
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00830B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0083480 (ACPIFilterIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042598 (ACPIDockFindCorrespondingDock.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C0042C54 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIDetectEjectDevices @ 0x1C0047D78 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r8
  const char *v8; // rax
  const char *v9; // r10
  __int64 CorrespondingDock; // rax
  int v12; // edi
  __int64 v13; // r8
  const char *v14; // rax
  const char *v15; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    if ( ACPIDockIsDockDevice() )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v12 = ACPIDetectEjectDevices((__int64)v6, a3, CorrespondingDock);
    if ( v12 < 0 )
    {
      v13 = v6[1];
      v14 = byte_1C0066CD0;
      v15 = byte_1C0066CD0;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)v6[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)v6[71];
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x11u,
        (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
        v12,
        (char)v6,
        v14,
        v15);
    }
    return (unsigned int)v12;
  }
  else
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = byte_1C0066CD0;
    v9 = byte_1C0066CD0;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v6[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = (const char *)v6[71];
    }
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      a2,
      0,
      (char)v6,
      v8,
      v9);
    return 3221225485LL;
  }
}
