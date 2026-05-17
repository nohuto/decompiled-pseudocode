/*
 * XREFs of sub_18009297C @ 0x18009297C
 * Callers:
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 * Callees:
 *     _errno @ 0x180083380 (_errno.c)
 *     sub_1800928DC @ 0x1800928DC (sub_1800928DC.c)
 */

void __fastcall sub_18009297C(unsigned __int16 *a1, int a2, __int64 a3, _DWORD *a4)
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
        sub_1800928DC(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          sub_1800928DC(63LL, a3, a4);
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
