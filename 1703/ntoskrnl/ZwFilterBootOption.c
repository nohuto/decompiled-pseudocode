/*
 * XREFs of ZwFilterBootOption @ 0x14017FA80
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1401F232C (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&FilterOperation);
}
