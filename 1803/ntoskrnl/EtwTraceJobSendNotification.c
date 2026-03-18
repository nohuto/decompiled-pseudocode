/*
 * XREFs of EtwTraceJobSendNotification @ 0x1407A7A50
 * Callers:
 *     PspSendReliableJobNotification @ 0x14052DF4C (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1407A8228 (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobSendNotification(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _BYTE v4[16]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+44h] [rbp-24h]
  _BYTE *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

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
