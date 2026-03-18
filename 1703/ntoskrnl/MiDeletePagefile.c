/*
 * XREFs of MiDeletePagefile @ 0x1406B78F4
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     MiDeletePagingFiles @ 0x1406B79FC (MiDeletePagingFiles.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x140014FCC (MiFreeModWriterEntry.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     MiFreePageFileHashPfns @ 0x140083F7C (MiFreePageFileHashPfns.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MiUpdatePageFileList @ 0x140159DA0 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x140223E48 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 */

void __fastcall MiDeletePagefile(char *P, __int64 a2, __int64 a3)
{
  int v3; // ebp
  _QWORD **v4; // rdi
  __int64 v6; // rsi
  struct _PRIVILEGE_SET *v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  v3 = a2;
  v4 = (_QWORD **)(P + 64);
  v6 = 2LL;
  do
  {
    if ( *v4 )
      MiFreeModWriterEntry(*v4, 0);
    ++v4;
    --v6;
  }
  while ( v6 );
  v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v7 )
    MiDeleteSubsection(v7);
  v8 = *((_QWORD *)P + 27);
  if ( v8 )
    MiReleasePageHash(v8, *((_DWORD *)P + 2));
  MiFreePageFileHashPfns(*((_QWORD *)P + 32), a2, a3);
  if ( (*((_WORD *)P + 102) & 0x100) != 0 )
    MiUpdatePageFileList((__int64)P, 0);
  if ( (*((_WORD *)P + 102) & 0x200) != 0 )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 7), 0);
  v9 = (void *)*((_QWORD *)P + 28);
  if ( v9 )
    ObCloseHandle(v9, 0);
  v10 = (void *)*((_QWORD *)P + 7);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = (void *)*((_QWORD *)P + 13);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (void *)*((_QWORD *)P + 24);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
