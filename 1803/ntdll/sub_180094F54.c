/*
 * XREFs of sub_180094F54 @ 0x180094F54
 * Callers:
 *     sub_1800928DC @ 0x1800928DC (sub_1800928DC.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

__int64 __fastcall sub_180094F54(unsigned __int16 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // sf

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8) - 2 < 0;
    *(_DWORD *)(a2 + 8) -= 2;
    if ( v3 )
    {
      return sub_1800950B8(a1);
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
    sub_18008B020();
    return 0xFFFFLL;
  }
  return result;
}
