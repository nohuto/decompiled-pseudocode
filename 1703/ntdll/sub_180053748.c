/*
 * XREFs of sub_180053748 @ 0x180053748
 * Callers:
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 * Callees:
 *     sub_180050924 @ 0x180050924 (sub_180050924.c)
 *     sub_180104F6C @ 0x180104F6C (sub_180104F6C.c)
 */

__int64 __fastcall sub_180053748(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 480);
  if ( (_QWORD *)*v3 != v3 || (result = a1 + 464, *(_QWORD *)result != result) )
  {
    result = *(unsigned int *)(a2 + 4);
    if ( (unsigned int)result < a3 && (unsigned int)result >= 0x180 )
    {
      *(_DWORD *)(a2 + 48) = result;
      result = a1 + 464;
      if ( *(_QWORD *)result != result )
        result = sub_180050924(a1, a2, a3);
      if ( (_QWORD *)*v3 != v3 )
        return sub_180104F6C(a1, a2, a3);
    }
  }
  return result;
}
