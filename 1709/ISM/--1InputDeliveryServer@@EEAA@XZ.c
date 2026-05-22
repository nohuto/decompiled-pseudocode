/*
 * XREFs of ??1InputDeliveryServer@@EEAA@XZ @ 0x18007E3F4
 * Callers:
 *     ??_GInputDeliveryServer@@EEAAPEAXI@Z @ 0x18007E620 (--_GInputDeliveryServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ @ 0x18000B234 (--1-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18007FB98 (--1-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputThread@@@WRL@Microsoft@@V-$_Uhash_compare@IU-$hash@I.c)
 *     ??1?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18007FE58 (--1-$_Hash@V-$_Umap_traits@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@V.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall InputDeliveryServer::~InputDeliveryServer(InputDeliveryServer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  *(_QWORD *)this = &InputDeliveryServer::`vftable';
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputQueueHost'};
  *((_QWORD *)this + 2) = &InputDeliveryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner,IRemoteInputDelivery,IInputFocusListener>'};
  *((_QWORD *)this + 3) = &InputDeliveryServer::`vftable'{for `IRemoteInputDelivery'};
  *((_QWORD *)this + 4) = &InputDeliveryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputFocusListener>'};
  v2 = *((_QWORD *)this + 49);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v3 = *((_QWORD *)this + 49);
    if ( v3 )
    {
      *((_QWORD *)this + 49) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 75);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::~_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>((char *)this + 528);
  std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::~_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>((char *)this + 464);
  std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::~_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>((char *)this + 400);
  v6 = *((_QWORD *)this + 49);
  if ( v6 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
    (__int64 *)this + 32,
    v5);
  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
    (__int64 *)this + 16,
    v7);
  v8 = *((_QWORD *)this + 15);
  if ( v8 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 14);
  if ( v9 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 12);
  if ( v11 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 11);
  if ( v12 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 7);
  if ( v14 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 6);
  if ( v15 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *((_DWORD *)this + 11) = -1073741823;
}
