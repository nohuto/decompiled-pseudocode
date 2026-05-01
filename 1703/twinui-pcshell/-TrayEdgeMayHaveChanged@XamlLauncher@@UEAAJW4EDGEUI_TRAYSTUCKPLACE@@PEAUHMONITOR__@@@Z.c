/*
 * XREFs of ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x18014AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x1801520E8 (-TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall XamlLauncher::TrayEdgeMayHaveChanged(__int64 a1)
{
  int HaveChanged; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 240) )
    return 2147943568LL;
  HaveChanged = ImmersiveMonitorHelper::TrayEdgeMayHaveChanged(*(_QWORD *)(a1 + 88));
  v3 = HaveChanged;
  if ( HaveChanged < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)HaveChanged);
  return v3;
}
