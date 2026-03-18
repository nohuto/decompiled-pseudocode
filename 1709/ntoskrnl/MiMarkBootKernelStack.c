/*
 * XREFs of MiMarkBootKernelStack @ 0x14082EBE0
 * Callers:
 *     MiInitializeKernelStacks @ 0x14082EA74 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiMarkKernelStack @ 0x140029F00 (MiMarkKernelStack.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

void __fastcall MiMarkBootKernelStack(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  _KPROCESS *v4; // rdx
  char v5; // cl
  unsigned __int64 v6; // rbp
  signed __int64 PteShadow; // rdi
  signed __int64 v8; // rbx
  int v9; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v10; // [rsp+24h] [rbp-E4h]
  __int64 v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]

  v3 = (unsigned __int64)a1;
  MiMarkKernelStack(a1, a2, 0xFFFFFFFFFFFFFFF0uLL);
  v5 = 0;
  v11 = 20LL;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v6 = (__int64)(v3 << 25) >> 16;
  if ( v3 < a2 )
  {
    do
    {
      PteShadow = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( (MiFlags & 0x40000) == 0 )
      {
        do
        {
          v8 = PteShadow;
          PteShadow = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v3,
                        PteShadow | 0x8000000000000062uLL,
                        PteShadow);
          MiInsertTbFlushEntry(&v9, v6, 1LL, 0);
          v6 += 4096LL;
        }
        while ( PteShadow != v8 );
      }
      v3 += 8LL;
    }
    while ( v3 < a2 );
    v5 = v10;
  }
  LOBYTE(v10) = v5 | 1;
  MiFlushTbList((__int64)&v9, v4);
}
