/*
 * XREFs of Control_WdfEvtIoCanceledOnQueue @ 0x1C0026610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Control_TransferData_Initialize @ 0x1C002518C (Control_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026EBC (WPP_RECORDER_SF_DDq.c)
 */

__int64 __fastcall Control_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // edx
  int v9; // r8d
  __int64 *v10; // rdx
  _QWORD v12[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E3B8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004E098);
  v6 = v12[1];
  v7 = v5;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
    v8,
    v9,
    39,
    (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
    a2);
  Control_TransferData_Initialize(v4, a2, v6, (_QWORD *)v7);
  *(_DWORD *)(v7 + 112) = 3;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v10 = *(__int64 **)(v4 + 368);
  if ( *v10 != v4 + 360 )
    __fastfail(3u);
  *(_QWORD *)v7 = v4 + 360;
  *(_QWORD *)(v7 + 8) = v10;
  *v10 = v7;
  *(_QWORD *)(v4 + 368) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(v4 + 328));
}
