/*
 * XREFs of RtlpIsDuplicateAce @ 0x1404C8770
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1404C8420 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownAces @ 0x1404C88D0 (RtlpCompareKnownAces.c)
 *     RtlpCompareKnownObjectAces @ 0x140785588 (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, __int64 a2)
{
  char v4; // r8
  int v5; // eax
  char v6; // cl
  unsigned __int8 *v7; // rbx
  int v8; // edi
  int v9; // r12d
  char v10; // dl
  char v11; // r8
  int v12; // ebp
  int v13; // r13d
  unsigned __int8 v14; // cl
  int v15; // r15d
  unsigned __int8 v16; // al
  char v17; // al
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d

  if ( *(_BYTE *)a2 > 8u )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_BYTE *)(a2 + 1);
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = v4 & 2;
  v7 = (unsigned __int8 *)(a1 + 8);
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 4);
  v10 = v4 & 1;
  v11 = v4 & 8;
  if ( v5 - 1 > 0 )
  {
    v12 = v9;
    v13 = v9;
    if ( !v6 )
      v12 = 0;
    if ( !v10 )
      v13 = 0;
    if ( v11 )
      v9 = 0;
    do
    {
      v14 = *v7;
      v15 = v12;
      if ( *v7 > 8u || v14 == 4 || (v7[1] & 0x10) == 0 )
        goto LABEL_18;
      v16 = *(_BYTE *)a2 - 5;
      if ( v14 >= 5u )
      {
        if ( v16 > 3u )
          goto LABEL_18;
        v17 = RtlpCompareKnownObjectAces(v7, a2);
      }
      else
      {
        if ( v16 <= 3u )
          goto LABEL_18;
        v17 = RtlpCompareKnownAces(v7, a2);
      }
      if ( v17 )
      {
        v19 = ~*((_DWORD *)v7 + 1);
        v12 &= v19;
        if ( (v7[1] & 2) == 0 )
          v12 = v15;
        v20 = v13 & ~*((_DWORD *)v7 + 1);
        if ( (v7[1] & 1) == 0 )
          v20 = v13;
        v21 = v9 & v19;
        v13 = v20;
        if ( (v7[1] & 8) != 0 )
          v21 = v9;
        v9 = v21;
        if ( !(v12 | v20 | v21) )
          return 1;
      }
LABEL_18:
      ++v8;
      v7 += *((unsigned __int16 *)v7 + 1);
    }
    while ( v8 < *(unsigned __int16 *)(a1 + 4) - 1 );
  }
  return 0;
}
