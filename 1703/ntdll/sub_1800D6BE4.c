/*
 * XREFs of sub_1800D6BE4 @ 0x1800D6BE4
 * Callers:
 *     sub_18005032C @ 0x18005032C (sub_18005032C.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D6BE4(_QWORD *a1, void *a2)
{
  void *v2; // r8
  __int64 v3; // rax
  __int64 result; // rax

  v2 = &unk_18011B604;
  LODWORD(v3) = 0;
  if ( a2 )
  {
    v2 = a2;
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)a2 + v3) );
  }
  result = (unsigned int)(2 * v3 + 2);
  *a1 = v2;
  a1[1] = (unsigned int)result;
  return result;
}
