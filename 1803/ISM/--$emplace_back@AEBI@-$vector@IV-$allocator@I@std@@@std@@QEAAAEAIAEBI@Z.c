/*
 * XREFs of ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEBI@Z @ 0x18002563C
 * Callers:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002535C (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x18002C710 (-GetAllAncestors@ViewHierarchy@@UEBA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1800257E4 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::emplace_back<unsigned int const &>(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // r14
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  size_t v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 2;
    if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = ((__int64)v4 - *(_QWORD *)a1) >> 2;
    v8 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = 0LL;
    if ( v9 )
    {
      if ( v9 > 0x3FFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v11 = 4 * v9;
      if ( 4 * v9 < 0x1000 )
      {
        v10 = operator new(v11);
      }
      else
      {
        if ( v11 + 39 < v11 )
          std::_Default_allocate_traits<1>::_Fail();
        v12 = operator new(v11 + 39);
        v10 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v10 - 1) = v12;
      }
    }
    try
    {
      *((_DWORD *)v10 + v6) = *a2;
      memmove(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(v13, v10, v9);
      throw;
    }
    std::vector<unsigned int>::_Change_array(a1, v10, v6 + 1, v9, -2LL);
  }
  else
  {
    *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 4LL;
  }
  return *(_QWORD *)(a1 + 8) - 4LL;
}
