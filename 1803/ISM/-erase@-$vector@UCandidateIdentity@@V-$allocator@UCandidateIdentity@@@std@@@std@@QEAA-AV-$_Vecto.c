/*
 * XREFs of ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x180069568
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<CandidateIdentity>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  _OWORD *v8; // r14
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 40;
  if ( a3 + 40 != v3 )
  {
    do
    {
      v8 = (_OWORD *)(v4 - 40);
      std::wstring::_Tidy_deallocate((unsigned __int64 *)(v4 - 40));
      *v8 = *(_OWORD *)v4;
      v8[1] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 7LL;
      *(_WORD *)v4 = 0;
      *(_DWORD *)(v4 - 8) = *(_DWORD *)(v4 + 32);
      v4 += 40LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  std::wstring::_Tidy_deallocate((unsigned __int64 *)(v3 - 40));
  *(_QWORD *)(a1 + 8) -= 40LL;
  result = a2;
  *a2 = a3;
  return result;
}
