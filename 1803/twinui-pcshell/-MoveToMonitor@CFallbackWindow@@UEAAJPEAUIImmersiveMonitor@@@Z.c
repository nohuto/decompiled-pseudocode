/*
 * XREFs of ?MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180114A70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180115020 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CFallbackWindow::MoveToMonitor(CFallbackWindow *this, struct IImmersiveMonitor *a2)
{
  Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)this + 6, (__int64)a2);
  CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 72), a2);
  return 0LL;
}
