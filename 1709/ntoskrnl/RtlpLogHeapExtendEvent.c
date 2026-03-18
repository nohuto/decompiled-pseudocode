/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x14025BE58
 * Callers:
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     GetUCBytes @ 0x14025B22C (GetUCBytes.c)
 */

void __fastcall RtlpLogHeapExtendEvent(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 UCBytes; // rax
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+50h] [rbp-1h]
  __int64 v10; // [rsp+58h] [rbp+7h] BYREF
  int v11; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+64h] [rbp+13h]
  _QWORD *v13; // [rsp+70h] [rbp+1Fh] BYREF
  int v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+7Ch] [rbp+2Bh]

  v10 = 0LL;
  v9 = 0LL;
  v11 = 0;
  v8[0] = a1;
  v5 = a1[68] - 16LL * a1[24];
  v8[1] = a3;
  v8[2] = a2;
  v12 = v5;
  v8[3] = a4;
  UCBytes = GetUCBytes((__int64)a1, &v10, &v11);
  v7 = v10 - a1[79];
  v15 = 0;
  v9 = v7 - UCBytes;
  v13 = v8;
  v14 = 60;
  EtwTraceKernelEvent((__int64)&v13, 1u, 0x40000020u, 0x1025u, 0x10401903u);
}
