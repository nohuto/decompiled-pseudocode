/*
 * XREFs of RtlFindNextAlignedForwardRunClear @ 0x1400E09F4
 * Callers:
 *     EtwpFindUserBufferSpace @ 0x140532FCC (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextAlignedForwardRunClear(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edx
  unsigned int v7; // eax
  int v8; // r9d
  unsigned __int64 v9; // rbp
  _DWORD *i; // r10
  char v11; // al
  int v12; // r11d
  unsigned int j; // r8d
  int v14; // ecx
  unsigned int v15; // r8d

  v3 = *a1;
  v4 = 0;
  v7 = 1;
  v8 = 1;
  do
    v8 |= 1 << v7++;
  while ( v7 < 0x20 );
  v9 = *((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)(v3 - 1) >> 5);
LABEL_4:
  for ( i = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)v4 >> 5)); (unsigned __int64)i <= v9; ++i )
  {
    v11 = v4;
    v4 &= 0xFFFFFFE0;
    v12 = *i | dword_1402C05D0[v11 & 0x1F];
    if ( (v8 & v12) == v8 )
    {
      v4 += 32;
    }
    else
    {
      for ( j = 0; j < 0x20; ++j )
      {
        if ( !_bittest(&v12, j) )
        {
          v14 = 0;
          if ( v4 < v3 )
          {
            do
            {
              if ( _bittest64(*((const signed __int64 **)a1 + 1), v4) )
                break;
              ++v4;
              if ( ++v14 == a3 )
                return v4 - v14;
            }
            while ( v4 < v3 );
            if ( !v14 )
              goto LABEL_9;
            v15 = v14 + j + 1;
            if ( v15 >= 0x20 )
            {
              ++v4;
              goto LABEL_4;
            }
            j = v15 - 1;
          }
        }
LABEL_9:
        ++v4;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
