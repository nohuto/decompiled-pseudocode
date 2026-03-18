/*
 * XREFs of ?_Insert_n@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@std@@@2@_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x180161548
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801614B0 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>>>::_Insert_n(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v6; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  _QWORD *v15; // r14
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 *i; // rcx
  _QWORD *v19; // r9
  _QWORD *v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  char *v24; // rcx
  unsigned __int64 v25; // rdx
  signed __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  _QWORD *v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r11
  unsigned __int64 v31; // r9
  __int64 v32; // r10
  char *v33; // r8
  unsigned __int64 *v34; // rdx
  unsigned __int64 j; // rbx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  char *v39; // r8
  unsigned __int64 v40; // r10
  __int64 v41; // rbp
  _QWORD *v42; // r11
  char *v43; // rdx
  unsigned __int64 v44; // rbx
  _QWORD *result; // rax
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (__int64)&a3[-*(_QWORD *)a1] >> 3;
  if ( !a4 )
    goto LABEL_61;
  v10 = *(_QWORD *)(a1 + 8);
  if ( (__int64)(*(_QWORD *)(a1 + 16) - v10) >> 3 < a4 )
  {
    v11 = (__int64)(v10 - *(_QWORD *)a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - v11 < a4 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v12 = v11 + a4;
    v13 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    v14 = 0LL;
    v15 = 0LL;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v13 >> 1) >= v13 )
      v14 = v13 + (v13 >> 1);
    if ( v14 >= v12 )
      v12 = v14;
    if ( v12 )
    {
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL || (v15 = operator new(8 * v12)) == 0LL )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    v16 = a4;
    v17 = (__int64)&a3[-*(_QWORD *)a1] >> 3;
    for ( i = &v15[v17]; v16; --v16 )
    {
      if ( i )
        *i = *a5;
      ++i;
    }
    v19 = *(_QWORD **)a1;
    v20 = v15;
    v21 = 0LL;
    v22 = (unsigned __int64)&a3[-*(_QWORD *)a1 + 7] >> 3;
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 )
      v22 = 0LL;
    if ( v22 )
    {
      do
      {
        if ( v20 )
          *v20 = *v19;
        ++v20;
        ++v19;
        ++v21;
      }
      while ( v21 != v22 );
    }
    v23 = 0LL;
    v24 = (char *)&v15[v17 + a4];
    v25 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)a3 + 7LL) >> 3;
    if ( (unsigned __int64)a3 > *(_QWORD *)(a1 + 8) )
      v25 = 0LL;
    if ( v25 )
    {
      v26 = a3 - v24;
      do
      {
        if ( v24 )
          *(_QWORD *)v24 = *(_QWORD *)&v24[v26];
        v24 += 8;
        ++v23;
      }
      while ( v23 != v25 );
    }
    v27 = ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) + a4;
    if ( *(_QWORD *)a1 )
      WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 16) = &v15[v12];
    *(_QWORD *)(a1 + 8) = &v15[v27];
    goto LABEL_61;
  }
  v28 = *(_QWORD **)(a1 + 8);
  v29 = *a5;
  if ( (__int64)(v10 - (_QWORD)a3) >> 3 >= a4 )
  {
    v38 = 8 * a4;
    v39 = (char *)(v10 - v38);
    v40 = v38 >> 3;
    v41 = 0LL;
    v42 = (_QWORD *)(v10 - v38);
    if ( v10 - v38 > v10 )
      v40 = 0LL;
    if ( v40 )
    {
      do
      {
        if ( v28 )
          *v28 = *v42;
        ++v28;
        ++v42;
        ++v41;
      }
      while ( v41 != v40 );
    }
    for ( *(_QWORD *)(a1 + 8) = v28; v39 != a3; *(_QWORD *)&v39[v38] = *(_QWORD *)v39 )
      v39 -= 8;
    v43 = &a3[v38];
    v44 = v38 >> 3;
    if ( a3 > v43 )
      v44 = 0LL;
    if ( v44 )
    {
      v37 = v44;
LABEL_60:
      memset64(a3, v29, v37);
    }
  }
  else
  {
    v30 = 8 * a4;
    v31 = (v10 - (unsigned __int64)a3 + 7) >> 3;
    v32 = 0LL;
    if ( (unsigned __int64)a3 > v10 )
      v31 = 0LL;
    v33 = &a3[v30];
    if ( v31 )
    {
      do
      {
        if ( v33 )
          *(_QWORD *)v33 = *(_QWORD *)&v33[-8 * a4];
        v33 += 8;
        ++v32;
      }
      while ( v32 != v31 );
    }
    v34 = *(unsigned __int64 **)(a1 + 8);
    for ( j = a4 - (((char *)v34 - a3) >> 3); j; --j )
    {
      if ( v34 )
        *v34 = v29;
      ++v34;
    }
    v36 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v30 + v36;
    v37 = (v36 - (unsigned __int64)a3 + 7) >> 3;
    if ( (unsigned __int64)a3 > v36 )
      v37 = 0LL;
    if ( v37 )
      goto LABEL_60;
  }
LABEL_61:
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v6;
  return result;
}
