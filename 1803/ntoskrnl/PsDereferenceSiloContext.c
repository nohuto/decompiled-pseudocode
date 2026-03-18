/*
 * XREFs of PsDereferenceSiloContext @ 0x1400C5610
 * Callers:
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     PspAssignSiloSystemRootPath @ 0x140778D00 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140779ADC (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
