/*
 * XREFs of sub_18009D6AC @ 0x18009D6AC
 * Callers:
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 * Callees:
 *     sub_18009D660 @ 0x18009D660 (sub_18009D660.c)
 */

void __fastcall sub_18009D6AC(unsigned __int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      sub_18009D660(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
