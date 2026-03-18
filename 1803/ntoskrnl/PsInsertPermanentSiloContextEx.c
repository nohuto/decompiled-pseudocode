/*
 * XREFs of PsInsertPermanentSiloContextEx @ 0x140620658
 * Callers:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140620584 (CmpGetOrCreateContextForSiloNoRef.c)
 *     PsInsertPermanentSiloContext @ 0x140620640 (PsInsertPermanentSiloContext.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x140537038 (PspLockJobShared.c)
 *     PspStorageInsertObject @ 0x140620724 (PspStorageInsertObject.c)
 *     PspIsSiloContext @ 0x140620838 (PspIsSiloContext.c)
 *     PspJobHasChildren @ 0x14077BA58 (PspJobHasChildren.c)
 */

__int64 __fastcall PsInsertPermanentSiloContextEx(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  __int64 v8; // r8
  char v9; // r9
  _QWORD *v10; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int inserted; // esi

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v7 = qword_140466978;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 1288);
  if ( (unsigned __int8)PspIsSiloContext(a3) )
  {
    v10 = (*(_BYTE *)(v8 - 48 + 26) & 0x40) != 0
        ? (_QWORD *)(*(_QWORD *)(v8 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v8 - 48 + 26) & 0x7F]) + 32LL)
        : 0LL;
    if ( *v10 != a1 )
      return 3221225485LL;
  }
  if ( (v9 & 1) != 0 )
  {
    if ( !a1 )
      return 3221225520LL;
    CurrentThread = KeGetCurrentThread();
    PspLockJobShared(a1, (__int64)CurrentThread);
    if ( (unsigned __int8)PspJobHasChildren(a1) )
    {
      inserted = -1073740529;
      goto LABEL_11;
    }
  }
  else
  {
    CurrentThread = 0LL;
  }
  LOBYTE(v8) = 1;
  inserted = PspStorageInsertObject(v7, a2, v8, a3);
LABEL_11:
  if ( CurrentThread )
    PspUnlockJob(a1, (__int64)CurrentThread);
  return inserted;
}
