/*
 * XREFs of RtlSidHashLookup @ 0x14005E820
 * Callers:
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // r13d
  __int16 v6; // r14
  unsigned int v7; // eax
  unsigned __int64 i; // rsi
  unsigned int v9; // esi
  int v11; // r12d
  __int64 v12; // rcx
  int v13; // edx
  const void **v14; // r15
  __int64 v15; // r15
  unsigned int v16; // ebp
  const void **v17; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = 0;
  v5 = 4 * a2[1] + 8;
  v6 = *(_WORD *)a2;
  v7 = a2[4 * (unsigned __int8)HIBYTE(*(_WORD *)a2) + 4];
  for ( i = *(_QWORD *)(a1 + 8LL * (v7 & 0xF) + 16) & *(_QWORD *)(a1 + 8LL * ((v7 >> 4) + 16) + 16); i; i >>= 8 )
  {
    LOBYTE(v11) = i;
    if ( (_BYTE)i )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v19 = v12;
      v13 = v4;
      do
      {
        v18 = SidHashByteToIndexLookupTable[(unsigned __int8)v11];
        v14 = (const void **)(v12 + 16LL * (unsigned int)(v13 + v18));
        if ( *(_WORD *)*v14 == v6 )
        {
          if ( !memcmp(a2, *v14, v5) )
            return v14;
          v12 = v19;
          v13 = v4;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v18);
      }
      while ( (_BYTE)v11 );
    }
    v4 += 8;
  }
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = 64;
  while ( 1 )
  {
    v17 = (const void **)(v15 + 16LL * v16);
    if ( *(_WORD *)*v17 == v6 && !memcmp(a2, *v17, v5) )
      break;
    if ( ++v16 >= v9 )
      return 0LL;
  }
  return (const void **)(v15 + 16LL * v16);
}
