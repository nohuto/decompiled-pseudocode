/*
 * XREFs of ObInsertObject @ 0x140493DC0
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140804AC4 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
