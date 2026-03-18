/*
 * XREFs of BiOpenKey @ 0x140608CE0
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1402C5CF0 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x140606570 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140606768 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140606C04 (BiCleanupLoadedStores.c)
 *     BiDeleteRegistryValue @ 0x140606D48 (BiDeleteRegistryValue.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140608704 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1406092E4 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1407E1B88 (BiCreateObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407E241C (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x1400CC154 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1400D2628 (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     BiZwOpenKey @ 0x1401643B0 (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x1401643D0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
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
          CmSiCloseSection(v15);
          v15 = v16;
LABEL_6:
          *a4 = v15;
        }
      }
    }
    if ( v12 < 0 && v15 )
      CmSiCloseSection(v15);
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
