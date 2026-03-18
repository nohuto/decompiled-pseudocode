/*
 * XREFs of EtwpLogProcessPerfCtrs @ 0x140746A5C
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall EtwpLogProcessPerfCtrs(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+38h] [rbp-31h]
  int v5; // [rsp+3Ch] [rbp-2Dh]
  _QWORD v6[14]; // [rsp+40h] [rbp-29h] BYREF

  memset(v6, 0, 0x68uLL);
  LODWORD(v6[0]) = *(_DWORD *)(a1 + 736);
  v6[2] = *(_QWORD *)(a1 + 816);
  v6[3] = *(_QWORD *)(a1 + 1440) << 12;
  v6[4] = *(_QWORD *)(a1 + 1272) << 12;
  v6[5] = *(_QWORD *)(a1 + 808);
  v2 = *(_QWORD *)(a1 + 800);
  v5 = 0;
  v6[6] = v2;
  v3 = v6;
  v4 = 104;
  EtwTraceKernelEvent((__int64)&v3, 1u, 1u, 0x320u, 0x501802u);
}
