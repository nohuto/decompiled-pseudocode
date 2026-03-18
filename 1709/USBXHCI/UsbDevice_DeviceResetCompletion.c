/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x1C0033860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     UsbDevice_GetEndpointState @ 0x1C0034B64 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dLL @ 0x1C0037488 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqLL @ 0x1C0037D2C (WPP_RECORDER_SF_dqLL.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, __int64 *a3, int a4)
{
  __int64 v4; // rbx
  char v6; // si
  int v8; // edx
  int v9; // r8d
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbp
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  PWDF_DRIVER_GLOBALS v21; // rcx
  int v22; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 48);
  v6 = a2;
  if ( a2 == 3 )
  {
    v8 = *(unsigned __int8 *)(v4 + 135);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v8,
      12,
      60,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v4 + 135),
      *(_QWORD *)v4);
    v10 = (__int64 *)(v4 + 184);
    v11 = 30LL;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        Endpoint_Disable_Internal(*v10, 0, v9);
        ESM_AddEvent((PVOID)(v12 + 288));
      }
      ++v10;
      --v11;
    }
    while ( v11 );
LABEL_14:
    v19 = WdfFunctions_01015;
    v20 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    v21 = WdfDriverGlobals;
    *(_DWORD *)(v4 + 152) = 3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v19 + 2104))(v21, v20, 0LL);
    return;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    v13 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v13,
      12,
      61,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v4);
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1LL) )
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 61),
        v14,
        v15,
        v22,
        *(_BYTE *)(a1 + 61),
        *(_BYTE *)(a1 + 60),
        v6);
    v16 = (__int64 *)(v4 + 184);
    v17 = 30LL;
    do
    {
      v18 = *v16;
      if ( *v16 )
      {
        Endpoint_Disable_Internal(*v16, 0, v14);
        ESM_AddEvent((PVOID)(v18 + 288));
      }
      ++v16;
      --v17;
    }
    while ( v17 );
    goto LABEL_14;
  }
  WPP_RECORDER_SF_dqLL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), (_DWORD)a3, a4);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)(v4 + 8),
    *(_QWORD *)v4,
    0LL,
    0x200000LL,
    "Reset Device Command failed",
    (__int64 *)(a1 + 24),
    a3);
  Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4121, 0LL, 0LL, 0LL);
}
