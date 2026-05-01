/*
 * XREFs of ?AsElement@CSwitchItemElement@@UEAA?AV?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@XZ @ 0x180288430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CSwitchItemElement::AsElement(__int64 a1, __int64 *a2)
{
  *a2 = a1 - 224;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
