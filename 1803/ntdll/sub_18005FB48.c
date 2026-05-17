/*
 * XREFs of sub_18005FB48 @ 0x18005FB48
 * Callers:
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 * Callees:
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 */

void __fastcall sub_18005FB48(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v2 = (_QWORD *)(a1 + 32);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
      __fastfail(3u);
    v2[1] = v4;
    *v4 = v2;
    sub_180062960(a1, v3, 1LL);
  }
}
