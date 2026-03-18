/*
 * XREFs of BiOpenKey @ 0x1405AFAF8
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140290080 (BiOpenStoreKeyFromObject.c)
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x1405ADFA4 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1405AE19C (BiGetObjectDescription.c)
 *     BiDeleteRegistryValue @ 0x1405AE26C (BiDeleteRegistryValue.c)
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x140778F1C (BiCreateObject.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 *     BiIsPortableWorkspaceBoot @ 0x140779A48 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x140134ABC (BiZwOpenKey.c)
 *     BiZwClose @ 0x140134ADC (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x140134AF0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // edi
  void *KeySecurityDescriptor; // r14
  void *v10; // rax
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // ebx
  __int64 v14; // rdx
  HANDLE v15; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v18[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h]

  for ( i = 0; ; ++i )
  {
    v15 = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v10 = (void *)BiSanitizeHandle(a1);
    v19 = (__int64)v10;
    a3 |= 0x40000u;
    v11 = a3;
    if ( (a3 & 0x60019) != a3 )
      v11 = 0x40000;
    v18[0].Length = 48;
    v18[0].RootDirectory = v10;
    v18[0].Attributes = 576;
    v18[0].ObjectName = &DestinationString;
    *(_OWORD *)&v18[0].SecurityDescriptor = 0LL;
    v12 = BiZwOpenKey(&v15, v11, v18);
    if ( v12 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103LL);
      v12 = BiZwSetSecurityObject(v15, v14, KeySecurityDescriptor);
      if ( v12 >= 0 )
      {
        v12 = BiZwOpenKey(&v16, a3, v18);
        if ( v12 >= 0 )
        {
          BiZwClose(v15);
          v15 = v16;
LABEL_6:
          *a4 = v15;
        }
      }
    }
    if ( v12 < 0 && v15 )
      BiZwClose(v15);
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
