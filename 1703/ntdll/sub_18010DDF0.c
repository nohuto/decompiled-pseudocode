/*
 * XREFs of sub_18010DDF0 @ 0x18010DDF0
 * Callers:
 *     sub_180094C58 @ 0x180094C58 (sub_180094C58.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 * Callees:
 *     towlower @ 0x18009B8C0 (towlower.c)
 */

__int64 __fastcall sub_18010DDF0(__int64 a1, wint_t *a2)
{
  unsigned int v3; // edi
  wint_t *v4; // rbx
  __int64 v5; // r14
  wint_t v6; // cx
  wint_t v7; // ax

  if ( !a1 || !a2 )
    return 0LL;
  v3 = 0;
  v4 = a2;
  v5 = a1 - (_QWORD)a2;
  while ( 1 )
  {
    v6 = *(wint_t *)((char *)v4 + v5);
    if ( v6 != 92 )
      break;
    v7 = 47;
LABEL_8:
    *v4 = v7;
    ++v3;
    ++v4;
    if ( v3 >= 0x104 )
      return 1LL;
  }
  if ( v6 )
  {
    v7 = towlower(v6);
    goto LABEL_8;
  }
  a2[v3] = 0;
  return 1LL;
}
