/*
 * XREFs of sub_1800979CC @ 0x1800979CC
 * Callers:
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 * Callees:
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 */

__int64 __fastcall sub_1800979CC(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // ebx

  result = *(unsigned int *)(a3 + 24);
  v7 = a2;
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = sub_180097930(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
