/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C0005978
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000565C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0003D9C (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     McTemplateK0qcccjjzssxcqqqqqqqccccccqqxqbqb @ 0x1C00049C0 (McTemplateK0qcccjjzssxcqqqqqqqccccccqqxqbqb.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C000D580 (StorpAreTelemetryErrorsEqual.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0044910 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorData(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r14
  unsigned __int16 v4; // di
  unsigned __int8 i; // bl
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // [rsp+68h] [rbp-130h]
  int v9; // [rsp+70h] [rbp-128h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp-80h] BYREF
  _BYTE v11[40]; // [rsp+130h] [rbp-68h] BYREF
  _BYTE v12[28]; // [rsp+158h] [rbp-40h] BYREF
  unsigned __int16 v13; // [rsp+174h] [rbp-24h]

  result = 0LL;
  v2 = (_WORD *)(a1 + 1936);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  if ( *(_DWORD *)(a1 + 1936) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1928), &LockHandle);
    *(_WORD *)&v12[26] = *v2 - 1;
    if ( *(_WORD *)&v12[26] >= 0xAu )
      strcpy(&v12[26], "\n");
    v4 = v13;
    for ( i = 0; i < 5u; ++i )
    {
      memset(v11, 0, sizeof(v11));
      if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 8 * (i + 4LL * i + 299), v11) == 1 )
        break;
      ++v4;
    }
    v6 = *(_QWORD *)(a1 + 96);
    v13 = v4;
    if ( v6 )
    {
      *(_QWORD *)v12 = *(_QWORD *)(v6 + 8);
      *(_OWORD *)&v12[9] = *(_OWORD *)(v6 + 16);
    }
    if ( LOBYTE(WPP_MAIN_CB.Reserved) == 1 && !HIDWORD(WPP_MAIN_CB.Reserved)
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
      HIDWORD(WPP_MAIN_CB.Reserved) = -1;
    if ( *(_BYTE *)(a1 + 1740) )
      HIDWORD(WPP_MAIN_CB.Reserved) = -1;
    if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
      HIDWORD(WPP_MAIN_CB.Reserved) = -1;
    if ( HIDWORD(WPP_MAIN_CB.Reserved) )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, v12);
    else
LABEL_18:
      StorpTelemetryLogUnitErrorDataMeasures(a1, (__int64)v12);
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 2) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      McTemplateK0qcccjjzssxcqqqqqqqccccccqqxqbqb(
        40 * (unsigned int)*(unsigned __int16 *)&v12[26],
        *(_DWORD *)(a1 + 1964) / 0x2710u,
        a1 + 1992,
        *(_DWORD *)(v7 + 56),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1720,
        v7 + 5192,
        *(const wchar_t **)(v7 + 4800),
        v12,
        &v12[9],
        v8,
        v9,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 1940),
        *(_DWORD *)(a1 + 1944),
        *(_DWORD *)(a1 + 1948),
        *(_DWORD *)(a1 + 1856),
        *(_DWORD *)(a1 + 1964) / 0x2710u,
        *(_DWORD *)(a1 + 1968) / 0x2710u,
        *(_BYTE *)(a1 + 1957),
        *(_BYTE *)(a1 + 1952),
        *(_BYTE *)(a1 + 1953),
        *(_BYTE *)(a1 + 1954),
        *(_BYTE *)(a1 + 1955),
        *(_BYTE *)(a1 + 1956),
        *(_DWORD *)(a1 + 1960),
        *(_DWORD *)(a1 + 1972),
        *(_QWORD *)(a1 + 1976),
        40 * *(unsigned __int16 *)&v12[26],
        a1 + 1992,
        40 * v13,
        a1 + 2392);
    }
    memset(v2, 0, 0x1C8uLL);
    memset((void *)(a1 + 2392), 0, 0xC8uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
