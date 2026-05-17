/*
 * XREFs of CompareNamesCaseSensitive @ 0x1800E4590
 * Callers:
 *     PfxFindPrefix @ 0x1800E47A0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E48A0 (PfxInsertPrefix.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A4640 (RtlCompareMemory.c)
 */

__int64 __fastcall CompareNamesCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  const void *v7; // rdx
  unsigned int v8; // eax
  const void *v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rbp
  __int64 v15; // r15
  char v16; // al
  unsigned __int8 v17; // bl
  unsigned __int8 v18; // r11
  unsigned __int8 v19; // r10
  unsigned int i; // r9d
  unsigned int j; // r9d

  v2 = *a1;
  v3 = *a2;
  if ( (_WORD)v2 == 1 && **((_BYTE **)a1 + 1) == 92 && (unsigned __int16)v3 > 1u && **((_BYTE **)a2 + 1) == 92 )
    return 1LL;
  v7 = (const void *)*((_QWORD *)a2 + 1);
  v8 = *a1;
  v9 = (const void *)*((_QWORD *)a1 + 1);
  if ( (unsigned int)v2 >= v3 )
    v8 = v3;
  v10 = v8;
  v11 = RtlCompareMemory(v9, v7, v8);
  v12 = 0;
  v13 = v11;
  if ( v11 >= v10 )
    goto LABEL_28;
  v14 = *((_QWORD *)a1 + 1);
  v15 = *((_QWORD *)a2 + 1);
  v16 = *(_BYTE *)(v11 + v14);
  v17 = *(_BYTE *)(v13 + v15);
  v18 = *(_BYTE *)(v13 + v14);
  v19 = v17;
  if ( v16 == 92 )
    v18 = 0;
  if ( v17 == 92 )
    v19 = 0;
  if ( NlsMbCodePageTag )
  {
    if ( v16 == 92 )
    {
      for ( i = 0; i < v13; i += (NlsLeadByteInfoTable[*(unsigned __int8 *)(i + v14)] != 0) + 1 )
        ;
      if ( i != v13 )
        v18 = 92;
    }
    if ( v17 == 92 )
    {
      for ( j = 0; j < v13; j += (NlsLeadByteInfoTable[*(unsigned __int8 *)(j + v15)] != 0) + 1 )
        ;
      if ( j != v13 )
        v19 = 92;
    }
  }
  if ( v18 < v19 )
    return 0LL;
  if ( v18 > v19 )
    return 3LL;
LABEL_28:
  if ( v3 <= (unsigned int)v2 )
    return (unsigned int)(v3 < (unsigned int)v2) + 2;
  LOBYTE(v12) = *(_BYTE *)(v2 + *((_QWORD *)a2 + 1)) == 92;
  return v12;
}
