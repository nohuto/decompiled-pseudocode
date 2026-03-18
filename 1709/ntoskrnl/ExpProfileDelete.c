/*
 * XREFs of ExpProfileDelete @ 0x140760720
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeStopProfile @ 0x140208460 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExpProfileDelete(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 48) )
  {
    KeStopProfile(*(_QWORD *)(a1 + 40));
    MmUnmapLockedPages(*(PVOID *)(a1 + 48), *(PMDL *)(a1 + 56));
    MmUnlockPages(*(PMDL *)(a1 + 56));
    ExFreePoolWithTag(*(PVOID *)(a1 + 40), 0);
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x66507845u);
}
