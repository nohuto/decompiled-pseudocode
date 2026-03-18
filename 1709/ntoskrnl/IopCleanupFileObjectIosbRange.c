/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x1406B4B00
 * Callers:
 *     IopCleanupProcessResources @ 0x14056829C (IopCleanupProcessResources.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  PMDL *v2; // rdi
  _QWORD *v3; // rsi
  PMDL *v4; // rbx
  PMDL v5; // rcx
  PMDL v6; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  v3 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  v4 = (PMDL *)v3[1];
  if ( v4 )
  {
    while ( *(PMDL *)(a1 + 16) != v4[3] )
    {
      v2 = v4;
      v4 = (PMDL *)v4[5];
      if ( !v4 )
        goto LABEL_6;
    }
    --*(_DWORD *)v4;
  }
LABEL_6:
  if ( !*(_DWORD *)v4 )
  {
    v5 = v4[4];
    if ( v5 )
      MmUnmapLockedPages(v5, v4[3]);
    MmUnlockPages(v4[3]);
    IoFreeMdl(v4[3]);
    v6 = v4[5];
    if ( v2 )
      v2[5] = v6;
    else
      v3[1] = v6;
    ExFreePoolWithTag(v4, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
}
