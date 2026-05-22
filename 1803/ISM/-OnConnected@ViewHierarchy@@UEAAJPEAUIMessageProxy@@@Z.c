/*
 * XREFs of ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x18002BB1C (-AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x18002CA18 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 */

__int64 __fastcall ViewHierarchy::OnConnected(HANDLE *this, struct IMessageProxy *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this[8] == a2 )
  {
    ViewHierarchy::RemoveListListenerReference((ViewHierarchy *)this);
    ViewHierarchy::AddViewsOnProxyConnection((ViewHierarchy *)this);
  }
  if ( !SetEvent(this[24]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v3);
    __debugbreak();
  }
  return 0LL;
}
