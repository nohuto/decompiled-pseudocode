/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800D5C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D5CA0 @ 0x1800D5CA0 (sub_1800D5CA0.c)
 */

NTSTATUS __cdecl LdrResolveDelayLoadsFromDll(PVOID ParentModuleBase, PCSTR TargetDllName, ULONG Flags)
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *v5; // rax

  if ( Flags )
    return -1073741811;
  v5 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)sub_1800D5CA0(ParentModuleBase, TargetDllName);
  if ( v5 )
    return sub_18003A2D4((char *)ParentModuleBase, v5);
  else
    return -1073741515;
}
