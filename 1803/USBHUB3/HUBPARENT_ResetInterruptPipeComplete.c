/*
 * XREFs of HUBPARENT_ResetInterruptPipeComplete @ 0x1C00069C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq @ 0x1C0001D38 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_ResetInterruptPipeComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v4; // ebx
  unsigned int v5; // esi
  int v7; // ebp
  __int64 v8; // rax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 Arg2; // [rsp+28h] [rbp-40h]
  unsigned int Arg2a; // [rsp+28h] [rbp-40h]
  unsigned int Arg3; // [rsp+30h] [rbp-38h]
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 820);
  v14[3] = 0;
  v15 = 0LL;
  v14[1] = 0;
  v14[2] = 0;
  v14[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v14);
  if ( v7 < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    Arg2a = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      Arg2a);
  }
  if ( v4 < 0 )
  {
    Arg3 = v5;
    LODWORD(Arg2) = v4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2512),
      2u,
      3u,
      0x10u,
      (__int64)&WPP_4cae305640853f651ce0b6e29815a2c3_Traceguids,
      Arg2,
      Arg3);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20000) != 0 )
      McTemplateK0pqqq(v9, &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR, 0LL, *(const void **)(a4 + 240), 0, v5, v4);
    if ( (*(_DWORD *)(a4 + 2584) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1256);
  }
  return HUBSM_AddEvent(a4 + 1256, ((v4 >> 31) & 0xFFFFFFFC) + 2016);
}
