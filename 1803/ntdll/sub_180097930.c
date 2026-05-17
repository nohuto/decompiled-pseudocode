/*
 * XREFs of sub_180097930 @ 0x180097930
 * Callers:
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 *     sub_180097978 @ 0x180097978 (sub_180097978.c)
 *     sub_1800979CC @ 0x1800979CC (sub_1800979CC.c)
 * Callees:
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

__int64 __fastcall sub_180097930(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      result = sub_18009A104((unsigned int)(char)a1, a2);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a2)++ = a1;
      result = a1;
    }
    if ( (_DWORD)result == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return result;
}
