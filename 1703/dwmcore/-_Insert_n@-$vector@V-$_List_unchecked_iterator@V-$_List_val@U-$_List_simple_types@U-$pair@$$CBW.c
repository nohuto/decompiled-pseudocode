/*
 * XREFs of ?_Insert_n@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@std@@@std@@@2@_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@Z @ 0x1800BB31C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BB0E0 (-_Init@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>>>::_Insert_n(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v6; // r15
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  char *v16; // r8
  unsigned __int64 *v17; // rdx
  unsigned __int64 j; // rbx
  char *v19; // rdx
  unsigned __int64 v20; // rcx
  _QWORD *result; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  _QWORD *v26; // r14
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 *i; // rcx
  _QWORD *v30; // r9
  _QWORD *v31; // r8
  __int64 v32; // r10
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rcx
  unsigned __int64 v36; // rdx
  signed __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rbx
  char *v41; // r8
  _QWORD *v42; // r11
  unsigned __int64 v43; // r10
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (__int64)&a3[-*(_QWORD *)a1] >> 3;
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( (__int64)(*(_QWORD *)(a1 + 16) - v10) >> 3 < a4 )
    {
      v22 = (__int64)(v10 - *(_QWORD *)a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - v22 < a4 )
      {
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
        __debugbreak();
      }
      v23 = v22 + a4;
      v24 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
      v25 = 0LL;
      v26 = 0LL;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v24 >> 1) >= v24 )
        v25 = v24 + (v24 >> 1);
      if ( v25 >= v23 )
        v23 = v25;
      if ( v23 )
      {
        if ( v23 > 0x1FFFFFFFFFFFFFFFLL || (v26 = operator new(8 * v23)) == 0LL )
        {
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
          __debugbreak();
        }
      }
      v27 = a4;
      v28 = (__int64)&a3[-*(_QWORD *)a1] >> 3;
      for ( i = &v26[v28]; v27; --v27 )
      {
        if ( i )
          *i = *a5;
        ++i;
      }
      v30 = *(_QWORD **)a1;
      v31 = v26;
      v32 = 0LL;
      v33 = (unsigned __int64)&a3[-*(_QWORD *)a1 + 7] >> 3;
      if ( *(_QWORD *)a1 > (unsigned __int64)a3 )
        v33 = 0LL;
      if ( v33 )
      {
        do
        {
          if ( v31 )
            *v31 = *v30;
          ++v31;
          ++v30;
          ++v32;
        }
        while ( v32 != v33 );
      }
      v34 = 0LL;
      v35 = (char *)&v26[v28 + a4];
      v36 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)a3 + 7LL) >> 3;
      if ( (unsigned __int64)a3 > *(_QWORD *)(a1 + 8) )
        v36 = 0LL;
      if ( v36 )
      {
        v37 = a3 - v35;
        do
        {
          if ( v35 )
            *(_QWORD *)v35 = *(_QWORD *)&v35[v37];
          v35 += 8;
          ++v34;
        }
        while ( v34 != v36 );
      }
      v38 = ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) + a4;
      if ( *(_QWORD *)a1 )
        WPF::ProcessHeapImpl::Free(*(void **)a1);
      *(_QWORD *)a1 = v26;
      *(_QWORD *)(a1 + 16) = &v26[v23];
      *(_QWORD *)(a1 + 8) = &v26[v38];
    }
    else
    {
      v11 = *(_QWORD **)(a1 + 8);
      v12 = *a5;
      if ( (__int64)(v10 - (_QWORD)a3) >> 3 >= a4 )
      {
        v39 = 8 * a4;
        v40 = 0LL;
        v41 = (char *)(v10 - v39);
        v42 = (_QWORD *)(v10 - v39);
        v43 = (unsigned __int64)(v39 + 7) >> 3;
        if ( v10 - v39 > v10 )
          v43 = 0LL;
        if ( v43 )
        {
          do
          {
            if ( v11 )
              *v11 = *v42;
            ++v11;
            ++v42;
            ++v40;
          }
          while ( v40 != v43 );
        }
        for ( *(_QWORD *)(a1 + 8) = v11; v41 != a3; *(_QWORD *)&v41[v39] = *(_QWORD *)v41 )
          v41 -= 8;
        v19 = &a3[v39];
      }
      else
      {
        v13 = 8 * a4;
        v14 = (v10 - (unsigned __int64)a3 + 7) >> 3;
        v15 = 0LL;
        if ( (unsigned __int64)a3 > v10 )
          v14 = 0LL;
        v16 = &a3[v13];
        if ( v14 )
        {
          do
          {
            if ( v16 )
              *(_QWORD *)v16 = *(_QWORD *)&v16[-8 * a4];
            v16 += 8;
            ++v15;
          }
          while ( v15 != v14 );
        }
        v17 = *(unsigned __int64 **)(a1 + 8);
        for ( j = a4 - (((char *)v17 - a3) >> 3); j; --j )
        {
          if ( v17 )
            *v17 = v12;
          ++v17;
        }
        *(_QWORD *)(a1 + 8) += v13;
        v19 = (char *)(*(_QWORD *)(a1 + 8) - v13);
      }
      v20 = (unsigned __int64)(v19 - a3 + 7) >> 3;
      if ( a3 > v19 )
        v20 = 0LL;
      if ( v20 )
        memset64(a3, v12, v20);
    }
  }
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v6;
  return result;
}
