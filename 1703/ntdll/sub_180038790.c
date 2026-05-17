/*
 * XREFs of sub_180038790 @ 0x180038790
 * Callers:
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_180038790 @ 0x180038790 (sub_180038790.c)
 * Callees:
 *     sub_180038790 @ 0x180038790 (sub_180038790.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 */

__int64 __fastcall sub_180038790(__int64 a1)
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
        v5 = sub_180038790(v3[1]);
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
    v5 = sub_180039848(a1);
    if ( v5 < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return (unsigned int)v5;
}
