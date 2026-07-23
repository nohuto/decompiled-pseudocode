/*
 * XREFs of NtSetCachedSigningLevel @ 0x1405E4000
 * Callers:
 *     <none>
 * Callees:
 *     NtSetCachedSigningLevel2 @ 0x1405E4024 (NtSetCachedSigningLevel2.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  return NtSetCachedSigningLevel2(Flags, InputSigningLevel, SourceFiles, SourceFileCount, TargetFile, 0LL);
}
