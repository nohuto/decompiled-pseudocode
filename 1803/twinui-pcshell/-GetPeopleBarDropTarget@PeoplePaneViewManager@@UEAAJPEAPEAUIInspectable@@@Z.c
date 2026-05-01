/*
 * XREFs of ?GetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1801C2200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetPeopleBarDropTarget(PeoplePaneViewManager *this, struct IInspectable **a2)
{
  struct IInspectable **v2; // rbx

  v2 = (struct IInspectable **)((char *)this + 416);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 52);
  *a2 = *v2;
  return 0LL;
}
