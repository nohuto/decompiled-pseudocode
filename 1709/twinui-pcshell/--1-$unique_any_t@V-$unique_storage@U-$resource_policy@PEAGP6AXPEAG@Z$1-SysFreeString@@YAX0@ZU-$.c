/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008CE34
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1801EA22D (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$6 @ 0x1801EA253 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$7 @ 0x1801EA279 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$7.c)
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$8 @ 0x1801EA29F (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$8.c)
 *     _TaskbarLayoutParser::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801EA5D9 (_TaskbarLayoutParser--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1801EA5FF (_TaskbarLayoutParser--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _TaskbarLayoutParser::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1801EA625 (_TaskbarLayoutParser--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801ECC90 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1801ECCB6 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _PWSLayoutParser::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801ECE37 (_PWSLayoutParser--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _PWSLayoutParser::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1801ECE5D (_PWSLayoutParser--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _PWSLayoutParser::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1801ECE83 (_PWSLayoutParser--RuntimeClassInitialize_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(
        OLECHAR **a1)
{
  OLECHAR *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SysFreeString(v1);
}
