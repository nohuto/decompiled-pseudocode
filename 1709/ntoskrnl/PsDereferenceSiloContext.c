/*
 * XREFs of PsDereferenceSiloContext @ 0x1401262F0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     PspAssignSiloSystemRootPath @ 0x140714B10 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14071594C (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
