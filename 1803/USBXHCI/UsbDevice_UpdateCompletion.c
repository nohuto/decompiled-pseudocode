/*
 * XREFs of UsbDevice_UpdateCompletion @ 0x1C0034E40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0034FB4 (UsbDevice_UpdateUsbDevice.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0035604 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqDL @ 0x1C00356F8 (WPP_RECORDER_SF_dqDL.c)
 */

__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  __int64 v5; // r14
  int v6; // r9d
  __int64 v7; // rsi
  int v8; // edx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD v15[5]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  v5 = v2[53];
  memset(v15, 0, sizeof(v15));
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v5,
    v15);
  v7 = v15[1];
  if ( a2 == 3 )
  {
    v8 = *((unsigned __int8 *)v2 + 135);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v2[1] + 72),
      v8,
      12,
      29,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      *((_BYTE *)v2 + 135),
      *v2);
LABEL_7:
    v12 = 3221225473LL;
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(v15[1] + 48LL);
  v10 = *v2;
  v11 = v2[1];
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    WPP_RECORDER_SF_dqDL(*(_QWORD *)(v11 + 72), v9, v10, v6);
    if ( *(_BYTE *)(a1 + 60) == 29 )
      *(_DWORD *)(v7 + 56) |= 1u;
    goto LABEL_7;
  }
  WPP_RECORDER_SF_dqD(*(_QWORD *)(v11 + 72), v9, v10, 30);
  UsbDevice_UpdateUsbDevice(v2, v7);
  v12 = 0LL;
LABEL_8:
  v13 = WdfFunctions_01023;
  v2[53] = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v13 + 2104))(WdfDriverGlobals, v5, v12);
}
