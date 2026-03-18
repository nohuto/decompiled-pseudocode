/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00BD830
 * Callers:
 *     WinSqmStartSession @ 0x1C00BE3DC (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00BD638 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RegisterWinSqmProvider(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  unsigned int v3; // edi
  int i; // ebx
  __int64 v5; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v2 = _InterlockedCompareExchange64(&qword_1C01A62B8, 255LL, 0LL);
  if ( v2 )
  {
    switch ( v2 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        for ( i = 0; i < 10; ++i )
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v5 = _InterlockedExchange64(&qword_1C01A62B8, qword_1C01A62B8);
          if ( v5 != 255 )
            break;
        }
        if ( i == 10 )
          v5 = _InterlockedCompareExchange64(&qword_1C01A62B8, 204LL, 255LL);
        return v5 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( RegHandle )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v3 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &RegHandle);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C01A28B8 |= 1u;
    _InterlockedExchange64(&qword_1C01A62B8, v3 != 0 ? 238LL : 221LL);
  }
  return v3;
}
