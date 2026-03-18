/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C00BD944
 * Callers:
 *     WinSqmEndSession @ 0x1C00BDFB8 (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnregisterWinSqmProvider(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  REGHANDLE v3; // rcx
  unsigned int v4; // edx
  int i; // ebx
  __int64 v6; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v2 = _InterlockedCompareExchange64(&qword_1C01A62B8, 170LL, 221LL);
  switch ( v2 )
  {
    case 221LL:
      v3 = RegHandle;
      if ( !RegHandle )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
        v3 = RegHandle;
      }
      v4 = EtwUnregister(v3);
      dword_1C01A28B8 = 0;
      RegHandle = 0LL;
      _InterlockedExchange64(&qword_1C01A62B8, v4 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      for ( i = 0; i < 10; ++i )
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v6 = _InterlockedExchange64(&qword_1C01A62B8, qword_1C01A62B8);
        if ( v6 != 170 )
          break;
      }
      if ( i == 10 )
        v6 = _InterlockedCompareExchange64(&qword_1C01A62B8, 136LL, 170LL);
      return v6 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v4;
}
