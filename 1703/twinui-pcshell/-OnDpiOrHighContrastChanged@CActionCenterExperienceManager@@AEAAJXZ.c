/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800927AC
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180091414 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180091EDC (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800926F0 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_68ac9c06234f1b72bb3d00541cb2aa9a___ @ 0x180097278 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_68ac9c06234f1b72bb3d00541cb2aa9a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  int v2; // edi
  int v3; // ebx
  HMONITOR v4; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v6; // esi
  int v8; // esi
  DWORD SysColor; // eax
  LONG x; // eax
  IUnknown *v11; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v13; // rcx
  int pvParam; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+3Ch] [rbp-14h]
  int v16; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  POINT pt; // [rsp+88h] [rbp+38h] BYREF
  LONG v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+94h] [rbp+44h]
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  pt = 0LL;
  v3 = 1;
  v4 = MonitorFromPoint(0LL, 1u);
  pt.x = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v4, &pt);
  v6 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v8 = 0;
    pvParam = 16;
    v15 = 0LL;
    v16 = 0;
    if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) && (v15 & 1) != 0 )
    {
      pvParam = 16;
      v15 = 0LL;
      v16 = 0;
      if ( !SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0)
        || (v15 & 1) == 0
        || (SysColor = GetSysColor(5),
            BYTE2(SysColor) + 5 * BYTE1(SysColor) + 2 * (unsigned int)(unsigned __int8)SysColor <= 0x400) )
      {
        v3 = 0;
      }
      v8 = v3 + 1;
    }
    x = pt.x;
    if ( *((_DWORD *)this + 138) != pt.x || *((_DWORD *)this + 139) != v8 )
    {
      *((_DWORD *)this + 138) = pt.x;
      *((_DWORD *)this + 139) = v8;
      v19 = x;
      v20 = v8;
      v11 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_68ac9c06234f1b72bb3d00541cb2aa9a___(
                            &v21,
                            &v19);
      CurrentThreadId = GetCurrentThreadId();
      v2 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v11, 0LL);
      v13 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v2 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E2,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
    }
    return (unsigned int)v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v6;
  }
}
