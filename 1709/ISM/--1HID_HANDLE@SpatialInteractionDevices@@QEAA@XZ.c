/*
 * XREFs of ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x18007CA44
 * Callers:
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x18007C9FC (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 *     ??1SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ @ 0x1800C422C (--1SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::SpatialInteractionController_::_1_::dtor$1 @ 0x1800D21D8 (_SpatialInteractionDevices--SpatialInteractionController--SpatialInteractionControl_ea_1800D21D8.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::_SpatialInteractionController_::_1_::dtor$0 @ 0x1800D2214 (_SpatialInteractionDevices--SpatialInteractionController--_SpatialInteractionController_--_1_--d.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x18007D094 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionD.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(SpatialInteractionDevices::HID_HANDLE *this)
{
  void *v2; // rcx
  char *v3; // r14
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  signed int LastError; // eax
  unsigned __int64 v14; // rcx

  v2 = (void *)*((_QWORD *)this + 39);
  if ( v2 )
    operator delete(v2);
  v3 = (char *)this + 288;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Erase(
    (char *)this + 288,
    *(_QWORD *)(*((_QWORD *)this + 36) + 8LL));
  *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)v3;
  **(_QWORD **)v3 = *(_QWORD *)v3;
  *(_QWORD *)(*(_QWORD *)v3 + 16LL) = *(_QWORD *)v3;
  *((_QWORD *)this + 37) = 0LL;
  operator delete(*((void **)this + 36));
  v4 = (void *)*((_QWORD *)this + 33);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 32);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 31);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 29);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 27);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_QWORD *)this + 25);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 23);
  if ( v10 )
    operator delete(v10);
  v11 = (void *)*((_QWORD *)this + 21);
  if ( v11 )
    operator delete(v11);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this + 2);
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v12 = (void *)*((_QWORD *)this + 1);
  if ( v12 != (void *)-1LL )
  {
    if ( !CloseHandle(v12) )
    {
      LastError = GetLastError();
      v14 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v14 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v14);
    }
    *((_QWORD *)this + 1) = -1LL;
  }
}
