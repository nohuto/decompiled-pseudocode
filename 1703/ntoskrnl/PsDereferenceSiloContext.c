/*
 * XREFs of PsDereferenceSiloContext @ 0x14003ABD0
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAssignSiloSystemRootPath @ 0x1406DE660 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1406DF4CC (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
