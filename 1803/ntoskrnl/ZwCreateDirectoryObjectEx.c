/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1401A8900
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14061CB80 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14061CD1C (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14061CFBC (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
