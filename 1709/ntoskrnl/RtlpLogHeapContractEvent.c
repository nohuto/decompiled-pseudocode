/*
 * XREFs of RtlpLogHeapContractEvent @ 0x14025BC0C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     GetUCBytes @ 0x14025B22C (GetUCBytes.c)
 */

void __fastcall RtlpLogHeapContractEvent(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 UCBytes; // rax
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h] BYREF
  int v13; // [rsp+60h] [rbp-1h] BYREF
  __int64 v14; // [rsp+64h] [rbp+3h]
  _QWORD *v15; // [rsp+70h] [rbp+Fh] BYREF
  int v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+7Ch] [rbp+1Bh]

  v12 = 0LL;
  v11 = 0LL;
  v13 = 0;
  v10[0] = a1;
  v7 = a1[68] - 16LL * a1[24];
  v10[2] = a2;
  v10[3] = a4;
  v14 = v7;
  if ( a5 )
    a3 -= a6;
  v10[1] = a3;
  UCBytes = GetUCBytes((__int64)a1, &v12, &v13);
  v9 = v12 - a1[79];
  v17 = 0;
  v11 = v9 - UCBytes;
  v15 = v10;
  v16 = 60;
  EtwTraceKernelEvent((__int64)&v15, 1u, 0x40000020u, 0x102Au, 0x10401903u);
}
