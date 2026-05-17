/*
 * XREFs of sub_1800F2E10 @ 0x1800F2E10
 * Callers:
 *     sub_18008B350 @ 0x18008B350 (sub_18008B350.c)
 * Callees:
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     sub_18004FBB8 @ 0x18004FBB8 (sub_18004FBB8.c)
 *     sub_18004FC4C @ 0x18004FC4C (sub_18004FC4C.c)
 *     sub_18009F8D0 @ 0x18009F8D0 (sub_18009F8D0.c)
 *     sub_1800F2DE4 @ 0x1800F2DE4 (sub_1800F2DE4.c)
 *     sub_1800F2E70 @ 0x1800F2E70 (sub_1800F2E70.c)
 */

__int64 __fastcall sub_1800F2E10(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( byte_18016F29A && sub_1800F2DE4(a1) )
    return sub_18004FBB8(a1, 1u);
  if ( !(unsigned int)sub_18001F704() || !sub_18004FC4C(a1) || (result = sub_1800F2E70(a1), (int)result < 0) )
    sub_18009F8D0(0xAu);
  return result;
}
