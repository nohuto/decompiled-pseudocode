/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C000342C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000314C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     Template_qcccjjzssxcqqqqqqqccccccqqxqbqb @ 0x1C0001D98 (Template_qcccjjzssxcqqqqqqqccccccqqxqbqb.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0002124 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C000B090 (StorpAreTelemetryErrorsEqual.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0043E64 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorData(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r15
  unsigned __int16 v4; // di
  unsigned __int8 i; // bl
  __int64 v6; // rcx
  int SecurityDescriptor; // ecx
  __int64 v8; // rsi
  int v9; // [rsp+68h] [rbp-130h]
  int v10; // [rsp+70h] [rbp-128h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp-80h] BYREF
  _BYTE v12[40]; // [rsp+130h] [rbp-68h] BYREF
  _BYTE v13[28]; // [rsp+158h] [rbp-40h] BYREF
  unsigned __int16 v14; // [rsp+174h] [rbp-24h]

  result = 0LL;
  v2 = (_WORD *)(a1 + 1904);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  if ( *(_DWORD *)(a1 + 1904) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1896), &LockHandle);
    *(_WORD *)&v13[26] = *v2 - 1;
    if ( *(_WORD *)&v13[26] >= 0xAu )
      strcpy(&v13[26], "\n");
    v4 = v14;
    for ( i = 0; i < 5u; ++i )
    {
      memset(v12, 0, sizeof(v12));
      if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 40 * (i + 59LL), v12) == 1 )
        break;
      ++v4;
    }
    v6 = *(_QWORD *)(a1 + 96);
    v14 = v4;
    if ( v6 )
    {
      *(_QWORD *)v13 = *(_QWORD *)(v6 + 8);
      *(_OWORD *)&v13[9] = *(_OWORD *)(v6 + 16);
    }
    SecurityDescriptor = (int)WPP_MAIN_CB.SecurityDescriptor;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !LODWORD(WPP_MAIN_CB.SecurityDescriptor)
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_18;
    }
    if ( *(_BYTE *)(a1 + 1704) )
    {
      SecurityDescriptor = -1;
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
    }
    if ( *(_BYTE *)(a1 + 1705) )
    {
      SecurityDescriptor = -1;
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
    }
    if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
    {
      SecurityDescriptor = -1;
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
    }
    if ( SecurityDescriptor )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, v13);
    else
LABEL_18:
      StorpTelemetryLogUnitErrorDataMeasures((const struct _TlgProvider_t *)a1, (__int64)v13);
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      Template_qcccjjzssxcqqqqqqqccccccqqxqbqb(
        40 * (unsigned int)*(unsigned __int16 *)&v13[26],
        *(_DWORD *)(a1 + 1932) / 0x2710u,
        a1 + 1960,
        *(_DWORD *)(v8 + 56),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1688,
        v8 + 5192,
        *(const wchar_t **)(v8 + 4800),
        v13,
        &v13[9],
        v9,
        v10,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 1908),
        *(_DWORD *)(a1 + 1912),
        *(_DWORD *)(a1 + 1916),
        *(_DWORD *)(a1 + 1824),
        *(_DWORD *)(a1 + 1932) / 0x2710u,
        *(_DWORD *)(a1 + 1936) / 0x2710u,
        *(_BYTE *)(a1 + 1925),
        *(_BYTE *)(a1 + 1920),
        *(_BYTE *)(a1 + 1921),
        *(_BYTE *)(a1 + 1922),
        *(_BYTE *)(a1 + 1923),
        *(_BYTE *)(a1 + 1924),
        *(_DWORD *)(a1 + 1928),
        *(_DWORD *)(a1 + 1940),
        *(_QWORD *)(a1 + 1944),
        40 * *(unsigned __int16 *)&v13[26],
        a1 + 1960,
        40 * v14,
        a1 + 2360);
    }
    memset(v2, 0, 0x1C8uLL);
    memset((void *)(a1 + 2360), 0, 0xC8uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
