/*
 * XREFs of MiDeletePagefile @ 0x14074E938
 * Callers:
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     MiDeletePagingFiles @ 0x14074EA48 (MiDeletePagingFiles.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     MiFreePageFileHashPfns @ 0x140080B6C (MiFreePageFileHashPfns.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiFreeModWriterEntry @ 0x140134EFC (MiFreeModWriterEntry.c)
 *     MiUpdatePageFileList @ 0x14017DF20 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x14026BFA8 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 */

void __fastcall MiDeletePagefile(char *P, __int64 a2)
{
  int v2; // ebp
  _QWORD **v3; // rdi
  __int64 v5; // rsi
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  __int16 v8; // ax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  v2 = a2;
  v3 = (_QWORD **)(P + 64);
  v5 = 2LL;
  do
  {
    if ( *v3 )
      MiFreeModWriterEntry(*v3, 0);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *((_QWORD *)P + 27);
  if ( v7 )
    MiReleasePageHash(v7, *((_DWORD *)P + 2));
  MiFreePageFileHashPfns(*((_QWORD *)P + 32), a2);
  v8 = *((_WORD *)P + 102);
  if ( (v8 & 0x100) != 0 )
  {
    MiUpdatePageFileList((__int64)P, 0);
    v8 = *((_WORD *)P + 102);
  }
  if ( (v8 & 0x200) != 0 )
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
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
