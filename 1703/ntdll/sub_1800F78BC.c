/*
 * XREFs of sub_1800F78BC @ 0x1800F78BC
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 *     sub_1800F7744 @ 0x1800F7744 (sub_1800F7744.c)
 *     sub_1800F78BC @ 0x1800F78BC (sub_1800F78BC.c)
 * Callees:
 *     sub_1800F78BC @ 0x1800F78BC (sub_1800F78BC.c)
 */

bool __fastcall sub_1800F78BC(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v4; // rcx
  int v6; // ebp
  char v7; // di
  __int16 v9; // ax

  v4 = (__int16 *)a1[5];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v4 < a1[4] )
    {
      while ( a3 != v4 )
      {
        v9 = *a3;
        *a3 = a2;
        LOWORD(a2) = v9;
        ++a3;
      }
      *v4 = a2;
      a1[5] = v4 + 1;
      if ( (__int16 *)a1[8] == v4 - 1 )
        a1[8] = v4;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v6 = (a2 - 0x10000) / 1024;
    v7 = 0;
    if ( (unsigned __int8)sub_1800F78BC(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216)) )
      return (unsigned __int8)sub_1800F78BC(a1, (unsigned __int16)(v6 - 10240)) != 0;
    return v7;
  }
}
