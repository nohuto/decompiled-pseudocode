/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800EB914
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___ @ 0x1801034B8 (wil--ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801599A4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180073818 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windo.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 *v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // [rsp+90h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v8 = v7 + 1;
    v9 = v4 - *a1;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    v12 = (__int64 *)std::_Allocate(v11, 8uLL);
    v13 = v12;
    v25 = v12;
    try
    {
      v14 = &v12[v7];
      if ( v14 )
      {
        v15 = *a2;
        *v14 = *a2;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v22 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v25[v7]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>::destroy<Microsoft::WRL::ComPtr<IUnknown>>(
        v23,
        v22);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v24,
        v25,
        v11);
      throw;
    }
    v16 = *a1;
    if ( !*a1 )
      goto LABEL_31;
    v17 = a1[1];
    while ( v16 != v17 )
    {
      v18 = *v16;
      if ( *v16 )
      {
        *v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      ++v16;
    }
    v19 = (unsigned __int64)*a1;
    v20 = a1[2] - *a1;
    if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v20 < 0x1000 )
      {
LABEL_29:
        operator delete((void *)v19);
LABEL_31:
        *a1 = v13;
        a1[1] = &v13[v8];
        a1[2] = &v13[v11];
        return;
      }
      if ( (v19 & 0x1F) == 0 )
      {
        v21 = *(_QWORD *)(v19 - 8);
        if ( v21 < v19 )
        {
          v19 = v19 - v21 - 8;
          if ( v19 <= 0x1F )
          {
            v19 = v21;
            goto LABEL_29;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v19);
    __debugbreak();
  }
  if ( v5 )
  {
    v6 = *a2;
    *v5 = *a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  ++a1[1];
}
