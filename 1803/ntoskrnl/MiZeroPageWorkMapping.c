/*
 * XREFs of MiZeroPageWorkMapping @ 0x1400C0E24
 * Callers:
 *     MiPageListCollision @ 0x1400C0DC4 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x140266E48 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiVaIsUltra @ 0x14007FBA4 (MiVaIsUltra.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // r12d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 i; // rcx
  __int64 v16; // r13
  __int64 v17; // r14
  int v18; // [rsp+20h] [rbp-A9h] BYREF
  __int16 v19; // [rsp+24h] [rbp-A5h]
  __int64 v20; // [rsp+28h] [rbp-A1h]
  __int64 v21; // [rsp+30h] [rbp-99h]
  __int64 v22; // [rsp+38h] [rbp-91h]

  v3 = a1;
  v20 = 20LL;
  v5 = a2;
  v18 = 0;
  v6 = 0LL;
  v19 = 0;
  v7 = 1LL;
  v21 = 0LL;
  v22 = 0LL;
  v8 = 1;
  if ( a1 <= 1 )
  {
    MiInsertLargeTbFlushEntry(&v18, 2 - a1, a2);
    v7 = 1LL;
    v6 = 1LL;
  }
  v9 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = v5; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( MiVaIsUltra(i) )
    {
      v8 = 0;
    }
    else if ( (unsigned int)v3 > (unsigned int)v7 )
    {
      v8 = 0;
    }
  }
  if ( !v6 )
  {
    v10 = v9 << 25;
    v11 = (__int64)((v5 << 25) - (v9 << 25)) >> 16;
    if ( (_DWORD)v3 == 3 )
    {
      v6 = v7;
LABEL_7:
      MiInsertTbFlushEntry((__int64)&v18, v11, v7, 0);
      goto LABEL_8;
    }
    if ( (_DWORD)v3 == 2 )
    {
      v6 = MiLargePageSizes[v3];
      v7 = v6;
      goto LABEL_7;
    }
    v16 = MiLargePageSizes[v3];
    if ( (unsigned int)v3 <= (unsigned int)v7 )
    {
      v17 = (unsigned int)(2 - v3);
      do
      {
        MiInsertTbFlushEntry((__int64)&v18, v11, v16, 0);
        v16 <<= 9;
        v11 = (__int64)((v11 << 25) - v10) >> 16;
        --v17;
      }
      while ( v17 );
    }
    v6 = 512LL;
  }
LABEL_8:
  v12 = v5 + 8 * v6;
  while ( v5 < v12 )
  {
    *(_QWORD *)v5 = 0LL;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v13, 0LL, v14);
    v5 += 8LL;
  }
  if ( v8 )
    MiFlushTbList(&v18);
}
