/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0014470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  char v1; // bl
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 result; // rax
  bool v7; // zf
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int16 Ulong; // ax

  v1 = a1;
  v2 = 0;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      2495LL);
  v5 = *(_QWORD *)(v4 + 152);
  LOBYTE(v3) = 4;
  result = WPP_RECORDER_SF_q(
             *(_QWORD *)(v4 + 72),
             v3,
             4,
             86,
             (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
             v1);
  v7 = (*(_QWORD *)(v4 + 272) & 0x20000000LL) == 0;
  *(_BYTE *)(v4 + 396) = 0;
  if ( v7 && *(_DWORD *)(v5 + 16) )
  {
    do
    {
      v8 = (unsigned __int64)v2 << 6;
      DynamicLock_Acquire(*(_QWORD *)(v8 + *(_QWORD *)(v5 + 48) + 16));
      v9 = *(_QWORD *)(v5 + 40) + 16LL * v2;
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v4 + 88), v9);
      XilRegister_WriteUlong(*(_QWORD *)(v4 + 88), v9, Ulong & 0xC200);
      result = DynamicLock_Release(*(_QWORD *)(v8 + *(_QWORD *)(v5 + 48) + 16));
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v5 + 16) );
  }
  return result;
}
