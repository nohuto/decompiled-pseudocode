/*
 * XREFs of sub_18005C734 @ 0x18005C734
 * Callers:
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     sub_18005D72C @ 0x18005D72C (sub_18005D72C.c)
 * Callees:
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 */

__int64 __fastcall sub_18005C734(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax

  v4 = byte_18015A460;
  v5 = 32LL;
  do
  {
    v6 = sub_18005C774(a1, a2, a3, a4);
    a1 = 0x7F7F7F7F7F7F7F7FLL;
    result = v6 & 0x7F7F7F7F7F7F7F7FLL;
    *(_QWORD *)v4 = result;
    v4 += 8;
    --v5;
  }
  while ( v5 );
  return result;
}
