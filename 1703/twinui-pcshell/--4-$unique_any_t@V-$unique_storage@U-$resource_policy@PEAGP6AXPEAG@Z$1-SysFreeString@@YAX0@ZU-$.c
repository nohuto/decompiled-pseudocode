/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180089840
 * Callers:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180086648 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x18008AF9C (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1800CBE0C (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x1800CD554 (-RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

OLECHAR **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
        OLECHAR **a1,
        OLECHAR **a2)
{
  OLECHAR *v4; // rbp
  OLECHAR *v5; // r14
  DWORD LastError; // ebx

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( *a1 )
    {
      LastError = GetLastError();
      SysFreeString(v4);
      SetLastError(LastError);
    }
    *a1 = v5;
    *a2 = 0LL;
  }
  return a1;
}
