/*
 * XREFs of ??$_Buynode@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@1@@Z @ 0x180098B0C
 * Callers:
 *     ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x180094304 (-AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionCo.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@XZ @ 0x180032D00 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpat.c)
 *     ??0?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x180079E40 (--0-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Buynode<unsigned long &,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  void *v10; // [rsp+40h] [rbp+8h]

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Buynode0(a1);
  v7 = v5;
  v10 = v5;
  *((_WORD *)v5 + 12) = 0;
  try
  {
    v8 = v5 + 4;
    if ( v8 )
    {
      *(_DWORD *)v8 = *a2;
      std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>(
        v8 + 1,
        a3);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v6,
      v10);
    throw;
  }
  return v7;
}
