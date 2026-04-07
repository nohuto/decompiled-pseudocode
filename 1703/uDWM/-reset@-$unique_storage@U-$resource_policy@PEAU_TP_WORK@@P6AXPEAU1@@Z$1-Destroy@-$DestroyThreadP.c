/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180074C54
 * Callers:
 *     _anonymous_namespace_::FodWaiter @ 0x180073570 (_anonymous_namespace_--FodWaiter.c)
 *     _anonymous_namespace_::WaitForFodInstalled @ 0x18007499C (_anonymous_namespace_--WaitForFodInstalled.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>::reset(
        __int64 a1,
        struct _TP_WORK *a2)
{
  struct _TP_WORK *v2; // rdi
  DWORD LastError; // ebx

  v2 = pwk;
  if ( pwk )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(v2);
    SetLastError(LastError);
  }
  pwk = a2;
}
