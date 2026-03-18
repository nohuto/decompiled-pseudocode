/*
 * XREFs of CompareNamesCaseSensitive @ 0x140783470
 * Callers:
 *     PfxFindPrefix @ 0x140783690 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140783790 (PfxInsertPrefix.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 */

__int64 __fastcall CompareNamesCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned int v4; // esi
  const void *v7; // rdx
  unsigned int v8; // eax
  const void *v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // r15
  unsigned __int8 v15; // r11
  __int64 v16; // r12
  unsigned __int8 v17; // bl
  char v18; // r10
  char v19; // bp
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // al
  unsigned int i; // r10d
  unsigned int j; // r10d

  v2 = *a1;
  result = 1LL;
  v4 = *a2;
  if ( (_WORD)v2 != 1 || **((_BYTE **)a1 + 1) != 92 || (unsigned __int16)v4 <= 1u || **((_BYTE **)a2 + 1) != 92 )
  {
    v7 = (const void *)*((_QWORD *)a2 + 1);
    v8 = *a1;
    v9 = (const void *)*((_QWORD *)a1 + 1);
    if ( (unsigned int)v2 >= v4 )
      v8 = v4;
    v10 = v8;
    v11 = RtlCompareMemory(v9, v7, v8);
    v12 = 0;
    v13 = v11;
    if ( v11 >= v10 )
      goto LABEL_27;
    v14 = *((_QWORD *)a1 + 1);
    v15 = 0;
    v16 = *((_QWORD *)a2 + 1);
    v17 = 0;
    v18 = *(_BYTE *)(v11 + v14);
    v19 = *(_BYTE *)(v11 + v16);
    if ( v18 != 92 )
      v15 = *(_BYTE *)(v11 + v14);
    v20 = v15;
    if ( v19 != 92 )
      v17 = *(_BYTE *)(v11 + v16);
    v21 = v17;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      if ( v18 == 92 )
      {
        for ( i = 0; i < v13; i += (NlsLeadByteInfoTable[*(unsigned __int8 *)(i + v14)] != 0) + 1 )
          ;
        v20 = v15;
        if ( i != v13 )
          v20 = 92;
      }
      v21 = v17;
      if ( v19 == 92 )
      {
        for ( j = 0; j < v13; j += (NlsLeadByteInfoTable[*(unsigned __int8 *)(j + v16)] != 0) + 1 )
          ;
        v21 = v17;
        if ( j != v13 )
          v21 = 92;
      }
    }
    if ( v20 < v21 )
      return 0LL;
    if ( v20 <= v21 )
    {
LABEL_27:
      if ( v4 <= (unsigned int)v2 )
      {
        return (unsigned int)(v4 < (unsigned int)v2) + 2;
      }
      else
      {
        LOBYTE(v12) = *(_BYTE *)(v2 + *((_QWORD *)a2 + 1)) == 92;
        return v12;
      }
    }
    else
    {
      return 3LL;
    }
  }
  return result;
}
