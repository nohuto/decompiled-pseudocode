/*
 * XREFs of PsInsertPermanentSiloContextEx @ 0x1405A3A00
 * Callers:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1405A3938 (CmpGetOrCreateContextForSiloNoRef.c)
 *     PsInsertPermanentSiloContext @ 0x1405A39F0 (PsInsertPermanentSiloContext.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspStorageInsertObject @ 0x1405A3ACC (PspStorageInsertObject.c)
 *     PspIsSiloContext @ 0x1405A3BE0 (PspIsSiloContext.c)
 *     PspJobHasChildren @ 0x1406E1704 (PspJobHasChildren.c)
 */

__int64 __fastcall PsInsertPermanentSiloContextEx(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  __int64 v8; // r8
  char v9; // r9
  _QWORD *v10; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int inserted; // esi

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v7 = qword_1403FA958;
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
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
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
