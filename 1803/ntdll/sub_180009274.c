/*
 * XREFs of sub_180009274 @ 0x180009274
 * Callers:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 * Callees:
 *     sub_1801079B0 @ 0x1801079B0 (sub_1801079B0.c)
 *     sub_180107B08 @ 0x180107B08 (sub_180107B08.c)
 */

_QWORD *__fastcall sub_180009274(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *result; // rax

  v3 = (_QWORD *)(a1 + 480);
  v5 = *(_QWORD **)(a1 + 480);
  if ( v5 != v3 || (result = (_QWORD *)(a1 + 464), (_QWORD *)*result != result) )
  {
    if ( *(_DWORD *)(a2 + 48) < a3 && *(_DWORD *)(a2 + 48) >= 0x180u )
    {
      result = (_QWORD *)(a1 + 464);
      if ( (_QWORD *)*result != result )
      {
        result = (_QWORD *)sub_180107B08(a1);
        v5 = (_QWORD *)*v3;
      }
      if ( v5 != v3 )
        return (_QWORD *)sub_1801079B0(a1, a2, a3);
    }
  }
  return result;
}
