/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140030480
 * Callers:
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$0 @ 0x140020CB0 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$0.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$5 @ 0x140020D03 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$5.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$6 @ 0x140020D16 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$6.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$0 @ 0x140020D70 (_CSubmixImpl--CSubmixImpl_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
