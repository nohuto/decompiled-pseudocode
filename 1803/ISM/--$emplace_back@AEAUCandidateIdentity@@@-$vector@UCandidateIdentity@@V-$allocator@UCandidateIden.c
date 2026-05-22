/*
 * XREFs of ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x180068D50
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x180069474 (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800696F4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUCandidateIdentity@@PEAU1@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@PEAU1@00AEAV?$allocator@UCandidateIdentity@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180069928 (--$_Uninitialized_move_al_unchecked@PEAUCandidateIdentity@@PEAU1@V-$allocator@UCandidateIdentity.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::vector<CandidateIdentity>::emplace_back<CandidateIdentity &>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rbx
  size_t v12; // rcx
  void *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // [rsp+48h] [rbp-30h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) / 40;
    if ( v6 == 0x666666666666666LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *a1) / 40;
    v9 = v8 >> 1;
    if ( v8 <= 0x666666666666666LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = 0LL;
    if ( v10 )
    {
      if ( v10 > 0x666666666666666LL )
        std::_Default_allocate_traits<1>::_Fail();
      v12 = 40 * v10;
      if ( 40 * v10 < 0x1000 )
      {
        v11 = operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
          std::_Default_allocate_traits<1>::_Fail();
        v13 = operator new(v12 + 39);
        v11 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    try
    {
      v18 = (char *)&v11[5 * v6];
      std::wstring::wstring(v18, a2);
      *((_DWORD *)v18 + 8) = *(_DWORD *)(a2 + 32);
      std::_Uninitialized_move_al_unchecked<CandidateIdentity *,CandidateIdentity *,std::allocator<CandidateIdentity>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v15 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[5 * v6]);
      std::_Default_allocator_traits<std::allocator<CandidateIdentity>>::destroy<CandidateIdentity>(v16, v15);
      std::allocator<CandidateIdentity>::deallocate(v17, v11, v10);
      throw;
    }
    std::vector<CandidateIdentity>::_Change_array(a1, v11, v7, v10);
  }
  else
  {
    std::wstring::wstring(v5, a2);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a2 + 32);
    a1[1] += 40LL;
  }
  return a1[1] - 40LL;
}
