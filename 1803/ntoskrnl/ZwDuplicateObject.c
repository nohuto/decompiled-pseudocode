/*
 * XREFs of ZwDuplicateObject @ 0x1401A7C40
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x14009F2A4 (SepReferenceCachedTokenHandles.c)
 *     SeAuditHandleCreation @ 0x140577208 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     _SysCtxOpenMachine @ 0x140624344 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x14079D2A8 (SmKmFileInfoDuplicate.c)
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
