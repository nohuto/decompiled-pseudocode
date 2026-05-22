/*
 * XREFs of ?AddRef@MessageProxyListenerForwarder@ViewHierarchy@@UEAAKXZ @ 0x18002B5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewHierarchy::MessageProxyListenerForwarder::AddRef(
        ViewHierarchy::MessageProxyListenerForwarder *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
}
