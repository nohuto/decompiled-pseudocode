/*
 * XREFs of ?begin@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA?AVIterator@1@XZ @ 0x1800436A4
 * Callers:
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800413FC (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ @ 0x180043BA4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IImmersiveApplicationInternal>::begin(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::GetCurrentObject(a2);
  return a2;
}
