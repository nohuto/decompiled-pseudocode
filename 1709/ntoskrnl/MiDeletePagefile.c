/*
 * XREFs of MiDeletePagefile @ 0x1406E4538
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     MiDeletePagingFiles @ 0x1406E4640 (MiDeletePagingFiles.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiFreeModWriterEntry @ 0x1400EFDA4 (MiFreeModWriterEntry.c)
 *     MiFreePageFileHashPfns @ 0x1400F0478 (MiFreePageFileHashPfns.c)
 *     MiUpdatePageFileList @ 0x14014FF48 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x1402326F8 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 */

void __fastcall MiDeletePagefile(char *P, int a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD **v5; // rdi
  __int64 v7; // rsi
  struct _PRIVILEGE_SET *v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  v5 = (_QWORD **)(P + 64);
  v7 = 2LL;
  do
  {
    if ( *v5 )
      MiFreeModWriterEntry(*v5, 0);
    ++v5;
    --v7;
  }
  while ( v7 );
  v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v8 )
    MiDeleteSubsection(v8);
  v9 = *((_QWORD *)P + 27);
  if ( v9 )
    MiReleasePageHash(v9, *((_DWORD *)P + 2), a3, a4);
  MiFreePageFileHashPfns(*((_QWORD *)P + 32));
  if ( (*((_WORD *)P + 102) & 0x100) != 0 )
    MiUpdatePageFileList((__int64)P, 0);
  if ( (*((_WORD *)P + 102) & 0x200) != 0 )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 7), 0);
  v10 = (void *)*((_QWORD *)P + 28);
  if ( v10 )
    ObCloseHandle(v10, 0);
  v11 = (void *)*((_QWORD *)P + 7);
  if ( v11 )
    ObfDereferenceObject(v11);
  v12 = (void *)*((_QWORD *)P + 13);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = (void *)*((_QWORD *)P + 24);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( a2 )
    ExFreePoolWithTag(P, 0);
}
