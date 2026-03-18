/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C0006330
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0020124 (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C002071C (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C0021DFC (WPP_RECORDER_SF_dDd.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned __int8 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  int *v9; // rsi
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rbx
  char v14; // al
  int v15; // r8d
  int v16; // r9d
  unsigned __int16 v17; // si
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+88h] [rbp+10h] BYREF
  char v23; // [rsp+90h] [rbp+18h]

  v23 = a3;
  if ( *(_BYTE *)(a1[1] + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3968LL);
  v5 = 0;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = (unsigned __int64)(a2 - 1) << 6;
  v8 = v7 + a1[6];
  v9 = (int *)(a1[5] + 16LL * (a2 - 1));
  v10 = *(_QWORD *)(v8 + 16);
  if ( *(_DWORD *)v10 == 1 )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
        88LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v10 + 8),
      0LL);
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      *(_QWORD *)(v10 + 8));
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v6, (int)v9, 2, 1, &v22);
    v11 = v22;
  }
  else
  {
    v11 = *v9;
  }
  if ( *(_BYTE *)(v8 + 1) == 3
    && (v11 & 0x400000) != 0
    && (v11 & 0x1E0) == 0
    && (*(_QWORD *)(a1[1] + 272LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (v11 & 0x1E0) == 0x1E0 && (v23 || (v11 & 0x400000) != 0) )
  {
    v5 = 1;
    if ( *(_BYTE *)(v8 + 6) != 1 )
    {
      v14 = *(_BYTE *)(v8 + 1);
      *(_BYTE *)(v8 + 6) = 1;
      if ( v14 == 2 )
      {
        DynamicLock_Release(*(_QWORD *)(v7 + a1[6] + 16));
        if ( *(int *)(v8 + 48) <= 0 )
          v17 = 50;
        else
          v17 = *(_WORD *)(v8 + 52);
        WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v17, v15, v16, v19, a2, v11, v17);
        ExSetTimer(*(_QWORD *)(v8 + 32), -10000LL * v17, 0LL, 0LL);
        return v5;
      }
      if ( v14 == 3 )
      {
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1[1] + 72LL),
          3u,
          0xBu,
          0xCAu,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          a2,
          v11);
        v18 = v11 & 0xE40C200 | 0x10000;
        LODWORD(v20) = v18;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          4u,
          0xBu,
          0xCBu,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v20);
        XilRegister_WriteUlong(v6, v9, v18);
        LODWORD(v21) = XilRegister_ReadUlong(v6, v9);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          4u,
          0xBu,
          0xCCu,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v21);
      }
    }
  }
  v12 = *(_QWORD *)(v7 + a1[6] + 16);
  if ( *(_DWORD *)v12 == 1 )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
        107LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v12 + 8));
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      *(_QWORD *)(v12 + 8));
  }
  return v5;
}
