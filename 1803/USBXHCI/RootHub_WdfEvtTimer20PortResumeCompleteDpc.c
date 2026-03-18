/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C001F1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 */

__int64 __fastcall RootHub_WdfEvtTimer20PortResumeCompleteDpc(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  int v4; // edx
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  PWDF_DRIVER_GLOBALS v7; // rcx

  v2 = *(_QWORD **)a2;
  v4 = *(_DWORD *)(a2 + 8);
  if ( !*(_BYTE *)(v2[1] + 441LL) )
    return RootHub_WdfEvtTimer20PortResumeComplete(v2, v4);
  v5 = (unsigned __int64)(unsigned int)(v4 - 1) << 6;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v2[6] + v5 + 40),
         off_1C004B0C0);
  Debug_FreAssertMsg(
    (__int64)"RootHubData in TimerData is NOT null",
    *(_QWORD *)v6 == 0LL,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
    4227);
  Debug_FreAssertMsg(
    (__int64)"PortNumber in TimerData is NOT zero",
    *(_DWORD *)(v6 + 8) == 0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
    4228);
  v7 = WdfDriverGlobals;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
           v7,
           *(_QWORD *)(v2[6] + v5 + 40));
}
