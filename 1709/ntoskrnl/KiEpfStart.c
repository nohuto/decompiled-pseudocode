/*
 * XREFs of KiEpfStart @ 0x14020CF54
 * Callers:
 *     KiEpfHandleNotification @ 0x14020CF30 (KiEpfHandleNotification.c)
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x140060E90 (KeSetKernelStackSwapEnable.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 */

void __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rcx
  char v5; // di
  signed __int32 v6; // edx
  _QWORD *v7; // rax
  int v8; // eax
  BOOLEAN v9; // bl
  _QWORD v10[3]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+3Ah] [rbp-16h]
  int v13; // [rsp+3Ch] [rbp-14h]
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF

  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v14[1] = v14;
  v14[0] = v14;
  v10[2] = a1;
  v11 = 263;
  v12 = 6;
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
LABEL_3:
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[8] = 1;
    goto LABEL_5;
  }
  if ( CurrentThread == CurrentPrcb->IdleThread )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    goto LABEL_3;
  }
  v7 = *(_QWORD **)(v2 + 8);
  v5 = 1;
  if ( *v7 != v2 )
    __fastfail(3u);
  v10[1] = *(_QWORD *)(v2 + 8);
  v10[0] = v2;
  *v7 = v10;
  *(_QWORD *)(v2 + 8) = v10;
LABEL_6:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_14036A7D0);
    v6 = _InterlockedIncrement(&dword_14036A7D4);
    do
      v8 = dword_14036A7D8;
    while ( dword_14036A7D8 < v6 && v8 != _InterlockedCompareExchange(&dword_14036A7D8, v6, dword_14036A7D8) );
    v9 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v11, 0x27u);
    KeSetKernelStackSwapEnable(v9);
    _InterlockedDecrement(&dword_14036A7D4);
  }
}
