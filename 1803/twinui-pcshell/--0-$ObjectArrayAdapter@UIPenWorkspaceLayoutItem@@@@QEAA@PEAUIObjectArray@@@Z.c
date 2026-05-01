/*
 * XREFs of ??0?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801F756C
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180196E28 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1801F8A60 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18020A004 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IPenWorkspaceLayoutItem>::ObjectArrayAdapter<IPenWorkspaceLayoutItem>(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)a1 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      13LL,
      (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
      (const char *)(unsigned int)v4);
  return a1;
}
