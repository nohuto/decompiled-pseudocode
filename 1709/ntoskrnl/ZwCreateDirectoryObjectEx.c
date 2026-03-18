/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14017ECE0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1405B2174 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405B2414 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
