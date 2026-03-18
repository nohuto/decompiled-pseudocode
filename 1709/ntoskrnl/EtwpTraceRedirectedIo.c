/*
 * XREFs of EtwpTraceRedirectedIo @ 0x14027DA40
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceRedirectedIo(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+38h] [rbp-30h]
  __int64 *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v2 = a1;
  if ( a2 )
    v3 = *(_QWORD *)(a2 + 24);
  else
    v3 = 0LL;
  v6 = 0;
  v4 = &v2;
  v5 = 16;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x300u, 0x110u, 0x11501902u);
}
