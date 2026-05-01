/*
 * XREFs of ?SetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801C4780
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x18014CD7C (--4-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBarDropTarget(UAPViewWrapper **this, struct IInspectable *a2)
{
  Microsoft::WRL::ComPtr<IInspectable>::operator=(this + 52, (UAPViewWrapper *)a2);
  return 0LL;
}
