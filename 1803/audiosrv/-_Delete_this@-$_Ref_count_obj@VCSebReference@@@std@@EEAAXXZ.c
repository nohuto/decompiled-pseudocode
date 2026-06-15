/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ @ 0x180048FA0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180049100 (-_Destroy@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??_E?$_Ref_count_obj@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@UEAAPEAXI@Z @ 0x180048FE0 (--_E-$_Ref_count_obj@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTas.c)
 */

void __fastcall std::_Ref_count_obj<CSebReference>::_Delete_this(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64); // rax

  if ( a1 )
  {
    v1 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)std::_Ref_count_obj<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::`vector deleting destructor' )
      std::_Ref_count_obj<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::`vector deleting destructor'(
        a1,
        1LL);
    else
      v1(a1, 1LL);
  }
}
