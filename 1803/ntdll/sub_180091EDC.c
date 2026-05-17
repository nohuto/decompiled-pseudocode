/*
 * XREFs of sub_180091EDC @ 0x180091EDC
 * Callers:
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 * Callees:
 *     sub_180091E94 @ 0x180091E94 (sub_180091E94.c)
 */

void __fastcall sub_180091EDC(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      sub_180091E94(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
