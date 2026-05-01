/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA_KAEBQEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180160258
 * Callers:
 *     ?OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18015CF30 (-OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x18016013C (-erase@-$_Tree@V-$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@Comp_ea_18016013C.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
        __int64 ***a1,
        unsigned __int64 *a2)
{
  __int64 **v2; // r8
  __int64 **v4; // r9
  __int64 v5; // r11
  __int64 *v6; // rax
  unsigned __int64 v7; // r10
  __int64 **v8; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 *i; // rcx
  __int64 *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = (__int64)(*a1 + 1);
  v6 = *(__int64 **)v5;
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    v7 = *a2;
    do
    {
      if ( v6[4] >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < v6[4] )
          v4 = (__int64 **)v6;
        v2 = (__int64 **)v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  v8 = v4;
  if ( *((_BYTE *)v4 + 25) )
    v8 = *a1 + 1;
  v9 = *v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *a2 >= v9[4] )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v4 = (__int64 **)v9;
      v9 = (__int64 *)*v9;
    }
  }
  v10 = v2;
  v11 = 0LL;
  while ( v10 != v4 )
  {
    ++v11;
    if ( !*((_BYTE *)v10 + 25) )
    {
      v12 = v10[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 **)i[2]; i = (__int64 *)i[1] )
          v10 = (__int64 **)i;
        v10 = (__int64 **)i;
      }
      else
      {
        do
        {
          v10 = (__int64 **)v12;
          v12 = (__int64 *)*v12;
        }
        while ( !*((_BYTE *)v12 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v15,
    (__int64 *)v2,
    (__int64 *)v4);
  return v11;
}
