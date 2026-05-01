/*
 * XREFs of ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18014D25C
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18014B0F0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x18014D344 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180152B9C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 */

void __fastcall XamlLauncher::HandleInitialHShellEvent(XamlLauncher *this)
{
  bool v2; // bl
  NTSTATUS v3; // eax
  signed int v4; // eax
  PerSessionState *v5; // rcx
  unsigned __int64 v6; // r9
  bool v7; // bl
  bool v8; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0;
  v2 = 0;
  v3 = RtlQueryWnfStateData(&v11, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &v10, 0LL);
  v4 = RtlNtStatusToDosError(v3);
  v6 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v6 = (unsigned int)v4;
  if ( (v6 & 0x80000000) == 0LL )
    v2 = v10;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"internal\\shell\\private\\inc\\tabletmodehelpers.h",
      (const char *)v6);
  v7 = !v2;
  if ( !PerSessionState::HasLoginCompleted(v5) )
  {
    if ( !v7 )
    {
LABEL_15:
      XamlLauncher::ShowStartView((__int64)this + 16, 1u, 4u);
      return;
    }
    v8 = 0;
LABEL_14:
    if ( !v8 )
      return;
    goto LABEL_15;
  }
  if ( (int)RtlQueryWnfStateData(
              &v11,
              WNF_IMSN_LAUNCHERVISIBILITY,
              PerSessionState::_LauncherVisibilityWnfCallback,
              &v10,
              0LL) >= 0 )
    v8 = v10;
  else
    v8 = !v7;
  if ( v8 )
  {
    XamlLauncher::PublishLauncherVisibilityState(this, 0);
    goto LABEL_14;
  }
}
