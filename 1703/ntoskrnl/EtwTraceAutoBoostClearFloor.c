/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x140253214
 * Callers:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1600);
  v5 = a2;
  v6 = v3;
  v7 = a3;
  v8 = &v5;
  v10 = 0;
  v9 = 16;
  return EtwTraceKernelEvent((int)&v8, 1, 0x20000200u, 1347, 5249538);
}
