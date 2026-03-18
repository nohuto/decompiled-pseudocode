/*
 * XREFs of Template_pqqq @ 0x1C00228F8
 * Callers:
 *     ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C0021628 (-CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C0021FF8 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiStartDevice @ 0x1C01149A8 (DpiDxgkDdiStartDevice.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C016EBE8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C01C7454 (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C01C9BA8 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C01C9C28 (DpiCallDrvSetBrightness.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v13; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v15; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v15 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  v8 = 4LL;
  v10 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
