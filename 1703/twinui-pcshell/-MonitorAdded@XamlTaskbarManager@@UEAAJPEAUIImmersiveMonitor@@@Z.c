/*
 * XREFs of ?MonitorAdded@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801208E0 (-UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall XamlTaskbarManager::MonitorAdded(XamlTaskbarManager *this, struct IImmersiveMonitor *a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = XamlTaskbarManager::UpdateTaskbarExistenceForMonitor((XamlTaskbarManager *)((char *)this - 8), a2);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
