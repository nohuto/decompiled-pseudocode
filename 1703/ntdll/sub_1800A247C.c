/*
 * XREFs of sub_1800A247C @ 0x1800A247C
 * Callers:
 *     sub_1800A1A64 @ 0x1800A1A64 (sub_1800A1A64.c)
 *     sub_1800A24C4 @ 0x1800A24C4 (sub_1800A24C4.c)
 *     sub_1800A2518 @ 0x1800A2518 (sub_1800A2518.c)
 * Callees:
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 */

__int64 __fastcall sub_1800A247C(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      result = sub_18009C404((unsigned int)(char)a1, a2);
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
