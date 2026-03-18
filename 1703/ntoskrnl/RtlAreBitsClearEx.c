/*
 * XREFs of RtlAreBitsClearEx @ 0x14023C420
 * Callers:
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  unsigned __int64 v4; // r11
  char v5; // cl
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r10
  unsigned __int64 v9; // r9
  bool v10; // zf

  v3 = a3;
  v4 = a3 + a2 - 1;
  if ( v4 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (_QWORD *)(v6 + 8 * (a2 >> 6));
  v8 = (_QWORD *)(v6 + 8 * (v4 >> 6));
  if ( v7 == v8 )
  {
    v9 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - v3) << a2;
    return (v9 & *v7) == 0;
  }
  else
  {
    v10 = ((-1LL << a2) & *v7) == 0;
    v5 = 0;
    while ( v10 )
    {
      if ( ++v7 == v8 )
      {
        v9 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4;
        return (v9 & *v7) == 0;
      }
      v10 = *v7 == 0LL;
    }
  }
  return v5;
}
