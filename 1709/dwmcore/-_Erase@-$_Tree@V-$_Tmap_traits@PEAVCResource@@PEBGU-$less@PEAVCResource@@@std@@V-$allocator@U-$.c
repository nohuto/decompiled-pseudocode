/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180007870
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180007870 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@0@Z @ 0x180157F00 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$p.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180007870 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rdi
  _QWORD *v4; // rbx

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      WPF::ProcessHeapImpl::Free(v2);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
