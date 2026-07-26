/*
 * XREFs of ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00EAD48
 * Callers:
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0064E9C (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00040CC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00B14CC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

bool __fastcall ndisMAllowSilentReenumerate(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  HANDLE v2; // rbx
  NTSTATUS v3; // eax
  bool v4; // di
  unsigned int Data; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF
  HANDLE DeviceRegKey; // [rsp+50h] [rbp+18h] BYREF

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v2 = 0LL;
  KeyHandle = 0LL;
  v4 = 0;
  if ( IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey) >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      DeviceRegKey);
    v3 = KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, (struct _UNICODE_STRING *)&stru_1C007FE20, &Data);
    v2 = KeyHandle;
    if ( v3 >= 0 )
    {
      if ( Data )
      {
        --Data;
        if ( ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1C007FE20, 0, 4u, &Data, 4u) >= 0 )
          v4 = 1;
      }
    }
  }
  if ( v2 )
    ZwClose(v2);
  return v4;
}
