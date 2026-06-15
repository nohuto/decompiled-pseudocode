/*
 * XREFs of ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x18007C978
 * Callers:
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x18007CC6C (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@0@Z @ 0x18007CB9C (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2_ea_18007CB9C.c)
 */

CResourcePriorityTracker *__fastcall CResourcePriorityTracker::`scalar deleting destructor'(
        CResourcePriorityTracker *this)
{
  _QWORD **v1; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD **)((char *)this + 40);
  std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
    (char *)this + 40,
    &v4,
    **((_QWORD **)this + 5),
    *((_QWORD *)this + 5));
  std::_Deallocate(*v1, 1uLL, 0x28uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
