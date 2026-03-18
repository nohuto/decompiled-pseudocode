/*
 * XREFs of EtwTraceJobAssignProcess @ 0x14070AAFC
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14054B1F4 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x1406E231C (PspAssignProcessToJobList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x14070B4FC (EtwpCopyJobGuidSafe.c)
 */

void *__fastcall EtwTraceJobAssignProcess(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // r9d
  _BYTE v5[16]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+44h] [rbp-34h]
  int v8; // [rsp+48h] [rbp-30h]
  _BYTE *v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v5, a1);
  if ( v1 )
    v6 = *(_DWORD *)(v1 + 1220);
  else
    v6 = 0;
  v11 = 0;
  v7 = v3;
  v8 = v2;
  v9 = v5;
  v10 = 28;
  return EtwTraceKernelEvent((int)&v9, 1, 0x80000u, 1827, 5249284);
}
