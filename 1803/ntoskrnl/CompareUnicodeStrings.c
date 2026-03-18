/*
 * XREFs of CompareUnicodeStrings @ 0x14055E8B0
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x14055E640 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x14055E7A0 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareUnicodeStrings(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r10
  unsigned int v10; // r11d
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // r12
  __int64 v14; // rdx

  v4 = *a1 >> 1;
  v5 = *a2 >> 1;
  if ( (_DWORD)v4 == 1 && **((_WORD **)a1 + 1) == 92 && v5 > 1 && **((_WORD **)a2 + 1) == 92 )
    return 1LL;
  v6 = *a1 >> 1;
  if ( (unsigned int)v4 >= v5 )
    v6 = *a2 >> 1;
  if ( a3 > v6 )
    a3 = v6;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    v14 = *((_QWORD *)a2 + 1);
    do
    {
      v8 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v10);
      v9 = *(_WORD *)(v14 + 2LL * v10);
      if ( v8 != v9 )
        break;
      ++v10;
    }
    while ( v10 < a3 );
  }
  if ( v10 == a3 )
  {
    v11 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v10);
    v12 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v10);
    if ( v10 >= v6 )
      goto LABEL_23;
    do
    {
      v8 = *v11++;
      v9 = *v12++;
      if ( v8 != v9 )
      {
        if ( v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
            v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                          + 2
                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v8 >> 8)]]];
          else
            v8 -= 32;
        }
        if ( v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v9 & 0xF)
                                                                          + 2
                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v9 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v9 >> 8)]]];
          else
            v9 -= 32;
        }
        if ( v8 != v9 )
          break;
      }
      ++v10;
    }
    while ( v10 < v6 );
  }
  if ( v10 < v6 )
  {
    if ( v8 == 92 )
      return 0LL;
    if ( v9 == 92 )
      return 3LL;
    if ( v8 < v9 )
      return 0LL;
    if ( v8 > v9 )
      return 3LL;
  }
LABEL_23:
  if ( v5 <= (unsigned int)v4 )
    return (unsigned int)(v5 < (unsigned int)v4) + 2;
  LOBYTE(v7) = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v4) == 92;
  return v7;
}
