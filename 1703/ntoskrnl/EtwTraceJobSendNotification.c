/*
 * XREFs of EtwTraceJobSendNotification @ 0x14070AC40
 * Callers:
 *     PspSendReliableJobNotification @ 0x14044A380 (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x14070B4FC (EtwpCopyJobGuidSafe.c)
 */

void *__fastcall EtwTraceJobSendNotification(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _BYTE v4[16]; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+44h] [rbp-34h]
  _BYTE *v7; // [rsp+48h] [rbp-30h] BYREF
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  EtwpCopyJobGuidSafe(v4, a1);
  if ( v1 )
    v5 = *(_DWORD *)(v1 + 1220);
  else
    v5 = 0;
  v9 = 0;
  v6 = v2;
  v7 = v4;
  v8 = 24;
  return EtwTraceKernelEvent((int)&v7, 1, 0x80000u, 1834, 5249284);
}
