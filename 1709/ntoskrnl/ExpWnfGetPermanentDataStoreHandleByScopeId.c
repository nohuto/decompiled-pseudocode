/*
 * XREFs of ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405EFCA0
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandle @ 0x14059D7A8 (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x140762C54 (ExpWnfEnumeratePermanentDataStores.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404E1054 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140762CA0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentDataStoreHandleByScopeId(
        int a1,
        int a2,
        void *a3,
        __int64 a4,
        int a5,
        int a6,
        HANDLE *KeyHandle)
{
  int v7; // ebx
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  void *v10; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-40h] BYREF

  v7 = 0;
  if ( a5 || (a1 & 0xFFFFFFF9) != 0 || a1 == 6 )
    return a6 != 0 ? -1073741822 : -1073741772;
  if ( a1 == 2 )
  {
    if ( !a2 )
      return ExpWnfGetPermanentPerUserDataStoreHandle(a3, KeyHandle);
    return a6 != 0 ? -1073741822 : -1073741772;
  }
  result = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&v10);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Data");
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v9 < 0 )
      return v9;
    return v7;
  }
  return result;
}
