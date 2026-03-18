/*
 * XREFs of EtwTraceJobRemoveProcess @ 0x1407A79B0
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceJobRemoveProcess(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+44h] [rbp-34h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  char *v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v3 = 0;
  if ( a1 && (v4 = *(_QWORD *)(a1 + 944), v3 = *(_DWORD *)(a1 + 736), v4) )
    v7 = *(_DWORD *)(v4 + 1220);
  else
    v7 = 0;
  v13 = 0;
  v8 = v3;
  v9 = a2;
  v10 = a3;
  v11 = &v6;
  v12 = 32;
  return EtwTraceKernelEvent((int)&v11, 1, 0x80000u, 1828, 5249284);
}
