/*
 * XREFs of RtlSidHashLookup @ 0x14006A190
 * Callers:
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  unsigned int v6; // r12d
  __int16 v7; // r15
  unsigned int v8; // edx
  unsigned __int64 i; // rsi
  unsigned int v10; // esi
  int v12; // r13d
  __int64 v13; // rcx
  int v14; // edx
  const void **v15; // r14
  unsigned int v16; // ebp
  __int64 v17; // r14
  const void **v18; // rdi
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = 4 * v4 + 8;
  v7 = *(_WORD *)a2;
  v8 = a2[4 * v4 + 4];
  for ( i = *(_QWORD *)(a1 + 8LL * (v8 & 0xF) + 16) & *(_QWORD *)(a1 + 8LL * ((v8 >> 4) + 16) + 16); i; i >>= 8 )
  {
    LOBYTE(v12) = i;
    if ( (_BYTE)i )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v20 = v13;
      v14 = v5;
      do
      {
        v19 = SidHashByteToIndexLookupTable[(unsigned __int8)v12];
        v15 = (const void **)(v13 + 16LL * (unsigned int)(v14 + v19));
        if ( *(_WORD *)*v15 == v7 )
        {
          if ( !memcmp(a2, *v15, v6) )
            return v15;
          v13 = v20;
          v14 = v5;
        }
        v12 = (unsigned __int8)v12 ^ (1 << v19);
      }
      while ( (_BYTE)v12 );
    }
    v5 += 8;
  }
  v10 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v16 = 64;
  v17 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v18 = (const void **)(v17 + 16LL * v16);
    if ( *(_WORD *)*v18 == v7 && !memcmp(a2, *v18, v6) )
      break;
    if ( ++v16 >= v10 )
      return 0LL;
  }
  return (const void **)(v17 + 16LL * v16);
}
