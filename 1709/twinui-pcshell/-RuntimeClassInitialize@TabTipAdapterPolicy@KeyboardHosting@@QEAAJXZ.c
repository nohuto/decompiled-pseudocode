/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1801AA5B4
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x180193714 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801ABF20 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801AC3C4 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  volatile signed __int32 *v2; // rcx
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rcx
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  HMONITOR v9; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    *((_QWORD *)this + 21) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *((_QWORD *)this + 21) = 0LL;
  v3 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( !v3 )
  {
    v5 = 24LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v3[3] = 1;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v4 = &KeyboardHosting::PositionAndSizeOptionsProvider::`vftable';
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 2) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  *((_QWORD *)v4 + 4) = 0LL;
  memset(v4 + 10, 0, 0x20uLL);
  v4[18] = 96;
  v4[19] = 96;
  v4[20] = 100;
  *((_QWORD *)v4 + 11) = 0LL;
  memset(v4 + 24, 0, 0x20uLL);
  v4[32] = 96;
  v4[33] = 96;
  v4[34] = 100;
  if ( v4 )
    _InterlockedAdd(v4 + 3, 1u);
  *((_QWORD *)this + 21) = v4;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 23);
  if ( v6 )
  {
    *((_QWORD *)this + 23) = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *((_QWORD *)this + 23) = 0LL;
  v7 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v5 = 25LL;
    goto LABEL_29;
  }
  v7[3] = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &KeyboardHosting::ViewRectProvider::`vftable';
  *((_QWORD *)v8 + 2) = 0LL;
  memset(v8 + 6, 0, 0x20uLL);
  v8[14] = 96;
  v8[15] = 96;
  v8[16] = 100;
  *((_QWORD *)v8 + 9) = 0LL;
  memset(v8 + 20, 0, 0x20uLL);
  v8[28] = 96;
  v8[29] = 96;
  v8[30] = 100;
  _InterlockedAdd(v8 + 3, 1u);
  *((_QWORD *)this + 23) = v8;
  if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  v9 = MonitorFromWindow(0LL, 1u);
  *((_QWORD *)this + 24) = v9;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 192));
  *((_QWORD *)this + 31) = v9;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 248));
  *((_QWORD *)this + 38) = v9;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 304));
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
