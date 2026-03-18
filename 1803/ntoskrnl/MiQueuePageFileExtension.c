/*
 * XREFs of MiQueuePageFileExtension @ 0x14025FD2C
 * Callers:
 *     MiContractPagingFiles @ 0x140070440 (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x14025F94C (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x14026BA30 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2, KIRQL a3)
{
  __int64 v3; // rbx
  KIRQL v4; // si
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r9

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  if ( a3 == 17 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1280));
  v7 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v8 = *(_QWORD **)(v3 + 1512);
    if ( *v8 != v3 + 1504 )
      __fastfail(3u);
    *v7 = v3 + 1504;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v7;
    *(_QWORD *)(v3 + 1512) = v7;
  }
  else
  {
    v9 = *(_QWORD **)(v3 + 1528);
    if ( *v9 != v3 + 1520 )
      __fastfail(3u);
    *v7 = v3 + 1520;
    *(_QWORD *)(a1 + 16) = v9;
    *v9 = v7;
    *(_QWORD *)(v3 + 1528) = v7;
    if ( *(_QWORD *)(a1 + 32) != -1LL )
      ++*(_DWORD *)(v3 + 1788);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
  __writecr8(v4);
  return KeReleaseSemaphoreEx(v3 + 1456, 0, 1, v10, a2);
}
