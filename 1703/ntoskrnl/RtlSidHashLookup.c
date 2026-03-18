/*
 * XREFs of RtlSidHashLookup @ 0x1400938C0
 * Callers:
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 * Callees:
 *     memcmp @ 0x14016A960 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  int v4; // eax
  unsigned __int8 v5; // bp
  unsigned int v6; // r12d
  __int16 v7; // r15
  unsigned __int64 i; // rsi
  int v9; // r13d
  __int64 v10; // rcx
  int v11; // edx
  const void **v12; // r14
  unsigned int v14; // esi
  unsigned int v15; // ebp
  __int64 v16; // r14
  const void **v17; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = 4 * v4 + 8;
  v7 = *(_WORD *)a2;
  for ( i = *(_QWORD *)(a1 + 8LL * (a2[4 * v4 + 4] & 0xF) + 16) & *(_QWORD *)(a1
                                                                            + 8LL * ((a2[4 * v4 + 4] >> 4) + 16)
                                                                            + 16); i; i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      v10 = *(_QWORD *)(a1 + 8);
      v19 = v10;
      v11 = v5;
      do
      {
        v18 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v9];
        v12 = (const void **)(v10 + 16LL * (unsigned int)(v11 + v18));
        if ( *(_WORD *)*v12 == v7 )
        {
          if ( !memcmp(a2, *v12, v6) )
            return v12;
          v10 = v19;
          v11 = v5;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v18);
      }
      while ( (_BYTE)v9 );
    }
    v5 += 8;
  }
  v14 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v15 = 64;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v17 = (const void **)(v16 + 16LL * v15);
    if ( *(_WORD *)*v17 == v7 && !memcmp(a2, *v17, v6) )
      break;
    if ( ++v15 >= v14 )
      return 0LL;
  }
  return (const void **)(v16 + 16LL * v15);
}
