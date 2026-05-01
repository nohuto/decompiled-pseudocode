/*
 * XREFs of ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18017FEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800A01E4 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18017F580 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18017F730 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801821B0 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180186E7C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::OnShellHookMessage(XamlLauncher *this)
{
  __int64 v2; // rcx
  TabletModeHelpers *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  XamlLauncher *v7; // rdi
  bool v8; // bl
  PerSessionState *v9; // rcx
  bool v10; // bl
  char *v11; // rcx
  unsigned int v12; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v14; // [rsp+40h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 26);
  if ( !v2 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2) )
  {
    if ( !*((_BYTE *)this + 193) )
    {
      v11 = (char *)this - 16;
      v12 = 0;
      goto LABEL_18;
    }
    *((_BYTE *)this + 193) = 0;
    v7 = (XamlLauncher *)((char *)this - 40);
    v8 = TabletModeHelpers::IsTabletMode(v4) == 0;
    if ( PerSessionState::HasLoginCompleted(v9) )
    {
      if ( (int)RtlQueryWnfStateData(
                  &v15,
                  WNF_IMSN_LAUNCHERVISIBILITY,
                  PerSessionState::_LauncherVisibilityWnfCallback,
                  &v14,
                  0LL) >= 0 )
        v10 = v14;
      else
        v10 = !v8;
      if ( !v10 )
        return 0LL;
      XamlLauncher::PublishLauncherVisibilityState(v7, 0);
    }
    else
    {
      if ( !v8 )
      {
LABEL_16:
        v11 = (char *)v7 + 24;
        v12 = 4;
LABEL_18:
        XamlLauncher::ShowStartView((__int64)v11, 1u, v12);
        return 0LL;
      }
      v10 = 0;
    }
    if ( !v10 )
      return 0LL;
    goto LABEL_16;
  }
  v5 = XamlLauncher::Dismiss((__int64)this - 16);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x12D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  return 0LL;
}
