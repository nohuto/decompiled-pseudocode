/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x140214A74
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiLogContinueTrim @ 0x140215130 (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int i; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v21; // rax

  v3 = a1[693];
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 2) - 2) <= 1u )
  {
    v21 = *(_QWORD *)(v3 + 2368);
    if ( *(_QWORD *)(a2 + 96) < v21 )
      *(_QWORD *)(v3 + 2368) = v21 - *(_QWORD *)(a2 + 80);
    else
      *(_QWORD *)(v3 + 2368) = 0LL;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v7 = a1[720];
  if ( v7 >= *(_QWORD *)(a2 + 72) )
    return 1LL;
  v8 = 0LL;
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
  v9 = (_QWORD *)(v3 + 2424);
  v10 = a2 - v3;
  v11 = 0LL;
  for ( i = 0; i < 8; ++i )
  {
    v13 = *(_QWORD *)((char *)v9 + v10 - 2416);
    *v9 = v13;
    if ( i >= 6 )
      v11 += v13;
    ++v9;
  }
  *(_QWORD *)(v3 + 2416) = v11;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  __writecr8(a3->OldIrql);
  if ( a1[768] < 0x420uLL )
  {
    ++*(_DWORD *)(v3 + 2568);
  }
  else
  {
    ++*(_DWORD *)(v3 + 2564);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v14 = a1[720];
  v15 = *(_QWORD *)(a2 + 72);
  if ( v14 >= v15 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, a3);
    return 1LL;
  }
  v16 = v15 - v14;
  v17 = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
  if ( (unsigned int)v17 < 8 )
  {
    v18 = (_QWORD *)(v3 + 2424 + 8 * v17);
    v19 = (unsigned int)(8 - v17);
    do
    {
      v8 += *v18++;
      --v19;
    }
    while ( v19 );
  }
  memset((void *)(a2 + 8), 0, 0x40uLL);
  if ( v8 < v16 + 256 || *(_BYTE *)a2 >= 0x80u )
    *(_BYTE *)a2 ^= (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    *(_BYTE *)a2 |= 0x80u;
  MiLogContinueTrim(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, a3);
  return 0LL;
}
