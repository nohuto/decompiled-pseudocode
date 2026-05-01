/*
 * XREFs of ?GetVirtualDesktopItemCollection@MultitaskingData@@UEAA?AV?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@XZ @ 0x180274550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetVirtualDesktopItemCollection(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 48);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
