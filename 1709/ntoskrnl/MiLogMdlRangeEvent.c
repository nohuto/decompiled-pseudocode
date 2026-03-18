/*
 * XREFs of MiLogMdlRangeEvent @ 0x140217578
 * Callers:
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall MiLogMdlRangeEvent(_QWORD *a1, unsigned __int16 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 LeafPfnBuddy; // rdi
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  _QWORD *v15; // [rsp+48h] [rbp-30h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+54h] [rbp-24h]

  v3 = a1;
  v6 = (_QWORD *)(48LL * *a1 - 0x58000000000LL);
  v7 = (v6[5] >> 54) & 7LL;
  if ( v7 == 1 )
    LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
  else
    LeafPfnBuddy = 0LL;
  if ( a3 )
  {
    v9 = (v7 != 1) + 9LL;
    v10 = 16 * (LeafPfnBuddy & 0xFFFFFFFFFFFFLL);
    do
    {
      v11 = *v3;
      v14 = 0LL;
      v13[1] = v11;
      v13[0] = v10 | v9 & 0xFFF000000000000FuLL;
      v12 = v3;
      do
      {
        ++v3;
        --a3;
      }
      while ( a3 && *v3 == *(v3 - 1) + 1LL );
      v17 = 0;
      v16 = 24;
      v14 = v3 - v12;
      v15 = v13;
      EtwTraceKernelEvent((__int64)&v15, 1u, 0x20000001u, a2, 0x11401B02u);
    }
    while ( a3 );
  }
}
