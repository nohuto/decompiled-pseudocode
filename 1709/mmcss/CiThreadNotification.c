/*
 * XREFs of CiThreadNotification @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadCleanup @ 0x1C000A884 (CiThreadCleanup.c)
 *     CiThreadDereference @ 0x1C000AD58 (CiThreadDereference.c)
 */

void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // ecx
  unsigned __int64 v8; // rcx

  if ( Create )
    return;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v5 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_9;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 + 56);
    if ( (unsigned __int64)CurrentThread >= v6 )
      v7 = (unsigned __int64)CurrentThread > v6;
    else
      v7 = -1;
    if ( v7 < 0 )
    {
      v8 = *(_QWORD *)v5;
      if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v8 )
        goto LABEL_19;
      goto LABEL_7;
    }
    if ( v7 <= 0 )
      break;
    v8 = *(_QWORD *)(v5 + 8);
    if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v8 )
    {
LABEL_19:
      v5 ^= v8;
      goto LABEL_8;
    }
LABEL_7:
    v5 = v8;
LABEL_8:
    if ( !v5 )
      goto LABEL_9;
  }
  if ( v5 )
  {
    v4 = (_QWORD *)(v5 - 40);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 40 + 32)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_9:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  if ( v4 )
  {
    CiThreadCleanup(v4);
    CiThreadDereference(v4);
  }
}
