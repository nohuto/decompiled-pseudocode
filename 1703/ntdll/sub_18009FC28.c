/*
 * XREFs of sub_18009FC28 @ 0x18009FC28
 * Callers:
 *     sub_18009D660 @ 0x18009D660 (sub_18009D660.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

__int64 __fastcall sub_18009FC28(unsigned __int16 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8) - 2;
    *(_DWORD *)(a2 + 8) = v3;
    if ( v3 < 0 )
    {
      return sub_18009FD8C(a1);
    }
    else
    {
      **(_WORD **)a2 = a1;
      result = a1;
      *(_QWORD *)a2 += 2LL;
    }
  }
  else
  {
    sub_180095DE0();
    return 0xFFFFLL;
  }
  return result;
}
