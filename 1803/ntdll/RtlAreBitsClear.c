/*
 * XREFs of RtlAreBitsClear @ 0x1800893C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r9
  unsigned int v4; // r10d
  bool result; // al
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // ebx
  int *v9; // r11
  int *v11; // rdx

  v3 = a2;
  v4 = a2 + a3 - 1;
  if ( v4 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest(*(const signed __int32 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (int *)(v6 + 4 * ((unsigned __int64)a2 >> 5));
  v8 = *v7;
  v9 = (int *)(v6 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - a3) << v3)) == 0;
  if ( (v8 & (-1 << v3)) != 0 )
    return 0;
  v11 = v7 + 1;
  if ( v11 == v9 )
    return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v11) == 0;
  result = 0;
  while ( !*v11 )
  {
    if ( ++v11 == v9 )
      return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v11) == 0;
  }
  return result;
}
