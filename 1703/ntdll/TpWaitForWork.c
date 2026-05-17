/*
 * XREFs of TpWaitForWork @ 0x1800110D0
 * Callers:
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 * Callees:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_180014918 @ 0x180014918 (sub_180014918.c)
 */

__int64 __fastcall TpWaitForWork(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = sub_180014918(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return sub_18001434C(a1, a2);
  return result;
}
