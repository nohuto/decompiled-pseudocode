/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C001C9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C001F320 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // edi
  unsigned __int16 Ulong; // ax
  unsigned int v10; // r15d
  int v11; // edx
  int v12; // r9d
  int v13; // r8d
  __int64 v15; // [rsp+28h] [rbp-B0h]
  __int64 v16; // [rsp+30h] [rbp-A8h]
  _QWORD v17[5]; // [rsp+70h] [rbp-68h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( *(_BYTE *)(v5 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3044);
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v17);
  v7 = v17[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0xB2u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
    *(_DWORD *)(v7 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v8 = *(unsigned __int16 *)(v7 + 132);
  if ( *(_BYTE *)(v7 + 128) != 0xA3
    || *(_BYTE *)(v7 + 129) != 13
    || *(_WORD *)(v7 + 130)
    || !*(_WORD *)(v7 + 132)
    || v8 > *(_DWORD *)(v4 + 16)
    || *(_WORD *)(v7 + 134) != 2 )
  {
    v12 = 179;
    v11 = *(unsigned __int8 *)(v7 + 134);
    v13 = BYTE1(v8);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v8 - 1) << 6) + *(_QWORD *)(v4 + 48) + 1) != 3 )
  {
    v11 = 2;
    v12 = 182;
    v13 = BYTE1(v8);
LABEL_18:
    WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v11, v13, v12);
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(16LL * (v8 - 1) + 8 + *(_QWORD *)(v4 + 40)));
  **(_WORD **)(v7 + 40) = Ulong;
  v10 = Ulong;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
    4u,
    0xBu,
    0xB4u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v8,
    Ulong);
  if ( v10 > 0xA )
  {
    LODWORD(v16) = v10;
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0xB5u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v15,
      v16);
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
