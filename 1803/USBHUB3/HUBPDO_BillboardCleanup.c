/*
 * XREFs of HUBPDO_BillboardCleanup @ 0x1C006AC90
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0016110 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B150 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000CA5C (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBPDO_BillboardCleanup(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int updated; // eax
  __int64 v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  _DWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  void *v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 2640) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v9[1] = 0;
    v11 = 0LL;
    v9[0] = 24;
    v10 = &DEVPKEY_Device_UsbBillboardInfo;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *, __int64, _DWORD, _QWORD))(WdfFunctions_01015 + 3480))(
           WdfDriverGlobals,
           v3,
           v9,
           4099LL,
           0,
           0LL);
    if ( v4 < 0 )
    {
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x54u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v7);
    }
    v5 = HUBFDO_CleanupDeviceInterfaceForBillboard(
           *(_QWORD *)a1,
           *(_WORD *)(*(_QWORD *)(a1 + 16) + 48LL),
           *(_QWORD *)(a1 + 2648),
           *(_BYTE *)(a1 + 2656));
    if ( v5 < 0 )
    {
      LODWORD(v7) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x55u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v7);
    }
    updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 )
    {
      LODWORD(v8) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x56u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v8);
    }
    ExFreePoolWithTag(**(PVOID **)(a1 + 2640), 0x68334855u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2640), 0x68334855u);
    *(_QWORD *)(a1 + 2640) = 0LL;
  }
}
