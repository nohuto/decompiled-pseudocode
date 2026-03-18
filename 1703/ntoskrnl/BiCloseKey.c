/*
 * XREFs of BiCloseKey @ 0x14058BA28
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140265D40 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140265E54 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiUnloadHiveByHandle @ 0x14057B97C (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140589778 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1405898C0 (BiGetObjectDescription.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x140735038 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407355F4 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x14014CF48 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 */

NTSTATUS __fastcall BiCloseKey(HANDLE Handle)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(Handle, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return BiZwClose(Handle);
}
