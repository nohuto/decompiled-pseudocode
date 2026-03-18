/*
 * XREFs of BiOpenKey @ 0x14058B8B8
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140265D40 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x140589778 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1405898C0 (BiGetObjectDescription.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 *     BiDeleteRegistryValue @ 0x1407354B8 (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407355F4 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x14014CF20 (BiZwOpenKey.c)
 *     BiZwClose @ 0x14014CF3C (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14014CF48 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  unsigned int i; // edi
  void *KeySecurityDescriptor; // r14
  void *v10; // rax
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // ebx
  __int64 v14; // rdx
  HANDLE KeyHandle; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h]

  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v10 = (void *)BiSanitizeHandle(a1);
    v19 = (__int64)v10;
    a3 |= 0x40000u;
    v11 = a3;
    if ( (a3 & 0x60019) != a3 )
      v11 = 0x40000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = BiZwOpenKey(&KeyHandle, v11, &ObjectAttributes);
    if ( v12 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
      v12 = BiZwSetSecurityObject(KeyHandle, v14, KeySecurityDescriptor);
      if ( v12 >= 0 )
      {
        v12 = BiZwOpenKey(&v16, a3, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          BiZwClose(KeyHandle);
          KeyHandle = v16;
LABEL_6:
          *a4 = KeyHandle;
        }
      }
    }
    if ( v12 < 0 && KeyHandle )
      BiZwClose(KeyHandle);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v12 == -1073741443 )
    {
      __debugbreak();
      a1 = v19;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v12;
}
