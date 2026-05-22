/*
 * XREFs of ??$emplace_back@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAAEAUAttachedInputObjectEntry@InputSite@@$$QEAU23@@Z @ 0x18000C99C
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DE10 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DF90 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E110 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E290 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Change_array@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAXQEAUAttachedInputObjectEntry@InputSite@@_K1@Z @ 0x18000CB0C (-_Change_array@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEn.c)
 *     ??$construct@UAttachedInputObjectEntry@InputSite@@U12@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@$$QEAU34@@Z @ 0x18000CD28 (--$construct@UAttachedInputObjectEntry@InputSite@@U12@@-$_Default_allocator_traits@V-$allocator@.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000CE5C (--$_Uninitialized_move_al_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V-$allocator@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<InputSite::AttachedInputObjectEntry>::emplace_back<InputSite::AttachedInputObjectEntry>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rdi
  size_t v11; // rcx
  void *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) / 72;
    if ( v6 == 0x38E38E38E38E38ELL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = (v4 - *a1) / 72;
    v8 = v7 >> 1;
    if ( v7 <= 0x38E38E38E38E38ELL - (v7 >> 1) )
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
      if ( v9 > 0x38E38E38E38E38ELL )
        std::_Default_allocate_traits<1>::_Fail();
      v11 = 72 * v9;
      if ( 72 * v9 < 0x1000 )
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
      std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::construct<InputSite::AttachedInputObjectEntry,InputSite::AttachedInputObjectEntry>(
        9 * v6,
        &v10[9 * v6],
        a2);
      std::_Uninitialized_move_al_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *,std::allocator<InputSite::AttachedInputObjectEntry>>(
        *a1,
        a1[1],
        v10);
    }
    catch ( ... )
    {
      v14 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v10[9 * v6]);
      std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::destroy<InputSite::AttachedInputObjectEntry>(
        v15,
        v14);
      std::allocator<InputSite::AttachedInputObjectEntry>::deallocate(v16, v10, v9);
      throw;
    }
    std::vector<InputSite::AttachedInputObjectEntry>::_Change_array(a1, v10, v6 + 1, v9);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::construct<InputSite::AttachedInputObjectEntry,InputSite::AttachedInputObjectEntry>(
      v5,
      v5,
      a2);
    a1[1] += 72LL;
  }
  return a1[1] - 72LL;
}
