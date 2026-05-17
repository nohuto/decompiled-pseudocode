/*
 * XREFs of RtlAreBitsSet @ 0x18007ECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r9
  unsigned int v4; // r10d
  __int64 v6; // rcx
  int *v7; // r8
  int *v8; // r11
  int v9; // eax
  unsigned int v10; // r9d

  v3 = a3;
  v4 = a3 + a2 - 1;
  if ( v4 < *(_DWORD *)a1 )
  {
    if ( a3 <= 1 )
    {
      if ( a3 == 1 )
        return _bittest(*(const signed __int32 **)(a1 + 8), a2);
      return 0;
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (int *)(v6 + 4 * ((unsigned __int64)a2 >> 5));
    v8 = (int *)(v6 + 4 * ((unsigned __int64)v4 >> 5));
    v9 = *v7;
    if ( v7 == v8 )
    {
      v10 = 0xFFFFFFFF >> (32 - v3) << a2;
      return (v10 & v9) == v10;
    }
    if ( ((-1 << a2) & v9) == -1 << a2 )
    {
      while ( ++v7 != v8 )
      {
        if ( *v7 != -1 )
          return 0;
      }
      v9 = *v7;
      v10 = 0xFFFFFFFF >> ~(_BYTE)v4;
      return (v10 & v9) == v10;
    }
  }
  return 0;
}
