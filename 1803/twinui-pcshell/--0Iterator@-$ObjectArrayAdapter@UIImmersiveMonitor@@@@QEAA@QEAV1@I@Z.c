/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA@QEAV1@I@Z @ 0x1801F7728
 * Callers:
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1801F8A60 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18020A004 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x1801F83D4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IImmersiveMonitor>::Iterator::Iterator(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(a1);
  return a1;
}
