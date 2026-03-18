/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14017F340
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1405A2A54 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
