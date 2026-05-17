/*
 * XREFs of sub_180091F30 @ 0x180091F30
 * Callers:
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 * Callees:
 *     _errno @ 0x180083380 (_errno.c)
 *     sub_180091E94 @ 0x180091E94 (sub_180091E94.c)
 */

void __fastcall sub_180091F30(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
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
        sub_180091E94(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          sub_180091E94(0x3Fu, a3, a4);
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
