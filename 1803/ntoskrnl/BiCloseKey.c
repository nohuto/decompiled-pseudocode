/*
 * XREFs of BiCloseKey @ 0x140608E50
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1402C5CF0 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1402C5DB8 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x1405EE330 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiCloseStore @ 0x14060649C (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140606570 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140606768 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140606C04 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1406092E4 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1407E1B88 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1407E1F40 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407E241C (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x1400CC154 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x1401643D0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241LL);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
