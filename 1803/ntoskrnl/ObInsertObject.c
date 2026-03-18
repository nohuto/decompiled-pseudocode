/*
 * XREFs of ObInsertObject @ 0x1404BF190
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     MiSectionInitialization @ 0x14089F4C0 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1408B0FCC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, 0, (__int64)NewObject, (__int64)Handle);
}
