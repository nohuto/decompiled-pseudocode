/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0
 * Callers:
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18014AAC0 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18014B0F0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     ?OnIdleStateChanged@XamlLauncher@@UEAAJH@Z @ 0x18014B420 (-OnIdleStateChanged@XamlLauncher@@UEAAJH@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18014D25C (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@CommonStartTelemetry@@KAPEAV1@XZ @ 0x180148174 (-Instance@CommonStartTelemetry@@KAPEAV1@XZ.c)
 *     ?LauncherOpened_@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180148254 (-LauncherOpened_@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18014D750 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?DismissPopupMenu@@YA_NI@Z @ 0x1801518E0 (-DismissPopupMenu@@YA_NI@Z.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1801523A8 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  DWORD v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 248) )
    return 2147943568LL;
  DismissPopupMenu(0x12Cu);
  if ( *(_BYTE *)(a1 + 228) )
  {
    v7 = (_DWORD *)*((_QWORD *)CommonStartTelemetry::Instance() + 1);
    if ( v7 )
    {
      if ( *v7 )
      {
        CommonStartTelemetry::Instance();
        CommonStartTelemetry::LauncherOpened_(v8, a2, a3, 3);
      }
    }
    return 0LL;
  }
  v9 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v9 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v9 == 119 )
    return 0LL;
  if ( a2 == 1 )
  {
    if ( XamlLauncher::DidHolographicHandleHotKey((XamlLauncher *)(a1 - 16)) )
      return 0LL;
  }
  else if ( a2 == 11 )
  {
    goto LABEL_17;
  }
  v10 = ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(*(ImmersiveMonitorHelper **)(a1 + 96));
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x88,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
LABEL_17:
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 248) + 56LL))(
          *(_QWORD *)(a1 + 248),
          a2,
          a3);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x8A,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
