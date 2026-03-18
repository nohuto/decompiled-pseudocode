/*
 * XREFs of CompareUnicodeStrings @ 0x140437D8C
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x140437B20 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140437C80 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareUnicodeStrings(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v4; // r11
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // r9
  unsigned int v11; // r10d
  unsigned __int16 *v12; // rdi
  unsigned __int16 *v13; // rsi
  __int64 v15; // rdx

  v3 = a3;
  v4 = *a1 >> 1;
  v6 = *a2 >> 1;
  if ( (_DWORD)v4 == 1 && **((_WORD **)a1 + 1) == 92 && v6 > 1 && **((_WORD **)a2 + 1) == 92 )
    return 1LL;
  v7 = *a1 >> 1;
  if ( (unsigned int)v4 >= v6 )
    v7 = *a2 >> 1;
  if ( a3 > v7 )
    v3 = v7;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( v3 )
  {
    v15 = *((_QWORD *)a2 + 1);
    do
    {
      v9 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v11);
      v10 = *(_WORD *)(v15 + 2LL * v11);
      if ( v9 != v10 )
        break;
      ++v11;
    }
    while ( v11 < v3 );
  }
  if ( v11 == v3 )
  {
    v12 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v11);
    v13 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v11);
    if ( v11 >= v7 )
      goto LABEL_25;
    do
    {
      v9 = *v12++;
      v10 = *v13++;
      if ( v9 != v10 )
      {
        if ( v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v9 & 0xF)
                                                                          + 2
                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v9 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v9 >> 8)]]];
          else
            v9 -= 32;
        }
        if ( v10 >= 0x61u )
        {
          if ( v10 > 0x7Au )
            v10 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v10 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v10 >> 8)]]];
          else
            v10 -= 32;
        }
        if ( v9 != v10 )
          break;
      }
      ++v11;
    }
    while ( v11 < v7 );
  }
  if ( v11 < v7 )
  {
    if ( v9 == 92 )
      return 0LL;
    if ( v10 == 92 )
      return 3LL;
    if ( v9 < v10 )
      return 0LL;
    if ( v9 > v10 )
      return 3LL;
  }
LABEL_25:
  if ( v6 <= (unsigned int)v4 )
    return (unsigned int)(v6 < (unsigned int)v4) + 2;
  LOBYTE(v8) = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v4) == 92;
  return v8;
}
