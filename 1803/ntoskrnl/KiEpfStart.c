/*
 * XREFs of KiEpfStart @ 0x14024B2D4
 * Callers:
 *     KiEpfHandleNotification @ 0x14024B2B0 (KiEpfHandleNotification.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KeSetKernelStackSwapEnable @ 0x1400B71D0 (KeSetKernelStackSwapEnable.c)
 */

void __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rax
  char v5; // di
  signed __int32 v6; // edx
  _BYTE *v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  BOOLEAN v10; // bl
  _QWORD v11[3]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+3Ah] [rbp-16h]
  int v14; // [rsp+3Ch] [rbp-14h]
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF

  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v15[1] = v15;
  v15[0] = v15;
  v11[2] = a1;
  v12 = 263;
  v13 = 6;
  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( *(int *)(v2 + 24) > 0 )
  {
LABEL_5:
    --*(_DWORD *)(v2 + 24);
    v5 = 0;
    goto LABEL_6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !KiEpfCompletionQueue )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[24] = 1;
    goto LABEL_5;
  }
  if ( CurrentThread == CurrentPrcb->IdleThread )
  {
    v7 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v7 )
      v7[24] = 1;
    goto LABEL_5;
  }
  v8 = *(_QWORD **)(v2 + 8);
  v5 = 1;
  if ( *v8 != v2 )
    __fastfail(3u);
  v11[1] = *(_QWORD *)(v2 + 8);
  v11[0] = v2;
  *v8 = v11;
  *(_QWORD *)(v2 + 8) = v11;
LABEL_6:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_1403AD930);
    v6 = _InterlockedIncrement(&dword_1403AD934);
    do
      v9 = dword_1403AD938;
    while ( dword_1403AD938 < v6 && v9 != _InterlockedCompareExchange(&dword_1403AD938, v6, dword_1403AD938) );
    v10 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v12, 0x27u);
    KeSetKernelStackSwapEnable(v10);
    _InterlockedDecrement(&dword_1403AD934);
  }
}
