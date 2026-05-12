/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C0046890
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00043A8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     McTemplateK0qcccjxxcxxqqq @ 0x1C0043170 (McTemplateK0qcccjxxcxxqqq.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0045190 (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+80h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    HIDWORD(v8[3]) = *(_DWORD *)(v2 + 5440);
  v3 = *(_QWORD *)(a1 + 2664) / 0x989680uLL;
  if ( v3 > 0xFF )
    v3 = 255LL;
  v4 = *(_QWORD *)(a1 + 1840) == 0LL;
  v8[4] = v3;
  if ( !v4 || *(_QWORD *)(a1 + 1848) || *(_DWORD *)(a1 + 1856) || (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
    {
      v8[0] = *(_QWORD *)(v5 + 8);
      *(_OWORD *)((char *)&v8[1] + 1) = *(_OWORD *)(v5 + 16);
    }
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || WPP_MAIN_CB.DeviceLock.Header.LockNV)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
        WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
      if ( *(_BYTE *)(a1 + 1740) )
        WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
      if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
        WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures((const struct _TlgProvider_t *)a1);
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
      McTemplateK0qcccjxxcxxqqq(
        a1 + 1720,
        *(_QWORD *)(a1 + 24),
        v6,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1720,
        *(_QWORD *)(a1 + 1824),
        *(_QWORD *)(a1 + 1832),
        v8[4],
        *(_QWORD *)(a1 + 1848),
        *(_QWORD *)(a1 + 1840),
        *(_DWORD *)(a1 + 1856),
        *(_DWORD *)(a1 + 1860),
        SBYTE4(v8[3]));
  }
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1832) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1848) = 0LL;
  *(_DWORD *)(a1 + 1860) = 0;
  return 0LL;
}
