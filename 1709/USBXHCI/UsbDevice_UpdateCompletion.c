/*
 * XREFs of UsbDevice_UpdateCompletion @ 0x1C0037250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C00373D4 (UsbDevice_UpdateUsbDevice.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0037A24 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqDL @ 0x1C0037B18 (WPP_RECORDER_SF_dqDL.c)
 */

__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD v14[5]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 424);
  memset(v14, 0, sizeof(v14));
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v5,
    v14);
  v9 = v14[1];
  if ( a2 == 3 )
  {
    v10 = *(unsigned __int8 *)(v2 + 135);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v10,
      12,
      29,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v2 + 135),
      *(_QWORD *)v2);
LABEL_7:
    v11 = 3221225473LL;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    WPP_RECORDER_SF_dqDL(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v7, v8);
    if ( *(_BYTE *)(a1 + 60) == 29 )
      *(_DWORD *)(v9 + 56) |= 1u;
    goto LABEL_7;
  }
  WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), v6, *(unsigned __int8 *)(a1 + 61), 30);
  UsbDevice_UpdateUsbDevice(v2, v9);
  v11 = 0LL;
LABEL_8:
  v12 = WdfFunctions_01015;
  *(_QWORD *)(v2 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v12 + 2104))(WdfDriverGlobals, v5, v11);
}
