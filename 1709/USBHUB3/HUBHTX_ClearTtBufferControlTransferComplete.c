/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0005D30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqq @ 0x1C0001D48 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int Arg3; // edi
  unsigned int Arg2; // esi
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx

  Arg3 = *(_DWORD *)(a3 + 8);
  if ( Arg3 < 0 )
  {
    Arg2 = *(_DWORD *)(a4 + 28);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 168) + 2512LL),
      2u,
      3u,
      0x74u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      *(_DWORD *)(a3 + 8),
      Arg2);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20000) != 0 )
      McTemplateK0pqqq(
        v8,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(const void **)(*(_QWORD *)(a4 + 168) + 240LL),
        0,
        Arg2,
        Arg3);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 520LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 368LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
