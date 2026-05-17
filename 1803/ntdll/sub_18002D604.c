/*
 * XREFs of sub_18002D604 @ 0x18002D604
 * Callers:
 *     sub_18002CFE4 @ 0x18002CFE4 (sub_18002CFE4.c)
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002D604(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&unk_1801101C0 + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
