/*
 * XREFs of ?TryGetViewIdForWindowId@ViewEventDispatcher@@UEAAJIPEAI@Z @ 0x180122020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::TryGetViewIdForWindowId(ViewEventDispatcher *this, int a2, unsigned int *a3)
{
  HWND Ancestor; // rbx
  unsigned int PropW; // eax

  Ancestor = (HWND)a2;
  do
  {
    PropW = (unsigned int)GetPropW(Ancestor, L"Microsoft.Windows.WindowFactory.ViewId");
    *a3 = PropW;
    if ( PropW )
      break;
    Ancestor = GetAncestor(Ancestor, 1u);
  }
  while ( Ancestor );
  return 0LL;
}
