/*
 * XREFs of RtlAreBitsClearEx @ 0x140287770
 * Callers:
 *     MiHotAddPartitionMemory @ 0x14075757C (MiHotAddPartitionMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  unsigned __int64 v4; // r11
  bool result; // al
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r10
  __int64 *v11; // rdx

  v3 = a2;
  v4 = a2 + a3 - 1;
  if ( v4 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (__int64 *)(v6 + 8 * (a2 >> 6));
  v8 = *v7;
  v9 = (__int64 *)(v6 + 8 * (v4 >> 6));
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << v3)) == 0;
  if ( (v8 & (-1LL << v3)) != 0 )
    return 0;
  v11 = v7 + 1;
  if ( v11 == v9 )
    return (*v11 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4)) == 0;
  result = 0;
  while ( !*v11 )
  {
    if ( ++v11 == v9 )
      return (*v11 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4)) == 0;
  }
  return result;
}
