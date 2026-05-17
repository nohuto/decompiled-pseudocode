/*
 * XREFs of RtlAreBitsClear @ 0x180089350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r10
  unsigned int v4; // r9d
  char v5; // cl
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r11
  bool i; // zf
  unsigned int v11; // r8d

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
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (_DWORD *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  v9 = (_DWORD *)(v7 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v8 == v9 )
  {
    v11 = 0xFFFFFFFF >> (32 - a3) << v3;
    return (v11 & *v8) == 0;
  }
  else
  {
    v5 = 0;
    for ( i = ((-1 << v3) & *v8) == 0; i; i = *v8 == 0 )
    {
      if ( ++v8 == v9 )
      {
        v11 = 0xFFFFFFFF >> ~(_BYTE)v4;
        return (v11 & *v8) == 0;
      }
    }
  }
  return v5;
}
