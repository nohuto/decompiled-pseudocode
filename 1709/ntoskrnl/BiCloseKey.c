/*
 * XREFs of BiCloseKey @ 0x1405AFC68
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140290080 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140290148 (BiSetFirmwareModifiedFromObject.c)
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x1405ADFA4 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1405AE19C (BiGetObjectDescription.c)
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x140778F1C (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1407792D4 (BiSetObjectDescription.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 *     BiUnloadHiveByHandle @ 0x1407798B0 (BiUnloadHiveByHandle.c)
 *     BiIsPortableWorkspaceBoot @ 0x140779A48 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwClose @ 0x140134ADC (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x140134AF0 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
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
  return BiZwClose(a1);
}
