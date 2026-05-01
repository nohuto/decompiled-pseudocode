/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B17BC
 * Callers:
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x1801B1650 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1801B1150 (-SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1801B21F0 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x1801B2380 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 v2; // rsi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  int v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  IUnknown *v28; // rdi
  IUnknown *v29; // rax
  IUnknown *v30; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v36[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h]
  IUnknown *v38; // [rsp+50h] [rbp-20h]
  AccessibilityExperienceManager *v39; // [rsp+58h] [rbp-18h]
  char v40; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v42; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v43; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)this + 51);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *((_DWORD *)this + 101) = 100;
  v3 = MonitorFromWindow(0LL, 1u);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, (char *)this + 404);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B3,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x203,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v39 = this;
  v40 = 1;
  if ( !v2 )
  {
    v6 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)0x80270257LL);
    goto LABEL_55;
  }
  v7 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v42);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 523LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v9);
    goto LABEL_55;
  }
  v11 = v42;
  if ( *((_QWORD *)this + 48) != v42 )
  {
    v12 = v42;
    if ( v42 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
      v11 = v42;
    }
    v13 = *((_QWORD *)this + 48);
    *((_QWORD *)this + 48) = v12;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v11 = v42;
    }
  }
  v14 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v43);
  v6 = v15;
  if ( v15 < 0 )
  {
    v9 = (unsigned int)v15;
    v10 = 526LL;
    goto LABEL_53;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 24LL))(v43, v36);
  v6 = v16;
  if ( v16 < 0 )
  {
    v9 = (unsigned int)v16;
    v10 = 529LL;
    goto LABEL_53;
  }
  AccessibilityExperienceManager::ExcludeWindowFromCapture(this);
  AccessibilityExperienceManager::SetNoActivate(
    (AccessibilityExperienceManager *)((char *)this + 144),
    *((_DWORD *)this + 117) == 0x8000000);
  v17 = v43;
  v18 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 144LL))(v17, &v44);
  v6 = v19;
  if ( v19 < 0 )
  {
    v9 = (unsigned int)v19;
    v10 = 536LL;
    goto LABEL_53;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v44 + 88LL))(v44, 255LL, 0LL);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v44 + 48LL))(v44, 1LL, 1LL);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21B,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v21);
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v43 + 112LL))(v43, 127LL, 16LL);
  v6 = v22;
  if ( v22 < 0 )
  {
    v9 = (unsigned int)v22;
    v10 = 541LL;
    goto LABEL_53;
  }
  v23 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
          this,
          (AccessibilityExperienceManager *)((char *)this + 376));
  v6 = v23;
  if ( v23 < 0 )
  {
    v9 = (unsigned int)v23;
    v10 = 545LL;
    goto LABEL_53;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 32LL))(v44, 0LL);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x223,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
  v25 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD))(*(_QWORD *)v43 + 72LL))(
          v43,
          L"Microsoft.ECApp_8wekyb3d8bbwe!App",
          0LL);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x226,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
  v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 48LL))(v42, 3LL);
  v6 = v26;
  if ( v26 < 0 )
  {
    v9 = (unsigned int)v26;
    v10 = 553LL;
    goto LABEL_53;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 128LL))(v42, 1LL);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x22B,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
  v28 = 0LL;
  v37 = 0LL;
  v29 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v29;
  if ( v29 )
  {
    v29->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v29[1].lpVtbl) = 1;
    v29->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v30->lpVtbl = (struct IUnknownVtbl *)off_180211180;
    v28 = v30;
  }
  v38 = v28;
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v28, 0LL);
  if ( v28 )
    ((void (__fastcall *)(IUnknown *))v28->lpVtbl->Release)(v28);
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 565LL;
    goto LABEL_53;
  }
  v6 = 0;
LABEL_55:
  v32 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v6;
}
