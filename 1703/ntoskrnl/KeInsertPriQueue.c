/*
 * XREFs of KeInsertPriQueue @ 0x1400689F0
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x140130680 (ExTryQueueWorkItemFromIo.c)
 *     ExpQueueWorkItemNode @ 0x14025D868 (ExpQueueWorkItemNode.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiWakePriQueueWaiter @ 0x140068B20 (KiWakePriQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
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
  __int64 *v16; // rbx
  int v17; // ecx
  __int64 v19; // rcx
  __int64 **v20; // rax

  v5 = a3;
  v6 = (_QWORD *)(a1 + 8);
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
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
      if ( v12 >= *(_DWORD *)(a1 + 664) )
        break;
      if ( v14 <= v5 )
      {
        if ( v12 >= *(_DWORD *)(a1 + 664) )
          break;
        v16 = a2;
        v8 = KiWakePriQueueWaiter(CurrentPrcb, a1, a2, (unsigned int)v5);
        if ( !v8 )
          goto LABEL_13;
        goto LABEL_8;
      }
    }
  }
  v16 = a2;
LABEL_13:
  if ( (a5 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v19 = 16 * v5 + a1 + 24;
    v20 = *(__int64 ***)(v19 + 8);
    if ( *v20 != (__int64 *)v19 )
      __fastfail(3u);
    *v16 = v19;
    v16[1] = (__int64)v20;
    *v20 = v16;
    *(_QWORD *)(v19 + 8) = v16;
  }
LABEL_8:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
    v17 = 3;
  else
    v17 = 0;
  KiExitDispatcher((_DWORD)CurrentPrcb, v17, 1, 0, CurrentIrql);
  return v8;
}
