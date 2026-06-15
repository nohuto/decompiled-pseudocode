/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800D4C90
 * Callers:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800D4F7C (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D4630 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800D4694 (--$_Insert_hint@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPL.c)
 */

__int64 __fastcall std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v3; // r9
  __int64 v4; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rax
  unsigned int v8; // ecx
  __int64 *v9; // r10
  __int64 v10; // rax
  unsigned int *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = a2;
  v6 = *a1;
  v7 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_12;
  a2 = *a3;
  do
  {
    v8 = *((_DWORD *)v7 + 7);
    v9 = v7;
    if ( v8 >= (unsigned int)a2 )
      v7 = (__int64 *)*v7;
    else
      v7 = (__int64 *)v7[2];
    if ( v8 >= (unsigned int)a2 )
      v6 = v9;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v3 || (unsigned int)a2 < *((_DWORD *)v6 + 7) )
  {
LABEL_12:
    v12 = a3;
    v10 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (__int64)a1,
            a2,
            &v12);
    std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_hint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
      a1,
      &v12,
      v6,
      (unsigned int *)(v10 + 28),
      (_QWORD *)v10);
    *(_QWORD *)v4 = v12;
    *(_BYTE *)(v4 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v4 = v6;
    *(_BYTE *)(v4 + 8) = 0;
  }
  return v4;
}
