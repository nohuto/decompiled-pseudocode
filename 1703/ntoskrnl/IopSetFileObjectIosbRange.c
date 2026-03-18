/*
 * XREFs of IopSetFileObjectIosbRange @ 0x14068A5DC
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     IopAllocateFileObjectExtension @ 0x1400478A0 (IopAllocateFileObjectExtension.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140051214 (IopSetTypeSpecificFoExtension.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rdi
  char **v3; // r14
  int v4; // r15d
  _KPROCESS *Process; // rsi
  char **v6; // r12
  __int64 v7; // r13
  char *v9; // r12
  _KPROCESS **inserted; // rax
  PMDL Mdl; // rsi
  char v12; // r12
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  struct _LIST_ENTRY *MappedSystemVa; // rax
  char **PoolWithTag; // rax
  int v17; // r9d
  __int64 FileObjectExtension; // rax
  __int64 v19; // r8
  char **v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rax
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+40h] [rbp-98h]
  _KPROCESS *Object; // [rsp+50h] [rbp-88h]
  _KPROCESS **v26; // [rsp+58h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-50h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v31; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v31 = 0;
  NewElement = 0;
  i = 0LL;
  v3 = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v6 = *(char ***)(a2 + 24);
  v7 = *((unsigned int *)v6 + 2);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *v6;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  Buffer[0] = Process;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v26 = inserted;
  if ( !inserted )
  {
    v4 = -1073741670;
    Mdl = 0LL;
    v12 = 0;
LABEL_58:
    if ( Mdl )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
    if ( v12 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_68;
  }
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i && ((char *)i->Header.WaitListHead.Flink != v9 || (char *)i->Header.WaitListHead.Blink != &v9[v7]);
          i = (_KPROCESS *)i->DirectoryTableBase )
    {
      ;
    }
  }
  if ( i )
  {
    Mdl = 0LL;
  }
  else
  {
    i = (_KPROCESS *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x65546F49u);
    if ( !i )
    {
      v4 = -1073741670;
      Mdl = 0LL;
      v12 = 0;
      goto LABEL_58;
    }
    v31 = 1;
    v13 = Process[1].ActiveProcessors.Bitmap[7];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      if ( ((unsigned __int8)v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( ((unsigned __int8)v9 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned __int64)&v9[v7] > 0x7FFFFFFF0000LL || &v9[v7] < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Mdl = IoAllocateMdl(v9, v7, 0, 1u, 0LL);
    MemoryDescriptorList = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, *(_BYTE *)(a2 + 64), IoWriteAccess);
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (struct _LIST_ENTRY *)Mdl->MappedSystemVa;
    else
      MappedSystemVa = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
    BaseAddress = MappedSystemVa;
    if ( MappedSystemVa )
    {
      i->ProfileListHead.Flink = (struct _LIST_ENTRY *)Mdl;
      i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
      i->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v9[(unsigned int)v7];
      i->Header.LockNV = 1;
      i->DirectoryTableBase = 0LL;
      i->ProfileListHead.Blink = MappedSystemVa;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( v4 < 0 )
    goto LABEL_56;
  PoolWithTag = (char **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65546F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    v12 = v31;
    goto LABEL_58;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  *v3 = v9;
  v3[1] = &v9[(unsigned int)v7];
  v3[3] = &v9[(unsigned __int64)((char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink)];
  v3[2] = (char *)i->ProfileListHead.Flink;
  v3[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = (char *)Object;
  v4 = IopAllocateFileObjectExtension(a1, &v27);
  if ( v4 < 0 )
  {
LABEL_56:
    v12 = v31;
  }
  else
  {
    v4 = IopSetTypeSpecificFoExtension(v27, 2u, (signed __int64)v3);
    if ( v4 == -1073741823 )
    {
      FileObjectExtension = IopGetFileObjectExtension(a1, v17, 0LL);
      v19 = FileObjectExtension;
      if ( v3[4] == (char *)Object )
      {
        v20 = (char **)FileObjectExtension;
        if ( FileObjectExtension )
        {
          while ( *v3 != *v20 || v3[1] != v20[1] )
          {
            v20 = (char **)v20[5];
            if ( !v20 )
              goto LABEL_45;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          v4 = 0;
          goto LABEL_68;
        }
LABEL_45:
        v21 = *(_QWORD *)(FileObjectExtension + 40);
        v3[5] = (char *)v21;
        if ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v21) != v3[5] )
        {
          _m_prefetchw((const void *)(v19 + 40));
          do
          {
            v22 = *(_QWORD *)(v19 + 40);
            v3[5] = (char *)v22;
          }
          while ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v22) != v3[5] );
        }
        v4 = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    v12 = v31;
    if ( v4 < 0 )
      goto LABEL_58;
    if ( v31 == 1 )
    {
      if ( NewElement == 1 )
        *v26 = Object;
      else
        i->DirectoryTableBase = (unsigned __int64)v26[1];
      v26[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( v4 < 0 )
    goto LABEL_58;
LABEL_68:
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
  return (unsigned int)v4;
}
