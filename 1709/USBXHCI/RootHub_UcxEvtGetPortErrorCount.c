/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C0021100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0021A70 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // edi
  unsigned __int16 Ulong; // ax
  unsigned int v10; // r15d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v15; // [rsp+28h] [rbp-A0h]
  __int64 v16; // [rsp+28h] [rbp-A0h]
  int v17; // [rsp+30h] [rbp-98h]
  __int64 v18; // [rsp+30h] [rbp-98h]
  _QWORD v19[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E278);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( *(_BYTE *)(v5 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3042);
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v19);
  v7 = v19[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0xB2u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    *(_DWORD *)(v7 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  if ( *(_BYTE *)(v7 + 128) != 0xA3
    || *(_BYTE *)(v7 + 129) != 13
    || *(_WORD *)(v7 + 130)
    || (v8 = *(unsigned __int16 *)(v7 + 132), !*(_WORD *)(v7 + 132))
    || v8 > *(_DWORD *)(v4 + 16)
    || *(_WORD *)(v7 + 134) != 2 )
  {
    v11 = 179;
    v12 = *(unsigned __int8 *)(v7 + 134);
    v13 = *(unsigned __int8 *)(v7 + 133);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v8 - 1) << 6) + *(_QWORD *)(v4 + 48) + 1) != 3 )
  {
    v11 = 182;
    v12 = *(unsigned __int8 *)(v7 + 134);
    v13 = *(unsigned __int8 *)(v7 + 133);
LABEL_18:
    WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v12, v13, v11);
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(16LL * (v8 - 1) + 8 + *(_QWORD *)(v4 + 40)));
  **(_WORD **)(v7 + 40) = Ulong;
  v10 = Ulong;
  v17 = Ulong;
  v15 = v8;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
    4u,
    0xBu,
    0xB4u,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v15,
    v17);
  if ( v10 > 0xA )
  {
    LODWORD(v18) = v10;
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0xB5u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v16,
      v18);
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
