/*
 * XREFs of ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864
 * Callers:
 *     ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x180024FC0 (-_Reallocate_exactly@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180025214 (--$emplace_back@AEBV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x1800259D4 (--$emplace_back@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$allocator.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x180072E04 (--$emplace_back@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@@@WRL@M.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18008BC2C (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x18008C320 (--$emplace_back@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGP.c)
 *     ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18008EB84 (--0-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18008ECBC (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008F0E4 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18008F20C (--$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@V-$allo.c)
 *     ??$emplace_back@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18008F354 (--$emplace_back@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x1800C04C0 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x1800C05DC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C05DC.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800C0724 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C0724.c)
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@@Z @ 0x1800E5E2C (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$C.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800E6058 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$.c)
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800EB914 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 *     ??$emplace_back@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EBC30 (--$emplace_back@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneV.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@IEAAX_K@Z @ 0x1800EC1CC (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800ECE0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x1800F0130 (--$_Range_construct_or_tidy@PEBU-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocato.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180116230 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x180117074 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180128B80 (-_Reallocate_exactly@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ??$emplace_back@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18012A010 (--$emplace_back@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsof.c)
 *     ?_Growmap@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@IEAAX_K@Z @ 0x18014DC04 (-_Growmap@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 *     ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18016272C (--$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 *     ??$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18016338C (--$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-$Agil.c)
 *     ??$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAAXAEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180164EC0 (--$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-.c)
 *     ??$emplace_back@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019E9C0 (--$emplace_back@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$a.c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019ECF0 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall std::_Allocate(unsigned __int64 a1, unsigned __int64 a2)
{
  size_t v3; // rcx
  void *v4; // rax

  if ( !a1 )
    return 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a1 )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  v3 = a2 * a1;
  if ( v3 < 0x1000 )
    return operator new(v3);
  if ( v3 + 39 < v3 )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL) - 8) = v4;
  return (void *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
}
