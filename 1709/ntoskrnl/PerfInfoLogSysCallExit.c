/*
 * XREFs of PerfInfoLogSysCallExit @ 0x14027DCA0
 * Callers:
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-28h] BYREF
  int *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v6 = 0;
  v4 = &v3;
  v3 = a1;
  v5 = 4;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x40000040u, 0xF34u, 0x501802u);
  return a1;
}
