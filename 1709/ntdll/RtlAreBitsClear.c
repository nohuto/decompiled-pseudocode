/*
 * XREFs of RtlAreBitsClear @ 0x18008F1B0
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
  _DWORD *v7; // rdx
  _DWORD *v8; // r11
  unsigned int v9; // r8d

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
  v7 = (_DWORD *)(v6 + 4 * ((unsigned __int64)a2 >> 5));
  v8 = (_DWORD *)(v6 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v7 == v8 )
  {
    v9 = 0xFFFFFFFF >> (32 - a3) << v3;
    return (v9 & *v7) == 0;
  }
  if ( ((-1 << v3) & *v7) != 0 )
    return 0;
  if ( ++v7 == v8 )
  {
LABEL_15:
    v9 = 0xFFFFFFFF >> ~(_BYTE)v4;
    return (v9 & *v7) == 0;
  }
  result = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v8 )
      goto LABEL_15;
  }
  return result;
}
