/*
 * XREFs of ?OnPropertyChanged@MessageProxyListenerForwarder@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180082F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewHierarchy::MessageProxyListenerForwarder::OnPropertyChanged(
        ViewHierarchy::MessageProxyListenerForwarder *this,
        struct IMessageProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 1) + 48LL))(
           *((_QWORD *)this + 1),
           a2);
}
