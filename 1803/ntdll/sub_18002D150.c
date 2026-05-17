/*
 * XREFs of sub_18002D150 @ 0x18002D150
 * Callers:
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 * Callees:
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 */

__int64 __fastcall sub_18002D150(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  int v5; // ecx

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD **)(a1 + 40);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = v3[1];
      if ( *(_DWORD *)(v4 + 56) == 6 )
      {
        v5 = sub_18002D150(v3[1]);
      }
      else if ( *(int *)(v4 + 56) < 7 )
      {
        v5 = -1073741595;
        if ( *(_DWORD *)(v4 + 56) == -4 )
          v5 = -1073741502;
      }
      else
      {
        v5 = 0;
      }
    }
    while ( v5 >= 0 && v3 != v1 );
  }
  else
  {
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    *(_DWORD *)(a1 + 56) = 7;
    v5 = sub_18002D1D8(a1);
    if ( v5 < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return (unsigned int)v5;
}
