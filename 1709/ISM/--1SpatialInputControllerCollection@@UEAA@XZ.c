/*
 * XREFs of ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800927B4
 * Callers:
 *     ??_ESpatialInputControllerCollection@@UEAAPEAXI@Z @ 0x180092770 (--_ESpatialInputControllerCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E298 (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x18007D094 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionD.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAXXZ @ 0x180097AF4 (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-$al.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInputControllerCollection::~SpatialInputControllerCollection(
        SpatialInputControllerCollection *this)
{
  struct _TP_WORK *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // r14
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 413);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 413), 0);
    CloseThreadpoolWork(v2);
  }
  std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::_Tidy((char *)this + 3264);
  operator delete(*((void **)this + 408));
  *((_QWORD *)this + 408) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 3216));
  v3 = *((_QWORD *)this + 401);
  if ( v3 )
  {
    *((_QWORD *)this + 401) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 400);
  if ( v4 )
  {
    *((_QWORD *)this + 400) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 399);
  if ( v5 )
  {
    *((_QWORD *)this + 399) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 398);
  if ( v6 )
  {
    *((_QWORD *)this + 398) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 397);
  if ( v7 )
  {
    *((_QWORD *)this + 397) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>((unsigned __int64 *)this + 389);
  v8 = *((_QWORD *)this + 388);
  if ( v8 )
  {
    *((_QWORD *)this + 388) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 387);
  if ( v9 )
  {
    *((_QWORD *)this + 387) = 0LL;
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 386);
  if ( v10 )
  {
    *((_QWORD *)this + 386) = 0LL;
    if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 32LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  WindowsDeleteString(*((HSTRING *)this + 366));
  *((_QWORD *)this + 366) = 0LL;
  v11 = *((_QWORD *)this + 365);
  if ( v11 )
  {
    *((_QWORD *)this + 365) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 364);
  if ( v12 )
  {
    *((_QWORD *)this + 364) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2872));
  v13 = (char *)this + 2856;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Erase(
    (__int64)this + 2856,
    *(_QWORD **)(*((_QWORD *)this + 357) + 8LL));
  *(_QWORD *)(*(_QWORD *)v13 + 8LL) = *(_QWORD *)v13;
  **(_QWORD **)v13 = *(_QWORD *)v13;
  *(_QWORD *)(*(_QWORD *)v13 + 16LL) = *(_QWORD *)v13;
  *((_QWORD *)this + 358) = 0LL;
  operator delete(*((void **)this + 357));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  v14 = *((_QWORD *)this + 351);
  if ( v14 )
  {
    *((_QWORD *)this + 351) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (volatile signed __int32 *)*((_QWORD *)this + 350);
  if ( v15 )
  {
    *((_QWORD *)this + 350) = 0LL;
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 32LL))(v15, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 69);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
