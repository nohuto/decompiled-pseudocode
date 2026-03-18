/*
 * XREFs of MiZeroPageWorkMapping @ 0x14010FE88
 * Callers:
 *     MiPageListCollision @ 0x14010F9B8 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x14022B7D8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiVaIsUltra @ 0x14010A160 (MiVaIsUltra.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, _KPROCESS *a2, char a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // r12d
  unsigned __int64 v10; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r14
  unsigned __int64 v16; // r10
  int v17; // [rsp+20h] [rbp-A9h] BYREF
  __int16 v18; // [rsp+24h] [rbp-A5h]
  __int64 v19; // [rsp+28h] [rbp-A1h]
  __int64 v20; // [rsp+30h] [rbp-99h]
  __int64 v21; // [rsp+38h] [rbp-91h]

  v4 = a1;
  v19 = 20LL;
  v6 = (unsigned __int64)a2;
  v17 = 0;
  v7 = 0LL;
  v18 = 0;
  v8 = 1LL;
  v20 = 0LL;
  v21 = 0LL;
  v9 = 1;
  if ( a1 <= 1 )
  {
    MiInsertLargeTbFlushEntry(&v17, 2 - a1, a2, a4);
    v8 = 1LL;
    v7 = 1LL;
  }
  v10 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = v6; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( MiVaIsUltra(i) )
    {
      v9 = 0;
    }
    else if ( (unsigned int)v4 > (unsigned int)v8 )
    {
      v9 = 0;
    }
  }
  if ( !v7 )
  {
    v12 = v10 << 25;
    v13 = (__int64)((v6 << 25) - (v10 << 25)) >> 16;
    if ( (_DWORD)v4 == 3 )
    {
      v7 = v8;
LABEL_16:
      MiInsertTbFlushEntry(&v17, v13, v8, 0);
      goto LABEL_21;
    }
    if ( (_DWORD)v4 == 2 )
    {
      v7 = 16LL;
      v8 = 16LL;
      goto LABEL_16;
    }
    v14 = MiLargePageSizes[v4];
    if ( (unsigned int)v4 <= (unsigned int)v8 )
    {
      v15 = (unsigned int)(2 - v4);
      do
      {
        MiInsertTbFlushEntry(&v17, v13, v14, 0);
        v14 <<= 9;
        v13 = (__int64)((v13 << 25) - v12) >> 16;
        --v15;
      }
      while ( v15 );
    }
    v7 = 512LL;
  }
LABEL_21:
  v16 = v6 + 8 * v7;
  while ( v6 < v16 )
  {
    *(_QWORD *)v6 = 0LL;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v6, 0LL);
    v6 += 8LL;
  }
  if ( v9 )
    MiFlushTbList((__int64)&v17, a2);
}
