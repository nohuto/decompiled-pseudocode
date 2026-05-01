/*
 * XREFs of ?GetSwitchItem@CSwitchItemElement@@UEAA?AV?$ComPtr@UISwitchItem@@@WRL@Microsoft@@XZ @ 0x18027DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CSwitchItemElement::GetSwitchItem(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 360);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
