/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x14027DC20
 * Callers:
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v3 = a1;
  v4 = &v3;
  v6 = 0;
  v5 = 8;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x40000040u, 0xF33u, 0x501802u);
  return a1;
}
