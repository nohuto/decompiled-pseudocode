/*
 * XREFs of sub_180053748 @ 0x180053748
 * Callers:
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 * Callees:
 *     sub_180050924 @ 0x180050924 (sub_180050924.c)
 *     sub_180104F6C @ 0x180104F6C (sub_180104F6C.c)
 */

int __fastcall sub_180053748(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v7; // rax

  v3 = (_QWORD *)(a1 + 480);
  if ( (_QWORD *)*v3 != v3 || (v7 = (_QWORD *)(a1 + 464), (_QWORD *)*v7 != v7) )
  {
    LODWORD(v7) = *(_DWORD *)(a2 + 4);
    if ( (unsigned int)v7 < a3 && (unsigned int)v7 >= 0x180 )
    {
      *(_DWORD *)(a2 + 48) = (_DWORD)v7;
      v7 = (_QWORD *)(a1 + 464);
      if ( (_QWORD *)*v7 != v7 )
        LODWORD(v7) = sub_180050924(a1, a2, a3);
      if ( (_QWORD *)*v3 != v3 )
        LODWORD(v7) = sub_180104F6C(a1, a2, a3);
    }
  }
  return (int)v7;
}
