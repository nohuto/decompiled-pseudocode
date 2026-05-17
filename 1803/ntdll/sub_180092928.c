/*
 * XREFs of sub_180092928 @ 0x180092928
 * Callers:
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 * Callees:
 *     sub_1800928DC @ 0x1800928DC (sub_1800928DC.c)
 */

void __fastcall sub_180092928(unsigned __int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      sub_1800928DC(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
