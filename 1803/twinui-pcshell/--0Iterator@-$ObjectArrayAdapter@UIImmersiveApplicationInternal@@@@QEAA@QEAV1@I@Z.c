/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@QEAV1@I@Z @ 0x18011D71C
 * Callers:
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180009DA8 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801261D8 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ @ 0x1801207E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::GetCurrentObject(a1);
  return a1;
}
