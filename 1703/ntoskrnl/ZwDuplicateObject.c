/*
 * XREFs of ZwDuplicateObject @ 0x14017E6C0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x14003DB0C (SepReferenceCachedTokenHandles.c)
 *     SeAuditHandleCreation @ 0x140458A5C (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SmKmFileInfoDuplicate @ 0x140701FA8 (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle);
}
