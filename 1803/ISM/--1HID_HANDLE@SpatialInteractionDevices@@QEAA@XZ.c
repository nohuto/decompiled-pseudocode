/*
 * XREFs of ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A150C
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5E1C (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@Z @ 0x1800A20F8 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(SpatialInteractionDevices::HID_HANDLE *this)
{
  void *v2; // rcx
  char *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx

  v2 = (void *)*((_QWORD *)this + 34);
  if ( v2 )
    operator delete(v2);
  v3 = (char *)this + 248;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Erase(
    (char *)this + 248,
    *(_QWORD *)(*((_QWORD *)this + 31) + 8LL));
  *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)v3;
  **(_QWORD **)v3 = *(_QWORD *)v3;
  *(_QWORD *)(*(_QWORD *)v3 + 16LL) = *(_QWORD *)v3;
  *((_QWORD *)this + 32) = 0LL;
  operator delete(*((void **)this + 31));
  v4 = (void *)*((_QWORD *)this + 28);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 27);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 26);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 24);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 22);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_QWORD *)this + 20);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 18);
  if ( v10 )
    operator delete(v10);
  v11 = (void *)*((_QWORD *)this + 16);
  if ( v11 )
    operator delete(v11);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this + 1);
  v12 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
