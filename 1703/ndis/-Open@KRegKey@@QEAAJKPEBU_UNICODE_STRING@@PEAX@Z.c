/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00B102C
 * Callers:
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C00BCAA4 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001D3E4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, struct _UNICODE_STRING *a3, void *a4)
{
  unsigned int v5; // ebx
  _OBJECT_ATTRIBUTES v7; // [rsp+20h] [rbp-38h] BYREF
  HANDLE v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0LL;
  v7.ObjectName = a3;
  v7.Length = 48;
  v7.RootDirectory = a4;
  *(_OWORD *)&v7.SecurityDescriptor = 0LL;
  v7.Attributes = 576;
  v5 = ZwOpenKey(&v8, a2, &v7);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &this->m_ptr,
    v8);
  return v5;
}
