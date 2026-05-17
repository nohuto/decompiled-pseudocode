/*
 * XREFs of sub_1800391F0 @ 0x1800391F0
 * Callers:
 *     sub_180038624 @ 0x180038624 (sub_180038624.c)
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 *     sub_1800893F0 @ 0x1800893F0 (sub_1800893F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800391F0(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&unk_180110270 + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
