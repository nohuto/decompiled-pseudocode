/*
 * XREFs of ExpProfileDelete @ 0x1407208B0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeStopProfile @ 0x140201E90 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
