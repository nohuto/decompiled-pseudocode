/*
 * XREFs of RootHub_UcxEvtClearHubFeature @ 0x1C001B000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C001F320 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearHubFeature(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rbp
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // edx
  unsigned __int16 v10; // r9
  _QWORD v12[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      882);
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v5 = v12[1];
  if ( *(_BYTE *)(v12[1] + 128LL) != 32
    || *(_BYTE *)(v12[1] + 129LL) != 1
    || *(_WORD *)(v12[1] + 132LL)
    || *(_WORD *)(v12[1] + 134LL) )
  {
    v8 = 34;
    v9 = *(unsigned __int8 *)(v12[1] + 134LL);
    v6 = *(unsigned __int8 *)(v12[1] + 133LL);
    v7 = *(_QWORD *)(v4 + 8);
    goto LABEL_15;
  }
  v6 = *(unsigned __int16 *)(v12[1] + 130LL);
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_WORD *)(v12[1] + 130LL) )
  {
    if ( v6 != 1 )
    {
      v8 = 37;
      v9 = BYTE1(v6);
LABEL_15:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(v7 + 72), v9, v6, v8);
      v3 = -1073741823;
      *(_DWORD *)(v5 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v3);
    }
    v10 = 36;
  }
  else
  {
    v10 = 35;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(v7 + 72), 4u, 0xBu, v10, (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
