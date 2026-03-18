/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C000C800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 result; // rax
  bool v6; // zf
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int16 Ulong; // ax

  v2 = 0;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  if ( *(_BYTE *)(v3 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      2600LL);
  v4 = *(_QWORD *)(v3 + 152);
  result = WPP_RECORDER_SF_q(
             *(_QWORD *)(v3 + 72),
             4u,
             4u,
             0x56u,
             (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
             a1);
  v6 = (*(_QWORD *)(v3 + 272) & 0x20000000LL) == 0;
  *(_BYTE *)(v3 + 396) = 0;
  if ( v6 && *(_DWORD *)(v4 + 16) )
  {
    do
    {
      v7 = (unsigned __int64)v2 << 6;
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v4 + 48) + v7 + 16));
      v8 = *(_QWORD *)(v4 + 40) + 16LL * v2;
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v8);
      XilRegister_WriteUlong(*(_QWORD *)(v3 + 88), v8, Ulong & 0xC200);
      result = DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v4 + 48) + v7 + 16));
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v4 + 16) );
  }
  return result;
}
