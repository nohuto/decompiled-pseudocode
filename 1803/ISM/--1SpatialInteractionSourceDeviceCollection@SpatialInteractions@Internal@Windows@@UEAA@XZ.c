/*
 * XREFs of ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800AAD44
 * Callers:
 *     ??_GSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800AAD10 (--_GSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180017550 (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@Z @ 0x1800A20F8 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@IEAAXXZ @ 0x1800AA0FC (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::~SpatialInteractionSourceDeviceCollection(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  struct _TP_WORK *v2; // rbx
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 71);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 71), 0);
    CloseThreadpoolWork(v2);
  }
  std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::_Tidy((_QWORD *)this + 66);
  operator delete(*((void **)this + 66));
  *((_QWORD *)this + 66) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 12);
  v3 = (char *)this + 464;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Erase(
    (__int64)this + 464,
    *(_QWORD **)(*((_QWORD *)this + 58) + 8LL));
  *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)v3;
  **(_QWORD **)v3 = *(_QWORD *)v3;
  *(_QWORD *)(*(_QWORD *)v3 + 16LL) = *(_QWORD *)v3;
  *((_QWORD *)this + 59) = 0LL;
  operator delete(*((void **)this + 58));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  v4 = *((_QWORD *)this + 52);
  if ( v4 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 51);
  if ( v5 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 50);
  if ( v6 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 49);
  if ( v7 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 48);
  if ( v8 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
    (__int64)this + 320,
    v9);
  v10 = *((_QWORD *)this + 39);
  if ( v10 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v11 )
  {
    *((_QWORD *)this + 38) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v11);
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 37);
  if ( v12 )
  {
    *((_QWORD *)this + 37) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v12);
  }
  WindowsDeleteString(*((HSTRING *)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  v13 = *((_QWORD *)this + 16);
  if ( v13 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 15);
  if ( v14 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v15 = *((_QWORD *)this + 9);
  if ( v15 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)(2 * v15));
  v16 = *((_QWORD *)this + 7);
  if ( v16 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
