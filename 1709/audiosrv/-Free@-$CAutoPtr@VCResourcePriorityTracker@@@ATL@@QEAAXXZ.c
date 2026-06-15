/*
 * XREFs of ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x18000D4A8
 * Callers:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000DD90 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000E3C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x18005C568 (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@Z @ 0x18005C510 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CAutoPtr<CResourcePriorityTracker>::Free(__int64 *a1)
{
  __int64 v2; // rbp
  void **v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *i; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (void **)(v2 + 40);
    v4 = *(_QWORD **)(*(_QWORD *)(v2 + 40) + 8LL);
    for ( i = v4; !*((_BYTE *)i + 25); v4 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Erase(
        v2 + 40,
        i[2]);
      i = (_QWORD *)*i;
      std::_Deallocate(v4, 1uLL, 0x28uLL);
    }
    *((_QWORD *)*v3 + 1) = *v3;
    *(_QWORD *)*v3 = *v3;
    *((_QWORD *)*v3 + 2) = *v3;
    *(_QWORD *)(v2 + 48) = 0LL;
    std::_Deallocate(*v3, 1uLL, 0x28uLL);
    DeleteCriticalSection((LPCRITICAL_SECTION)v2);
    operator delete((void *)v2, (const struct std::nothrow_t *)0x40);
  }
  *a1 = 0LL;
}
