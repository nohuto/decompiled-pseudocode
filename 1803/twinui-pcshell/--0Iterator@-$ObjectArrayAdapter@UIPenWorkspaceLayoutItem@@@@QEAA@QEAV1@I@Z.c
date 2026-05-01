/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@QEAV1@I@Z @ 0x180195348
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180196E28 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ @ 0x180195B38 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::Iterator(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::GetCurrentObject(a1);
  return a1;
}
