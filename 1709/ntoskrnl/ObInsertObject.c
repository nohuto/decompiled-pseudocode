/*
 * XREFs of ObInsertObject @ 0x1404FA190
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400B7580 (FsRtlCreateSectionForDataScan.c)
 *     CmpCreateRegistryRoot @ 0x14083C9A8 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x14084A9B0 (PspInitPhase1.c)
 *     MiSectionInitialization @ 0x14085467C (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(
           Object,
           PassedAccessState,
           DesiredAccess,
           ObjectPointerBias,
           0,
           NewObject,
           (unsigned __int64 *)Handle);
}
