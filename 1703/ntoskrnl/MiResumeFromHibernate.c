/*
 * XREFs of MiResumeFromHibernate @ 0x14013D43C
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiResumeFromHibernate(int a1)
{
  unsigned int v1; // r9d
  unsigned int v3; // r10d
  unsigned int v4; // edx
  int v5; // r11d
  char *v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  __int64 v9; // r8
  char *v10; // rcx
  __int64 i; // rax
  unsigned int v12; // ecx
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned int SizeOfBitMap; // edx

  v1 = 0;
  while ( 1 )
  {
    v3 = v1 < qword_14036C8D8->SizeOfBitMap ? v1 : 0;
    v4 = qword_14036C8D8->SizeOfBitMap - 1;
    v5 = ((__int64)qword_14036C8D8->Buffer & 4) != 0LL ? 0x20 : 0;
    v6 = (char *)qword_14036C8D8->Buffer - (((__int64)qword_14036C8D8->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v7 = v5 + v4;
      v8 = v5 + v3;
      if ( v4 - v3 == -1 )
        goto LABEL_18;
      v9 = (1LL << (v8 & 0x3F)) - 1;
      v10 = &v6[8 * ((unsigned __int64)v8 >> 6)];
      for ( i = v9 | ~*(_QWORD *)v10; i == -1; i = ~*(_QWORD *)v10 )
      {
        v10 += 8;
        if ( v10 > &v6[8 * ((unsigned __int64)v7 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v12 = i + ((unsigned int)((v10 - v6) >> 3) << 6);
      if ( v12 > v7 )
      {
LABEL_18:
        v12 = -1;
      }
      else if ( v12 != -1 )
      {
        break;
      }
      if ( !v3 )
        break;
      SizeOfBitMap = v1 + 1;
      if ( v1 + 1 > qword_14036C8D8->SizeOfBitMap )
        SizeOfBitMap = qword_14036C8D8->SizeOfBitMap;
      v4 = SizeOfBitMap - 1;
      v3 = 0;
    }
    result = v12 - v5;
    if ( v12 == -1 )
      result = 0xFFFFFFFFLL;
    if ( (unsigned int)result < v1 || (_DWORD)result == -1 )
      return result;
    v1 = result + 1;
    v14 = *(_QWORD *)(qword_14036C8F8 + 8LL * (unsigned int)result);
    if ( (*(_DWORD *)(v14 + 4) & 4) != 0 )
    {
      if ( a1 )
        *(_BYTE *)(v14 + 4548) = a1;
      *(_BYTE *)(v14 + 4549) = 1;
    }
  }
}
