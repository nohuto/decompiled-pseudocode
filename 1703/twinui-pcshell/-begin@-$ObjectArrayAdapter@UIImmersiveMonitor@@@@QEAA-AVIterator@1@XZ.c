/*
 * XREFs of ?begin@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AVIterator@1@XZ @ 0x1801213E4
 * Callers:
 *     ?CreateInitialTaskbars@XamlTaskbarManager@@UEAAJPEAUIXamlTaskbarProxyHost@@@Z @ 0x180120BD0 (-CreateInitialTaskbars@XamlTaskbarManager@@UEAAJPEAUIXamlTaskbarProxyHost@@@Z.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18012E4C8 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x180121820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObjectArrayAdapter<IImmersiveMonitor>::begin(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(a2);
  return a2;
}
