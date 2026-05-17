/*
 * XREFs of RtlSidHashLookup @ 0x18007B800
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180094960 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int16 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // r9d
  unsigned __int64 i; // rbx
  int v10; // esi
  int v11; // r12d
  const void **v12; // r15
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v16; // rbp
  const void **v17; // rdi
  unsigned int v18; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = *(_WORD *)a2;
  v7 = a2[4 * v4 + 4];
  v8 = 4 * v4 + 8;
  v18 = v8;
  for ( i = *(_QWORD *)(a1 + 8LL * (v7 & 0xF) + 16) & *(_QWORD *)(a1 + 8LL * ((v7 >> 4) + 16) + 16); i; i >>= 8 )
  {
    LOBYTE(v10) = i;
    if ( (_BYTE)i )
    {
      do
      {
        v11 = SidHashByteToIndexLookupTable[(unsigned __int8)v10];
        v12 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (v11 + (unsigned int)v5));
        if ( *(_WORD *)*v12 == v6 )
        {
          if ( !memcmp(a2, *v12, v8) )
            return v12;
          v6 = *(_WORD *)a2;
          v8 = v18;
        }
        v10 = (unsigned __int8)v10 ^ (1 << v11);
      }
      while ( (_BYTE)v10 );
    }
    v5 += 8;
  }
  v13 = *(_DWORD *)a1;
  v14 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v17 = (const void **)(v16 + 16LL * v14);
    if ( *(_WORD *)*v17 != v6 )
      goto LABEL_17;
    if ( !memcmp(a2, *v17, v8) )
      return (const void **)(v16 + 16LL * v14);
    v6 = *(_WORD *)a2;
LABEL_17:
    if ( ++v14 >= v13 )
      return 0LL;
    v8 = v18;
  }
}
