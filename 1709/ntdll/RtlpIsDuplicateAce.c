/*
 * XREFs of RtlpIsDuplicateAce @ 0x180055DB8
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180055AD4 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x18008D710 (RtlpCompareKnownObjectAces.c)
 *     memcmp @ 0x180094960 (memcmp.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // cl
  unsigned __int8 *v5; // rsi
  char v6; // bl
  int v7; // ebp
  int v8; // r12d
  int v9; // r14d
  int v10; // r15d
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  char v15; // al
  int v16; // ecx

  if ( *a2 > 8u )
    return 0;
  if ( *a2 == 4 )
    return 0;
  v4 = a2[1];
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = (v4 & 2) != 0 ? *((_DWORD *)a2 + 1) : 0;
  v10 = (v4 & 1) != 0 ? *((_DWORD *)a2 + 1) : 0;
  if ( (v4 & 8) == 0 )
    v7 = *((_DWORD *)a2 + 1);
  if ( *(unsigned __int16 *)(a1 + 4) - 1 > 0 )
  {
    do
    {
      if ( *v5 > 8u )
        goto LABEL_15;
      if ( *v5 == 4 )
        goto LABEL_15;
      v11 = v5[1];
      if ( (v11 & 0x10) == 0 )
        goto LABEL_15;
      v12 = *a2 - 5;
      if ( *v5 >= 5u )
      {
        if ( v12 > 3u )
          goto LABEL_15;
        v15 = RtlpCompareKnownObjectAces(v5, a2, 0LL, 0LL);
      }
      else
      {
        if ( v12 <= 3u )
          goto LABEL_15;
        v13 = *a2;
        if ( RtlBaseAceType[v13] != RtlBaseAceType[*v5] || RtlIsSystemAceType[v13] && ((a2[1] ^ v11) & 0xC0) != 0 )
          goto LABEL_15;
        if ( *((_WORD *)a2 + 4) != *((_WORD *)v5 + 4) || memcmp(a2 + 8, v5 + 8, 4 * (unsigned int)a2[9] + 8) )
          goto LABEL_15;
        v15 = 1;
      }
      if ( v15 )
      {
        v16 = *((_DWORD *)v5 + 1);
        if ( (v5[1] & 2) != 0 )
          v9 &= ~v16;
        if ( (v5[1] & 1) != 0 )
          v10 &= ~v16;
        if ( (v5[1] & 8) == 0 )
          v7 &= ~v16;
        if ( !(v9 | v10 | v7) )
          return 1;
      }
LABEL_15:
      ++v8;
      v5 += *((unsigned __int16 *)v5 + 1);
    }
    while ( v8 < *(unsigned __int16 *)(a1 + 4) - 1 );
  }
  return v6;
}
