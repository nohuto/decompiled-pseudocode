/*
 * XREFs of ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083340
 * Callers:
 *     <none>
 * Callees:
 *     ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x180083364 (-AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x1800841F4 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 */

__int64 __fastcall ViewHierarchy::OnConnected(ViewHierarchy *this, struct IMessageProxy *a2)
{
  if ( *((struct IMessageProxy **)this + 8) == a2 )
  {
    ViewHierarchy::RemoveListListenerReference(this);
    ViewHierarchy::AddViewsOnProxyConnection(this);
  }
  return 0LL;
}
