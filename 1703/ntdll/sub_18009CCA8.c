/*
 * XREFs of sub_18009CCA8 @ 0x18009CCA8
 * Callers:
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 * Callees:
 *     sub_18009CC60 @ 0x18009CC60 (sub_18009CC60.c)
 */

void __fastcall sub_18009CCA8(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      sub_18009CC60(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
