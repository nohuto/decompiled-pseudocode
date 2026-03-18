/*
 * XREFs of ??$insert@U?$pair@PEAVCResource@@PEBG@std@@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@$$QEAU?$pair@PEAVCResource@@PEBG@1@@Z @ 0x18015691C
 * Callers:
 *     ??A?$map@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@@std@@QEAAAEAPEBGAEBQEAVCResource@@@Z @ 0x180156B14 (--A-$map@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$pair@QEAVCResource@@PEB.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@AEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x18015666C (--$_Insert_hint@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PEBG.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::insert<std::pair<CResource *,unsigned short const *>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  _QWORD *v8; // r8
  unsigned __int64 *v9; // r9
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v8 = operator new(0x30uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v8 = *a1;
  if ( v8 != (_QWORD *)-8LL )
    v8[1] = *a1;
  if ( v8 != (_QWORD *)-16LL )
    v8[2] = *a1;
  *((_WORD *)v8 + 12) = 0;
  v9 = v8 + 4;
  if ( v8 != (_QWORD *)-32LL )
  {
    *v9 = *a4;
    v8[5] = a4[1];
  }
  std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_hint<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
    a1,
    a2,
    a3,
    v9,
    v8);
  return a2;
}
