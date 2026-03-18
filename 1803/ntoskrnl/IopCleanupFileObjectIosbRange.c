/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x1407197B8
 * Callers:
 *     IopCleanupProcessResources @ 0x14055C5BC (IopCleanupProcessResources.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
