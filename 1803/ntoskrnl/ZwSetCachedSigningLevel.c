/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401AA4E0
 * Callers:
 *     sub_1407D0524 @ 0x1407D0524 (sub_1407D0524.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Flags);
}
