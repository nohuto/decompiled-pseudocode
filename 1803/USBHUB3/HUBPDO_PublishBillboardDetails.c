/*
 * XREFs of HUBPDO_PublishBillboardDetails @ 0x1C006AE28
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013F90 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000C8BC (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

void __fastcall HUBPDO_PublishBillboardDetails(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rdi
  __int64 i; // r10
  int DeviceInterfaceForBillboard; // eax
  unsigned __int16 v11; // r9
  __int64 v12; // [rsp+28h] [rbp-60h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+50h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  v5 = **(_QWORD **)(v3 + 2640);
  v6 = 8 * *(unsigned __int8 *)(v5 + 4) + 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x64334855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      0x57u,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v6);
    return;
  }
  memset(PoolWithTag, 0, v6);
  *v8 = *(_BYTE *)(v5 + 4);
  v8[1] = *(_BYTE *)(v5 + 5);
  RtlInitializeBitMap(&BitMapHeader, (PULONG)(v5 + 8), 0x20u);
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v5 + 4); i = (unsigned int)(i + 1) )
  {
    *(_WORD *)&v8[8 * i + 4] = *(_WORD *)(v5 + 4 * i + 44);
    v8[8 * i + 6] = *(_BYTE *)(v5 + 4 * i + 46);
    *(_DWORD *)&v8[8 * i + 8] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
  }
  v14[2] = 0LL;
  v14[0] = 24LL;
  v14[1] = &DEVPKEY_Device_UsbBillboardInfo;
  DeviceInterfaceForBillboard = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, unsigned int, _BYTE *))(WdfFunctions_01015 + 3480))(
                                  WdfDriverGlobals,
                                  v4,
                                  v14,
                                  4099LL,
                                  v6,
                                  v8);
  if ( DeviceInterfaceForBillboard < 0 )
  {
    v11 = 88;
LABEL_11:
    LODWORD(v12) = DeviceInterfaceForBillboard;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      v11,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v12);
    goto LABEL_12;
  }
  DeviceInterfaceForBillboard = HUBFDO_CreateDeviceInterfaceForBillboard(
                                  *(_QWORD *)v3,
                                  *(_WORD *)(a1 + 48),
                                  (_QWORD *)(v3 + 2648),
                                  (_BYTE *)(v3 + 2656),
                                  v6,
                                  (__int64)v8);
  if ( DeviceInterfaceForBillboard < 0 )
  {
    v11 = 89;
    goto LABEL_11;
  }
  DeviceInterfaceForBillboard = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
  if ( DeviceInterfaceForBillboard < 0 )
  {
    v11 = 90;
    goto LABEL_11;
  }
LABEL_12:
  ExFreePoolWithTag(v8, 0x64334855u);
}
