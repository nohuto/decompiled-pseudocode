/*
 * XREFs of ?OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18015CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015D4C4 (-GetSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem.c)
 *     ?CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015D5A4 (-CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchI.c)
 *     ?ShouldIncludeView@AppViewSwitchItemDataSource@@AEAA_NPEAUIApplicationView@@@Z @ 0x18015DA10 (-ShouldIncludeView@AppViewSwitchItemDataSource@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA_KAEBQEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180160258 (-erase@-$_Tree@V-$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@Comp_ea_180160258.c)
 *     ?RaiseCollectionChangedEvent@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXW4SwitchItemCollectionChangedEventType@23456@PEAUISwitchItem@23456@@Z @ 0x180160D5C (-RaiseCollectionChangedEvent@SwitchItemDataSourceBase@Common@Multitasking@Experiences@Composable.c)
 *     ?InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXPEAUISwitchItem@23456@@Z @ 0x180160E8C (-InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewSwitchItemDataSource::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  AppViewSwitchItemDataSource *v6; // rcx
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v13; // rcx
  AppViewSwitchItemDataSource *v14; // rsi
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  _QWORD *Ptr; // rax
  __int64 *v19; // rcx
  _QWORD *v20; // rdx
  __int64 *v21; // rcx
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v22; // rcx
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v24; // [rsp+20h] [rbp-20h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v27; // [rsp+60h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  wil::srwlock::lock_exclusive(a1 + 27, SRWLock);
  v7 = 0LL;
  v27 = 0LL;
  switch ( a3 )
  {
    case 0:
      goto LABEL_46;
    case 1:
      goto LABEL_35;
    case 5:
      if ( !AppViewSwitchItemDataSource::ShouldIncludeView(v6, a2) )
      {
        if ( (int)AppViewSwitchItemDataSource::GetSwitchItemForView((AppViewSwitchItemDataSource *)&a1[-9], a2, &v27) >= 0 )
        {
          v7 = v27;
          v24 = v27;
          Ptr = a1[-7].Ptr;
          v19 = (__int64 *)Ptr[1];
          v20 = Ptr;
          while ( !*((_BYTE *)v19 + 25) )
          {
            if ( v19[4] >= (unsigned __int64)v27 )
            {
              v20 = v19;
              v19 = (__int64 *)*v19;
            }
            else
            {
              v19 = (__int64 *)v19[2];
            }
          }
          goto LABEL_41;
        }
LABEL_53:
        v7 = v27;
        goto LABEL_54;
      }
      v14 = (AppViewSwitchItemDataSource *)&a1[-9];
      if ( (int)AppViewSwitchItemDataSource::GetSwitchItemForView(v14, a2, &v27) >= 0 )
        goto LABEL_53;
      v15 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = AppViewSwitchItemDataSource::CreateSwitchItemForView(v14, a2, &v27);
      v9 = v16;
      if ( v16 < 0 )
      {
        v17 = 113LL;
LABEL_52:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
          (const char *)(unsigned int)v16);
        v7 = v27;
        goto LABEL_55;
      }
LABEL_27:
      v7 = v27;
      WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::InternalAddSwitchItem(
        v14,
        v27);
      goto LABEL_54;
  }
  if ( a3 != 7 && a3 != 9 )
  {
    if ( a3 != 10 )
    {
      if ( a3 != 11 )
      {
        if ( a3 == 14 )
        {
          if ( (int)AppViewSwitchItemDataSource::GetSwitchItemForView((AppViewSwitchItemDataSource *)&a1[-9], a2, &v27) >= 0 )
          {
            v24 = 0LL;
            v7 = v27;
            v8 = (**(__int64 (__fastcall ***)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *, GUID *, struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem **))v27)(
                   v27,
                   &GUID_8b30d1ac_11fa_4300_aa9b_ae77c6bbc345,
                   &v24);
            v9 = v8;
            if ( v8 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x7F,
                (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
                (const char *)(unsigned int)v8);
              goto LABEL_12;
            }
            (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v24 + 40LL))(v24);
            goto LABEL_19;
          }
          goto LABEL_53;
        }
LABEL_54:
        v9 = 0;
        goto LABEL_55;
      }
LABEL_35:
      if ( (int)AppViewSwitchItemDataSource::GetSwitchItemForView((AppViewSwitchItemDataSource *)&a1[-9], a2, &v27) >= 0 )
      {
        v7 = v27;
        v24 = v27;
        Ptr = a1[-7].Ptr;
        v21 = (__int64 *)Ptr[1];
        v20 = Ptr;
        while ( !*((_BYTE *)v21 + 25) )
        {
          if ( v21[4] >= (unsigned __int64)v27 )
          {
            v20 = v21;
            v21 = (__int64 *)*v21;
          }
          else
          {
            v21 = (__int64 *)v21[2];
          }
        }
LABEL_41:
        if ( v20 == Ptr || (unsigned __int64)v7 < v20[4] )
          v20 = Ptr;
        if ( v20 != Ptr )
        {
          std::_Tree<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
            &a1[-7],
            &v24);
          WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::RaiseCollectionChangedEvent(
            &a1[-9],
            1LL,
            v7);
        }
        goto LABEL_54;
      }
      goto LABEL_53;
    }
LABEL_46:
    if ( !AppViewSwitchItemDataSource::ShouldIncludeView(v6, a2) )
      goto LABEL_54;
    v14 = (AppViewSwitchItemDataSource *)&a1[-9];
    if ( (int)AppViewSwitchItemDataSource::GetSwitchItemForView(v14, a2, &v27) >= 0 )
      goto LABEL_53;
    v22 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v16 = AppViewSwitchItemDataSource::CreateSwitchItemForView(v14, a2, &v27);
    v9 = v16;
    if ( v16 < 0 )
    {
      v17 = 95LL;
      goto LABEL_52;
    }
    goto LABEL_27;
  }
  if ( (int)AppViewSwitchItemDataSource::GetSwitchItemForView((AppViewSwitchItemDataSource *)&a1[-9], a2, &v27) < 0 )
    goto LABEL_53;
  v24 = 0LL;
  v7 = v27;
  v11 = (**(__int64 (__fastcall ***)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *, GUID *, struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem **))v27)(
          v27,
          &GUID_8b30d1ac_11fa_4300_aa9b_ae77c6bbc345,
          &v24);
  v9 = v11;
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3 == 7;
    (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *, __int64))(*(_QWORD *)v24 + 32LL))(
      v24,
      v12);
LABEL_19:
    v13 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_54;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x56,
    (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
    (const char *)(unsigned int)v11);
LABEL_12:
  v10 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_55:
  if ( v7 )
    (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return v9;
}
