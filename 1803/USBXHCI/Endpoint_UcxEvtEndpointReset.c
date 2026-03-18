/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1C00150D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C0016548 (WPP_RECORDER_SF_ddqL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  int v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004B1D8);
  if ( *(_BYTE *)(v4 + 1352) == 1 )
    Debug_FreAssertMsg(
      (__int64)"Unexpected Reset Received on a Offloaded Endpoint",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c",
      2476);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WdfDriverGlobals,
                    a3,
                    off_1C004B098);
  memset(v5, 0, 0x70uLL);
  _m_prefetchw((const void *)(v4 + 32));
  v7 = *(_DWORD *)(v4 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v7 ^ 0x100, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x100) != 0 )
  {
    WPP_RECORDER_SF_ddqL(*(_QWORD *)(v4 + 80), 256, v6, 56);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a3,
             0LL);
  }
  else
  {
    *v5 = v4;
    *(_QWORD *)(v4 + 272) = a3;
    *(_DWORD *)(v4 + 280) = 259;
    return ESM_AddEvent((PVOID)(v4 + 288));
  }
}
