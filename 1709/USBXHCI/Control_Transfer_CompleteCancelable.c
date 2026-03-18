/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x1C002552C
 * Callers:
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 *     Control_ProcessTransferCompletion @ 0x1C0024658 (Control_ProcessTransferCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0024B9C (Control_ProcessTransferEventWithED1.c)
 *     Control_WdfEvtIoDefault @ 0x1C00267A0 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Control_Transfer_Complete @ 0x1C0025324 (Control_Transfer_Complete.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(_QWORD *a1, char a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]

  v2 = a1[43];
  if ( *(_DWORD *)(v2 + 112) != 1 )
  {
LABEL_5:
    if ( *(_DWORD *)(v2 + 116) == 1 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
              WdfDriverGlobals,
              a1[42],
              0LL) )
      {
        v6 = -1073741536;
        *(_DWORD *)(v2 + 116) = 2;
        v8 = a1[7];
        v13 = *(_DWORD *)(v8 + 144);
        v11 = *(unsigned __int8 *)(a1[6] + 135LL);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(v8 + 80),
          4u,
          0xEu,
          0x2Cu,
          (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
          v11,
          v13);
        return v6;
      }
      *(_DWORD *)(v2 + 116) = 0;
    }
    a1[43] = 0LL;
    Control_Transfer_Complete((__int64)a1, v2, a2);
    return 0;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2048))(
         WdfDriverGlobals,
         *(_QWORD *)(v2 + 24));
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v2 + 112) = 0;
    goto LABEL_5;
  }
  *(_DWORD *)(v2 + 112) = 2;
  v7 = a1[7];
  v14 = v5;
  v12 = *(_DWORD *)(v7 + 144);
  v10 = *(unsigned __int8 *)(a1[6] + 135LL);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v7 + 80),
    4u,
    0xEu,
    0x2Bu,
    (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
    v10,
    v12,
    v14);
  return v6;
}
