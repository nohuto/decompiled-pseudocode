/*
 * XREFs of ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644
 * Callers:
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 *     std::_Func_impl__lambda_cb1880b0b6d135697f69bd79e9e60569__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800990C0 (std--_Func_impl__lambda_cb1880b0b6d135697f69bd79e9e60569__std--allocator_int__void__ea_1800990C0.c)
 *     std::_Func_impl__lambda_c8f651e38185f834b11d436f20cb123b__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800991C0 (std--_Func_impl__lambda_c8f651e38185f834b11d436f20cb123b__std--allocator_int__void__ea_1800991C0.c)
 *     std::_Func_impl__lambda_22f917f0192ab8f87e837f6f19967e84__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099350 (std--_Func_impl__lambda_22f917f0192ab8f87e837f6f19967e84__std--allocator_int__void__ea_180099350.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?ControllerNodeTrackingSkipped_@RawInputProvidersTracing@@QEAAXK@Z @ 0x18008F29C (-ControllerNodeTrackingSkipped_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ @ 0x180091DAC (-EnableHeadEventHandler@SpatialInputControllerCollection@@AEAAJXZ.c)
 *     ?EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18009483C (-EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details.c)
 *     ?EnsureHmdNode@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800954E0 (-EnsureHmdNode@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappe.c)
 *     ?StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@456@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C6244 (-StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNod.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialInputControllerCollection::TryUpdateControllerNodeReference(HSTRING *this, _QWORD *a2)
{
  HSTRING v4; // rbx
  HSTRING v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v7; // rdx
  int v8; // eax
  unsigned int v9; // esi
  HSTRING v10; // rax
  HSTRING v11; // rax
  HSTRING v12; // rsi
  HSTRING v13; // r9
  int started; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // esi
  _DWORD *v19; // rcx
  RawInputProvidersTracing *v20; // rcx
  HSTRING v22; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  HSTRING string; // [rsp+80h] [rbp+30h] BYREF
  HSTRING v25; // [rsp+98h] [rbp+48h]

  v4 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  string = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 359);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 359));
  v8 = SpatialInputControllerCollection::EnsureDisplayWatcher((SpatialInputControllerCollection *)this, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_3;
  }
  v10 = this[364];
  if ( v10 )
  {
    v4 = this[364];
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 8LL))(v4);
    v25 = v4;
  }
  v11 = this[365];
  if ( v11 )
  {
    v5 = this[365];
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(v5);
    v22 = v5;
  }
  v12 = this[366];
  v13 = string;
  if ( !v12 || v12 != string )
  {
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDuplicateString(v12, &string);
    v13 = string;
  }
  if ( v6 )
  {
    LeaveCriticalSection(v6);
    v13 = string;
  }
  if ( !v4 || !v5 || !*(_BYTE *)(*a2 + 401LL) )
  {
    v18 = *(_DWORD *)(*a2 + 344LL);
    v19 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v19 && *v19 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::ControllerNodeTrackingSkipped_(v20, v18);
    }
LABEL_29:
    v9 = 0;
    goto LABEL_30;
  }
  started = SpatialInteractionDevices::SpatialInteractionController::StartTracking(*a2, v4, v5, v13);
  v9 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6AF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)started);
    goto LABEL_30;
  }
  EnterCriticalSection(v6);
  v16 = SpatialInputControllerCollection::EnsureHmdNode((SpatialInputControllerCollection *)this, v15);
  v9 = v16;
  if ( v16 >= 0 )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    *(_BYTE *)(*a2 + 1081LL) = 1;
    v17 = SpatialInputControllerCollection::EnableHeadEventHandler((SpatialInputControllerCollection *)this);
    v9 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6BC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v17);
      v4 = v25;
      v5 = v22;
      goto LABEL_30;
    }
    v4 = v25;
    v5 = v22;
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x6B4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v16);
LABEL_3:
  if ( v6 )
    LeaveCriticalSection(v6);
LABEL_30:
  WindowsDeleteString(string);
  string = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  return v9;
}
