/*
 * XREFs of MiQueuePageFileExtension @ 0x140226B10
 * Callers:
 *     MiContractPagingFiles @ 0x1400B866C (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x140230AC0 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, __int64 a2, KIRQL a3)
{
  __int64 v3; // rbx
  KIRQL v4; // si
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  if ( a3 == 17 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1280));
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    v7 = *(_QWORD **)(v3 + 1504);
    if ( *v7 != v3 + 1496 )
      __fastfail(3u);
    *v6 = v3 + 1496;
    v6[1] = v7;
    *v7 = v6;
    *(_QWORD *)(v3 + 1504) = v6;
  }
  else
  {
    v8 = *(_QWORD **)(v3 + 1520);
    v9 = (_QWORD *)(a1 + 8);
    if ( *v8 != v3 + 1512 )
      __fastfail(3u);
    *v9 = v3 + 1512;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v9;
    *(_QWORD *)(v3 + 1520) = v9;
    if ( *(_QWORD *)(a1 + 32) != -1LL )
      ++*(_DWORD *)(v3 + 1788);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
  __writecr8(v4);
  return KeReleaseSemaphoreEx(v3 + 1448, 0, 1);
}
