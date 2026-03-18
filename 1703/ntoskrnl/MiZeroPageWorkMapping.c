/*
 * XREFs of MiZeroPageWorkMapping @ 0x1400B3330
 * Callers:
 *     MiReleaseLargeZeroingVa @ 0x1400B3778 (MiReleaseLargeZeroingVa.c)
 *     MiPageListCollision @ 0x140125804 (MiPageListCollision.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1400344A8 (MiInsertLargeTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiZeroPageWorkMapping(unsigned int a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r10
  int v8; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v9; // [rsp+24h] [rbp-D4h]
  __int64 v10; // [rsp+28h] [rbp-D0h]
  __int64 v11; // [rsp+30h] [rbp-C8h]
  __int64 v12; // [rsp+38h] [rbp-C0h]

  v10 = 20LL;
  v8 = 0;
  v2 = (_QWORD *)a2;
  v9 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a1 > 1 )
  {
    v4 = a2 << 25 >> 16;
    if ( a1 == -1 )
    {
      v3 = 1LL;
      MiInsertTbFlushEntry(&v8, v4, 1LL, 0LL);
    }
    else if ( a1 == 2 )
    {
      v3 = 16LL;
      MiInsertTbFlushEntry(&v8, v4, 16LL, 0LL);
    }
    else
    {
      v3 = 512LL;
    }
  }
  else
  {
    MiInsertLargeTbFlushEntry((__int64)&v8, 2 - a1, a2);
    v3 = 1LL;
  }
  if ( v2 < &v2[v3] )
  {
    do
    {
      *v2 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v2) )
        MiWritePteShadow(v5);
      ++v2;
    }
    while ( (unsigned __int64)v2 < v6 );
  }
  return MiFlushTbList(&v8);
}
