/*
 * XREFs of sub_18009D700 @ 0x18009D700
 * Callers:
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 * Callees:
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_18009D660 @ 0x18009D660 (sub_18009D660.c)
 */

void __fastcall sub_18009D700(unsigned __int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  v6 = a2;
  if ( (*(_BYTE *)(a3 + 24) & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v6;
        sub_18009D660(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          sub_18009D660(63LL, a3, a4);
        }
      }
      while ( v6 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}
