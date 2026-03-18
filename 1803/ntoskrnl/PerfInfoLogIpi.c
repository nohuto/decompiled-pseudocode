/*
 * XREFs of PerfInfoLogIpi @ 0x1402B0DEC
 * Callers:
 *     KiIpiProcessRequests @ 0x1400A3A30 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 */

__int64 __fastcall PerfInfoLogIpi(__int64 a1)
{
  _DWORD v2[6]; // [rsp+30h] [rbp-18h] BYREF

  v2[0] = 0;
  return EtwTraceTimedEvent(3931, 0x40400000u, (__int64)v2, 4, 4196866, a1);
}
