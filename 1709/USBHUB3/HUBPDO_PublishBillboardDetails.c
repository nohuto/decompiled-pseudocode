/*
 * XREFs of HUBPDO_PublishBillboardDetails @ 0x1C006AEF8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013710 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000C928 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

void __fastcall HUBPDO_PublishBillboardDetails(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned int v6; // ebp
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rsi
  __int64 i; // r10
  int DeviceInterfaceForBillboard; // eax
  unsigned __int16 v11; // r9
  int updated; // eax
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+28h] [rbp-60h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  v5 = **(_QWORD **)(v3 + 2632);
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
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
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
  v16[2] = 0LL;
  v16[0] = 24LL;
  v16[1] = &DEVPKEY_Device_UsbBillboardInfo;
  DeviceInterfaceForBillboard = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, unsigned int, _BYTE *))(WdfFunctions_01015 + 3480))(
                                  WdfDriverGlobals,
                                  v4,
                                  v16,
                                  4099LL,
                                  v6,
                                  v8);
  if ( DeviceInterfaceForBillboard >= 0 )
  {
    updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 )
    {
      LODWORD(v14) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x59u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        v14);
    }
    DeviceInterfaceForBillboard = HUBFDO_CreateDeviceInterfaceForBillboard(
                                    *(_QWORD *)v3,
                                    *(_WORD *)(a1 + 48),
                                    (_QWORD *)(v3 + 2640),
                                    (_BYTE *)(v3 + 2648),
                                    v6,
                                    (__int64)v8);
    if ( DeviceInterfaceForBillboard >= 0 )
      goto LABEL_12;
    v11 = 90;
  }
  else
  {
    v11 = 88;
  }
  LODWORD(v13) = DeviceInterfaceForBillboard;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    2u,
    v11,
    (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
    v13);
LABEL_12:
  ExFreePoolWithTag(v8, 0x64334855u);
}
