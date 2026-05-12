/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C0046C64
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000565C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     McTemplateK0qcccjxxcxxqqq @ 0x1C00424C4 (McTemplateK0qcccjxxcxxqqq.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004502C (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+80h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    HIDWORD(v9[3]) = *(_DWORD *)(v2 + 5440);
  v3 = *(_QWORD *)(a1 + 2664);
  v4 = v3 / 0x989680;
  if ( v3 >= 0x98968000 )
    v4 = 255LL;
  v5 = *(_QWORD *)(a1 + 1840) == 0LL;
  v9[4] = v4;
  if ( !v5 || *(_QWORD *)(a1 + 1848) || *(_DWORD *)(a1 + 1856) || (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    if ( v6 )
    {
      v9[0] = *(_QWORD *)(v6 + 8);
      *(_OWORD *)((char *)&v9[1] + 1) = *(_OWORD *)(v6 + 16);
    }
    if ( (LOBYTE(WPP_MAIN_CB.Reserved) != 1 || HIDWORD(WPP_MAIN_CB.Reserved))
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
        HIDWORD(WPP_MAIN_CB.Reserved) = -1;
      if ( *(_BYTE *)(a1 + 1740) )
        HIDWORD(WPP_MAIN_CB.Reserved) = -1;
      if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
        HIDWORD(WPP_MAIN_CB.Reserved) = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures((const struct _TlgProvider_t *)a1);
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
      McTemplateK0qcccjxxcxxqqq(
        a1 + 1720,
        *(_QWORD *)(a1 + 24),
        v7,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1720,
        *(_QWORD *)(a1 + 1824),
        *(_QWORD *)(a1 + 1832),
        v9[4],
        *(_QWORD *)(a1 + 1848),
        *(_QWORD *)(a1 + 1840),
        *(_DWORD *)(a1 + 1856),
        *(_DWORD *)(a1 + 1860),
        SBYTE4(v9[3]));
  }
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1832) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1848) = 0LL;
  *(_DWORD *)(a1 + 1860) = 0;
  return 0LL;
}
