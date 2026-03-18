/*
 * XREFs of Template_qNR0 @ 0x18013BC14
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800676A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013CDA8 (-GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?TraceFrameVsyncDeadlines@CScheduleStatistics@@SAXIPEBVCFrameInfo@@@Z @ 0x180144058 (-TraceFrameVsyncDeadlines@CScheduleStatistics@@SAXIPEBVCFrameInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qNR0(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a5;
  v8 = a4 * a3;
  v9 = 0;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 2u, &v6);
}
