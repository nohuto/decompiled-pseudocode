/*
 * XREFs of EtwTraceDebuggerEvent @ 0x14025342C
 * Callers:
 *     NtDebugContinue @ 0x14068029C (NtDebugContinue.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceDebuggerEvent(__int64 a1, __int64 a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = *(_DWORD *)(a1 + 736);
  v4[1] = *(_DWORD *)(a2 + 1600);
  v5 = v4;
  v7 = 0;
  v4[2] = a3;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x400000u, 880, 4200962);
}
