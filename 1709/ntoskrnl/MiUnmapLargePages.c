/*
 * XREFs of MiUnmapLargePages @ 0x14022E928
 * Callers:
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MiReleaseLargePteMappings @ 0x14022BEB8 (MiReleaseLargePteMappings.c)
 *     MiUnmapLargeDriver @ 0x1406EC428 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r15d
  unsigned __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r12
  unsigned __int64 v11; // r13
  __int64 *v12; // r11
  __int64 PteShadow; // rax
  int v14; // [rsp+30h] [rbp-108h] BYREF
  __int16 v15; // [rsp+34h] [rbp-104h]
  __int64 v16; // [rsp+38h] [rbp-100h]
  __int64 v17; // [rsp+40h] [rbp-F8h]
  __int64 v18; // [rsp+48h] [rbp-F0h]

  v16 = 20LL;
  v3 = 14;
  if ( a3 != 9 )
    v3 = a3;
  v4 = a2;
  v5 = 0LL;
  v6 = a2 >> 21;
  v14 = 0;
  v15 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = v6 << 12;
    v10 = (__int64 *)((v6 << 12) + v8);
    v11 = v8 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    v12 = v10;
    if ( (unsigned __int64)v10 < v11 )
    {
      do
      {
        PteShadow = *v12;
        if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        if ( !PteShadow )
          break;
        *v12 = v5;
        if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        ++v12;
      }
      while ( (unsigned __int64)v12 < v11 );
      v9 = v6 << 12;
    }
    if ( v12 != v10 )
      MiInsertTbFlushEntry(&v14, ((v6 << 37) + (v8 << 25)) >> 16, ((__int64)v12 - v9 - v8) >> 3, 0);
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  MiInsertTbFlushEntry(&v14, a1, v6, 1);
  MiReturnSystemVa(a1, a1 + v4, v3, (__int64)&v14);
}
