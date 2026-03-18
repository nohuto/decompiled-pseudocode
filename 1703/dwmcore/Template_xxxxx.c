/*
 * XREFs of Template_xxxxx @ 0x18013C060
 * Callers:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800663E0 (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800676A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?AdjustPeriods@CRateInfo@@QEAAXPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180133C2C (-AdjustPeriods@CRateInfo@@QEAAXPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 *     ?TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E5A8 (-TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxxxx(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-31h] BYREF
  va_list v4; // [rsp+30h] [rbp-21h]
  __int64 v5; // [rsp+38h] [rbp-19h]
  va_list v6; // [rsp+40h] [rbp-11h]
  __int64 v7; // [rsp+48h] [rbp-9h]
  va_list v8; // [rsp+50h] [rbp-1h]
  __int64 v9; // [rsp+58h] [rbp+7h]
  va_list v10; // [rsp+60h] [rbp+Fh]
  __int64 v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+B0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B0h] [rbp+5Fh]
  __int64 v14; // [rsp+B8h] [rbp+67h] BYREF
  va_list va1; // [rsp+B8h] [rbp+67h]
  __int64 v16; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C0h] [rbp+6Fh]
  __int64 v18; // [rsp+C8h] [rbp+77h] BYREF
  va_list va3; // [rsp+C8h] [rbp+77h]
  va_list va4; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  va_copy(v8, va3);
  va_copy(v10, va4);
  v7 = 8LL;
  v9 = 8LL;
  v11 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 5u, &UserData);
}
