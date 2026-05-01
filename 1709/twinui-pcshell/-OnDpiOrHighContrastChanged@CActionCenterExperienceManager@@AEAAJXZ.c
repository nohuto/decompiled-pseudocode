/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096D0C
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009581C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180096260 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180096C50 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  int v2; // esi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  int v7; // ebx
  DWORD SysColor; // eax
  LONG x; // eax
  IUnknown *v10; // rdi
  IUnknown *v11; // rax
  IUnknown *v12; // rbx
  DWORD CurrentThreadId; // eax
  int pvParam; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+54h] [rbp-Ch]
  int v19; // [rsp+5Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  POINT pt; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp+30h]
  __int64 v23; // [rsp+98h] [rbp+38h]

  v2 = 0;
  pt = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  pt.x = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, &pt);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v7 = 0;
    pvParam = 16;
    v15 = 0LL;
    v16 = 0;
    if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    {
      if ( (v15 & 1) != 0 )
      {
        v17 = 16;
        v18 = 0LL;
        v19 = 0;
        if ( !SystemParametersInfoW(0x42u, 0x10u, &v17, 0)
          || (v18 & 1) == 0
          || (SysColor = GetSysColor(5),
              v7 = 2,
              BYTE2(SysColor) + 5 * BYTE1(SysColor) + 2 * (unsigned int)(unsigned __int8)SysColor <= 0x400) )
        {
          v7 = 1;
        }
      }
    }
    x = pt.x;
    if ( *((_DWORD *)this + 160) != pt.x || *((_DWORD *)this + 161) != v7 )
    {
      *((_DWORD *)this + 160) = pt.x;
      *((_DWORD *)this + 161) = v7;
      v22 = __PAIR64__(v7, x);
      v10 = 0LL;
      v23 = 0LL;
      v11 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        v11->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
        HIDWORD(v11[1].lpVtbl) = 1;
        v11->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v12->lpVtbl = (struct IUnknownVtbl *)off_180201440;
        v12[2].lpVtbl = (struct IUnknownVtbl *)v22;
        v10 = v12;
      }
      CurrentThreadId = GetCurrentThreadId();
      v2 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v10, 0LL);
      if ( v10 )
        ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
      if ( v2 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x330,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
    }
    return (unsigned int)v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x30E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v5;
  }
}
