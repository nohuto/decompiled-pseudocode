/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C00458C4
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000314C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0044584 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     Template_qcccjxxcxxqqq @ 0x1C0046110 (Template_qcccjxxcxxqqq.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  int v6; // r8d
  _QWORD v8[5]; // [rsp+80h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    HIDWORD(v8[3]) = *(_DWORD *)(v2 + 5440);
  v3 = *(_QWORD *)(a1 + 2616) / 0x989680uLL;
  if ( v3 > 0xFF )
    v3 = 255LL;
  v4 = *(_QWORD *)(a1 + 1808) == 0LL;
  v8[4] = v3;
  if ( !v4 || *(_QWORD *)(a1 + 1816) || *(_DWORD *)(a1 + 1824) || (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
    {
      v8[0] = *(_QWORD *)(v5 + 8);
      *(_OWORD *)((char *)&v8[1] + 1) = *(_OWORD *)(v5 + 16);
    }
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || LODWORD(WPP_MAIN_CB.SecurityDescriptor))
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( *(_BYTE *)(a1 + 1704) )
        LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
      if ( *(_BYTE *)(a1 + 1705) )
        LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
      if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
        LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures((const struct _TlgProvider_t *)a1);
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
      Template_qcccjxxcxxqqq(
        a1 + 1688,
        *(_QWORD *)(a1 + 24),
        v6,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1688,
        *(_QWORD *)(a1 + 1792),
        *(_QWORD *)(a1 + 1800),
        v8[4],
        *(_QWORD *)(a1 + 1816),
        *(_QWORD *)(a1 + 1808),
        *(_DWORD *)(a1 + 1824),
        *(_DWORD *)(a1 + 1828),
        SBYTE4(v8[3]));
  }
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_DWORD *)(a1 + 1828) = 0;
  return 0LL;
}
