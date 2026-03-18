/*
 * XREFs of MiFlushComplete @ 0x14021FAB0
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14021FC34 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1400A50D0 (MiUnlockMdlWritePages.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021FBC0 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rbp
  __int64 *v8; // rax
  LONG result; // eax
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 72);
  if ( (*(_WORD *)(v4 + 10) & 0x200) != 0 )
    MiRetardMdl(v4);
  v7 = v4
     + 48
     + 8LL
     * (unsigned int)((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
                     + (unsigned __int64)*(unsigned int *)(v4 + 40)
                     + 4095) >> 12);
  if ( (*(_BYTE *)(v4 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  MiUnlockMdlWritePages((_QWORD *)(v4 + 48), v7, (_DWORD *)a2, a4);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v8 = MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v8 )
    MiReleaseControlAreaWaiters(v8);
  if ( v4 != a1 + 80 )
  {
    ExFreePoolWithTag((PVOID)v4, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v10 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v10);
  }
  return result;
}
