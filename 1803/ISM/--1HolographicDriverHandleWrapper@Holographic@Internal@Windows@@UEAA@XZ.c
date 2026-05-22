/*
 * XREFs of ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800C03BC
 * Callers:
 *     ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C0EC0 (--_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800C6F14 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$7 @ 0x1800E9FD8 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_1800E9FD8.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@QEAA@XZ @ 0x180009FA4 (--1-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@PEAUISystemCont.c)
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800BFFD0 (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  __int64 v2; // rcx
  char *v3; // rcx

  *(_QWORD *)this = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::Close((RTL_SRWLOCK *)this);
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
    CM_Unregister_Notification(v2);
  v3 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>((unsigned __int64 *)this + 11);
  std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>((unsigned __int64 *)this + 8);
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
