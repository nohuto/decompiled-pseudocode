/*
 * XREFs of ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00F1C14
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001D3E4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00B09E0 (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00F1B78 (-ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z.c)
 */

char __fastcall Ndis::BindStack::ReadV1InterfaceBindings(Ndis::BindStack *this, PDEVICE_OBJECT DeviceObject)
{
  HANDLE v2; // rbx
  __int64 v5; // rax
  const wchar_t *v6; // rcx
  int v7; // ecx
  __int16 v8; // dx
  HANDLE v9; // rdi
  NTSTATUS v10; // eax
  char v11; // si
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h] BYREF
  const wchar_t *v14; // [rsp+30h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE DeviceRegKey; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0LL;
  Handle = 0LL;
  DeviceRegKey = 0LL;
  if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 8u, &DeviceRegKey) < 0 )
    return 0;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &Handle,
    DeviceRegKey);
  KeyHandle = 0LL;
  v13 = 0;
  v5 = 0x7FFFLL;
  v14 = 0LL;
  v6 = L"Linkage";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = -1073741811;
  if ( v5 )
  {
    v7 = 0;
    v8 = 0x7FFF - v5;
  }
  else
  {
    v8 = 0;
  }
  if ( v5 )
  {
    v14 = L"Linkage";
    LOWORD(v13) = 2 * v8;
    HIWORD(v13) = 2 * v8 + 2;
  }
  v9 = Handle;
  if ( v7 < 0 )
    goto LABEL_17;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = Handle;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v2 = KeyHandle;
  if ( v10 < 0 )
    goto LABEL_17;
  if ( (int)Ndis::BindStack::ReadV1FilterList(this, (struct KRegKey *)&KeyHandle) < 0
    || (int)KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___(
              &KeyHandle,
              (_UNICODE_STRING *)&Ndis::UpperBindValueName,
              (__int64)this,
              this) < 0 )
  {
    v2 = KeyHandle;
LABEL_17:
    v11 = 0;
    goto LABEL_18;
  }
  v2 = KeyHandle;
  v11 = 1;
LABEL_18:
  if ( v2 )
    ZwClose(v2);
  if ( v9 )
    ZwClose(v9);
  return v11;
}
