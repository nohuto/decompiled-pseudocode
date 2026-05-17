/*
 * XREFs of sub_180008C50 @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 */

__int64 sub_180008C50()
{
  __int64 v0; // rax
  unsigned int v1; // ebx

  v0 = sub_18000A268(0LL, 0LL, 0LL);
  *(_QWORD *)&qword_18015BFE0 = v0;
  if ( !v0 )
    return 0;
  v1 = 1;
  sub_18000D844(v0, 0LL, 1LL);
  if ( !*(_QWORD *)&qword_18015BFE0 )
    return 0;
  return v1;
}
