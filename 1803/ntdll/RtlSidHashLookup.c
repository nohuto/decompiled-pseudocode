/*
 * XREFs of RtlSidHashLookup @ 0x18007CC90
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // bp
  __int16 v5; // r8
  unsigned int v6; // r9d
  unsigned int v7; // eax
  unsigned __int64 i; // rsi
  int v9; // edi
  int v10; // r12d
  const void **v11; // r15
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 v15; // rbp
  const void **v16; // rbx
  unsigned int v17; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = 0;
  v5 = *(_WORD *)a2;
  v6 = 4 * a2[1] + 8;
  v17 = v6;
  v7 = a2[4 * (unsigned __int8)HIBYTE(*(_WORD *)a2) + 4];
  for ( i = *(_QWORD *)(a1 + 8LL * (v7 & 0xF) + 16) & *(_QWORD *)(a1 + 8LL * ((v7 >> 4) + 16) + 16); i; i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      do
      {
        v10 = byte_18011A360[(unsigned __int8)v9];
        v11 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (v10 + (unsigned int)v4));
        if ( *(_WORD *)*v11 == v5 )
        {
          if ( !memcmp(a2, *v11, v6) )
            return v11;
          v5 = *(_WORD *)a2;
          v6 = v17;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v10);
      }
      while ( (_BYTE)v9 );
    }
    v4 += 8;
  }
  v12 = *(_DWORD *)a1;
  v13 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v16 = (const void **)(v15 + 16LL * v13);
    if ( *(_WORD *)*v16 != v5 )
      goto LABEL_17;
    if ( !memcmp(a2, *v16, v6) )
      return (const void **)(v15 + 16LL * v13);
    v5 = *(_WORD *)a2;
LABEL_17:
    if ( ++v13 >= v12 )
      return 0LL;
    v6 = v17;
  }
}
