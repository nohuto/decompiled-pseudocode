/*
 * XREFs of ?CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015D5A4
 * Callers:
 *     ?OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18015CF30 (-OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_.c)
 *     ?InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ @ 0x18015D2DC (-InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18015E494 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@1@@Z @ 0x18015E4EC (--$_Insert_hint@AEAU-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UISwitchIt.c)
 *     ?AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1801641E4 (-AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewSwitchItemDataSource::CreateSwitchItemForView(
        AppViewSwitchItemDataSource *this,
        struct IApplicationView *a2,
        struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem **a3,
        const struct _GUID *a4)
{
  char *v7; // r15
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rbx
  int v11; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  void *v14; // rcx
  struct IApplicationView *v16; // rcx
  struct IApplicationView *v17; // r14
  struct IApplicationView *v18; // rdx
  struct IApplicationView **v19; // rbx
  void *v20; // rax
  struct IApplicationView *v21; // rcx
  int v22; // eax
  struct IApplicationView *v23; // rcx
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rdx
  struct IApplicationView *v27; // rcx
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v28; // rdx
  void *v29; // rcx
  __int64 v30; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IApplicationView *v32; // [rsp+80h] [rbp+8h] BYREF
  void *v33; // [rsp+88h] [rbp+10h] BYREF
  struct IApplicationView *v34; // [rsp+90h] [rbp+18h] BYREF
  struct IApplicationView **v35; // [rsp+98h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (char *)this + 272;
  v8 = (__int64 *)*((_QWORD *)this + 34);
  v9 = (__int64 *)v8[1];
  v10 = v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( v9[4] >= (unsigned __int64)a2 )
    {
      v10 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( v10 == v8 || (unsigned __int64)a2 < v10[4] )
    v10 = (__int64 *)*((_QWORD *)this + 34);
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v10 != *(__int64 **)v7 )
  {
    v30 = v10[5];
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    *a3 = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *)v10[5];
    return 0LL;
  }
  v33 = 0LL;
  v11 = AppViewSwitchItem_CreateInstance(
          a2,
          *((struct IApplicationViewIconLoader **)this + 17),
          *((struct IThumbnailInteropDevice **)this + 18),
          a4,
          &v33);
  v13 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)(unsigned int)v11);
    v14 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v13;
  }
  try
  {
    v16 = a2;
    v32 = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      v16 = v32;
    }
    v17 = (struct IApplicationView *)v33;
    v18 = *(struct IApplicationView **)(*(_QWORD *)v7 + 8LL);
    v19 = *(struct IApplicationView ***)v7;
    while ( !*((_BYTE *)v18 + 25) )
    {
      if ( *((_QWORD *)v18 + 4) >= (unsigned __int64)v16 )
      {
        v19 = (struct IApplicationView **)v18;
        v18 = *(struct IApplicationView **)v18;
      }
      else
      {
        v18 = (struct IApplicationView *)*((_QWORD *)v18 + 2);
      }
    }
    if ( v19 == *(struct IApplicationView ***)v7 || v16 < v19[4] )
    {
      v35 = &v32;
      v20 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::ComPtr<IApplicationView> &&>,std::tuple<>>(
                      (char *)this + 272,
                      v18,
                      &v35);
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>>>,0>>::_Insert_hint<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>> &,std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>>,void *> *>(
        (_DWORD)this + 272,
        v20);
      v19 = v35;
      v16 = v32;
    }
    if ( v19[5] != v17 )
    {
      if ( v17 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v17 + 8LL))(v17);
      v21 = v19[5];
      v19[5] = v17;
      if ( v21 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v21 + 16LL))(v21);
      v16 = v32;
    }
    if ( v16 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  catch ( ... )
  {
    LODWORD(v32) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xB8,
                     (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
                     v12);
    v29 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return (unsigned int)v32;
  }
  v34 = 0LL;
  v22 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 16) + 72LL))(
          *((_QWORD *)this + 16),
          &v34);
  if ( v22 >= 0 )
  {
    v23 = v34;
    if ( !v34 || !a2 )
      goto LABEL_52;
    if ( v34 == a2 )
      goto LABEL_46;
    v35 = 0LL;
    v32 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, struct IApplicationView ***))v34)(
           v34,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v35) >= 0 )
    {
      v24 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, struct IApplicationView **))a2)(
              a2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v32);
      if ( v24 >= 0 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v32 + 16LL))(v32);
      (*((void (__fastcall **)(struct IApplicationView **))*v35 + 2))(v35);
      if ( v24 >= 0 && v35 == (struct IApplicationView **)v32 )
      {
LABEL_46:
        v32 = 0LL;
        v25 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IApplicationView **))v33)(
                v33,
                &GUID_8b30d1ac_11fa_4300_aa9b_ae77c6bbc345,
                &v32);
        if ( v25 >= 0 )
        {
          LOBYTE(v26) = 1;
          (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v32 + 32LL))(v32, v26);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBF,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
            (const char *)(unsigned int)v25);
        }
        v27 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)(unsigned int)v22);
  }
  v23 = v34;
LABEL_52:
  v28 = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *)v33;
  if ( v33 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 8LL))(v33);
    v28 = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *)v33;
    v23 = v34;
  }
  *a3 = v28;
  if ( v23 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v23 + 16LL))(v23);
    v28 = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *)v33;
  }
  if ( v28 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return 0LL;
}
