/*
 * XREFs of ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180156BC0
 * Callers:
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180084C90 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800A9760 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@@Z @ 0x180157FC8 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$a_ea_180157FC8.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1801582E0 (-find@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$pa.c)
 */

void __fastcall CAnimationLoggingManager::FreeCommentForResource(CAnimationLoggingManager *this, struct CResource *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct CResource *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (_QWORD *)((char *)this + 88);
  std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::find(
    (char *)this + 88,
    &v5,
    &v6);
  v4 = v5;
  if ( v5 != *v2 )
  {
    WPF::ProcessHeapImpl::Free(*(void **)(v5 + 40));
    std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::erase(
      v2,
      &v6,
      v4);
  }
  *((_DWORD *)a2 + 8) &= ~0x10u;
}
