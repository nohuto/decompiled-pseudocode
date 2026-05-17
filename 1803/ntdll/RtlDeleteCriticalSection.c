/*
 * XREFs of RtlDeleteCriticalSection @ 0x180029D90
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     RtlDeleteResource @ 0x180029F00 (RtlDeleteResource.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x1800F7A40 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029E80 @ 0x180029E80 (sub_180029E80.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800F6A80 @ 0x1800F6A80 (sub_1800F6A80.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax

  v5 = a1[3];
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v6 = ZwClose(v5);
  else
    v6 = 0;
  v7 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D258, a2, a3, a4);
    v10 = v7 + 16;
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
    {
      v12 = *(_QWORD **)(v7 + 24);
      if ( *(_QWORD *)(v11 + 8) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    RtlReleaseSRWLockExclusive(&qword_18015D258);
    v13 = sub_180029E80(*(unsigned __int16 *)(v7 + 2), *(unsigned __int16 *)(v7 + 44));
    if ( v13 && qword_18015AA50 )
      sub_1800F6A80(qword_18015AA50, v13);
    memset((void *)v7, 0, 0x30uLL);
    if ( !v9 )
      sub_180029EA4((PSLIST_ENTRY)v7);
  }
  memset(a1, 0, 0x28uLL);
  return v6;
}
