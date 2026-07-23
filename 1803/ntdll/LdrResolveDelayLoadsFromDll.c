/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800CB220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB260 @ 0x1800CB260 (sub_1800CB260.c)
 */

NTSTATUS __cdecl LdrResolveDelayLoadsFromDll(PVOID ParentModuleBase, PCSTR TargetDllName, ULONG Flags)
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *v5; // rax

  if ( Flags )
    return -1073741811;
  v5 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)sub_1800CB260(ParentModuleBase, TargetDllName);
  if ( v5 )
    return sub_180023294((char *)ParentModuleBase, v5);
  else
    return -1073741515;
}
