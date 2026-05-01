/*
 * XREFs of ?GetDragProvider@CMultitaskingViewFrameElement@@UEAA?AV?$ComPtr@UIMultitaskingViewDragProvider@@@WRL@Microsoft@@XZ @ 0x1802925B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CMultitaskingViewFrameElement::GetDragProvider(__int64 a1, __int64 *a2)
{
  *a2 = (a1 + 232) & -(__int64)(a1 != 0);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
