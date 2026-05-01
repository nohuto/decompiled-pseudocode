/*
 * XREFs of ?Reinitialize@CClassicWindow@@UEAAJPEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x18011A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUIClassicWindow@@@Z @ 0x180119B38 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::Reinitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)(a1 + 64), a2);
  Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)(a1 + 24), a3);
  result = 0LL;
  *(_DWORD *)(a1 + 72) = a4;
  return result;
}
