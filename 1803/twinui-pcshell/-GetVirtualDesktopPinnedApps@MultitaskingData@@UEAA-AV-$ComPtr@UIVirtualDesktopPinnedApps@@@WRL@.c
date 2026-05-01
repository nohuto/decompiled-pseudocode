/*
 * XREFs of ?GetVirtualDesktopPinnedApps@MultitaskingData@@UEAA?AV?$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@XZ @ 0x1802745B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetVirtualDesktopPinnedApps(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 32);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
