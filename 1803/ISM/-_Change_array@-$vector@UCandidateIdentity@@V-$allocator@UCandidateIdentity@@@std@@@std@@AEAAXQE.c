/*
 * XREFs of ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x180069474
 * Callers:
 *     ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x180068D50 (--$emplace_back@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::vector<CandidateIdentity>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v4 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(unsigned __int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        std::wstring::_Tidy_deallocate(v4);
        v4 += 5;
      }
      while ( v4 != v9 );
      v4 = *(unsigned __int64 **)a1;
    }
    v10 = *(_QWORD *)(a1 + 16) - (_QWORD)v4;
    v11 = v10 / 40;
    if ( (unsigned __int64)(v10 / 40) <= 0x666666666666666LL )
    {
      if ( (unsigned __int64)(40 * v11) < 0x1000 )
      {
LABEL_11:
        operator delete(v4);
        goto LABEL_12;
      }
      if ( ((unsigned __int8)v4 & 0x1F) == 0 )
      {
        v12 = *(v4 - 1);
        if ( v12 < (unsigned __int64)v4 && (unsigned __int64)v4 - v12 - 8 <= 0x1F )
        {
          v4 = (unsigned __int64 *)*(v4 - 1);
          goto LABEL_11;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v10, v11);
    JUMPOUT(0x180069564LL);
  }
LABEL_12:
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
