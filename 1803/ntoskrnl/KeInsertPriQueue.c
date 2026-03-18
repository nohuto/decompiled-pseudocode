/*
 * XREFs of KeInsertPriQueue @ 0x14008F920
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14008F7AC (ExpTryQueueWorkItem.c)
 * Callees:
 *     KiWakePriQueueWaiter @ 0x14008FB10 (KiWakePriQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 */

__int64 __fastcall KeInsertPriQueue(__int64 a1, __int64 *a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r15
  _QWORD *v6; // rbx
  unsigned __int8 v8; // bp
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rdi
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 *v17; // rbx
  int v18; // ecx
  __int64 v20; // rcx
  __int64 **v21; // rax

  v5 = a3;
  v6 = (_QWORD *)(a1 + 8);
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  KiAcquireKobjectLockSafe(a1);
  if ( (_QWORD *)*v6 != v6
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v12 = 0;
    v13 = a1 + 664;
    v14 = 32LL;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v13 - 4);
      v13 -= 4LL;
      v12 += v15;
      --v14;
      v16 = *(_DWORD *)(a1 + 664);
      if ( v12 >= v16 )
        break;
      if ( v14 <= v5 )
      {
        if ( v12 >= v16 )
          break;
        v17 = a2;
        v8 = KiWakePriQueueWaiter(CurrentPrcb, a1, a2, (unsigned int)v5);
        if ( !v8 )
          goto LABEL_13;
        goto LABEL_8;
      }
    }
  }
  v17 = a2;
LABEL_13:
  if ( (a5 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v20 = 16 * v5 + a1 + 24;
    v21 = *(__int64 ***)(v20 + 8);
    if ( *v21 != (__int64 *)v20 )
      __fastfail(3u);
    *v17 = v20;
    v17[1] = (__int64)v21;
    *v21 = v17;
    *(_QWORD *)(v20 + 8) = v17;
  }
LABEL_8:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
    v18 = 3;
  else
    v18 = 0;
  KiExitDispatcher((_DWORD)CurrentPrcb, v18, 1, 0, CurrentIrql);
  return v8;
}
