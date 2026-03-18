/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x140259334
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLogContinueTrim @ 0x14025990C (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  char v21; // cl
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdi

  v3 = a1[846];
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 2) - 2) <= 1u )
  {
    v23 = *(_QWORD *)(v3 + 2368);
    if ( *(_QWORD *)(a2 + 96) < v23 )
      v24 = v23 - *(_QWORD *)(a2 + 80);
    else
      v24 = 0LL;
    *(_QWORD *)(v3 + 2368) = v24;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v7 = a1[880];
  if ( v7 >= *(_QWORD *)(a2 + 72) )
    return 1LL;
  if ( *(_QWORD *)(a2 + 96) >= *(_QWORD *)(a2 + 80) )
  {
    if ( v7 < 0x420 )
    {
      *(_QWORD *)(a2 + 96) = 0LL;
      goto LABEL_7;
    }
    return 1LL;
  }
LABEL_7:
  v8 = 0LL;
  v9 = (_QWORD *)(v3 + 2424);
  v10 = 0;
  v11 = a2 - v3;
  do
  {
    v12 = *(_QWORD *)((char *)v9 + v11 - 2416);
    *v9++ = v12;
    v13 = v12 + v8;
    if ( v10 < 6 )
      v13 = v8;
    ++v10;
    v8 = v13;
  }
  while ( v10 < 8 );
  *(_QWORD *)(v3 + 2416) = v13;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  __writecr8(a3->OldIrql);
  if ( a1[928] < 0x420uLL )
  {
    ++*(_DWORD *)(v3 + 2576);
  }
  else
  {
    ++*(_DWORD *)(v3 + 2572);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v14 = a1[880];
  v15 = *(_QWORD *)(a2 + 72);
  if ( v14 >= v15 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, a3);
    return 1LL;
  }
  v16 = v15 - v14;
  v17 = 0LL;
  v18 = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
  if ( (unsigned int)v18 < 8 )
  {
    v19 = (_QWORD *)(v3 + 2424 + 8 * v18);
    v20 = (unsigned int)(8 - v18);
    do
    {
      v17 += *v19++;
      --v20;
    }
    while ( v20 );
  }
  memset((void *)(a2 + 8), 0, 0x40uLL);
  if ( v17 < v16 + 256 || *(char *)a2 < 0 )
    v21 = *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    v21 = *(_BYTE *)a2 | 0x80;
  *(_BYTE *)a2 = v21;
  MiLogContinueTrim(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, a3);
  return 0LL;
}
