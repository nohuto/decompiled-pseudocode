/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000A568
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002BDE0 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180079AC0 (--1-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800A4F50 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18002C630 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18007CB44 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbp
  void **v6; // r14
  _QWORD *v7; // rbx
  _QWORD *i; // rdi
  __int64 v9; // rdx

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v9 + 56));
  }
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((char *)this + 184);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    v6 = (void **)(v5 + 40);
    v7 = *(_QWORD **)(*(_QWORD *)(v5 + 40) + 8LL);
    for ( i = v7; !*((_BYTE *)i + 25); v7 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v5 + 40,
        i[2]);
      i = (_QWORD *)*i;
      std::_Deallocate(v7, 1uLL, 0x28uLL);
    }
    *((_QWORD *)*v6 + 1) = *v6;
    *(_QWORD *)*v6 = *v6;
    *((_QWORD *)*v6 + 2) = *v6;
    *(_QWORD *)(v5 + 48) = 0LL;
    std::_Deallocate(*v6, 1uLL, 0x28uLL);
    DeleteCriticalSection((LPCRITICAL_SECTION)v5);
    operator delete((void *)v5, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 8) = 0LL;
  operator delete(*((void **)this + 7), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 7) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
