/*
 * XREFs of VidSchFlushAdapter @ 0x1C00AB9E0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00AAA90 (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1C00ACAA0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C0002224 (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C00022EC (VidSchiClearFlipDevice.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchIsWorkerThread @ 0x1C00108D0 (VidSchIsWorkerThread.c)
 *     VidSchiGetSchedulerStatus @ 0x1C0012FAC (VidSchiGetSchedulerStatus.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0026340 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x1C00282A8 (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x1C0028350 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0028820 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0028CCC (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C002AAF8 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x1C004F99C (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x1C006C7C0 (VidSchResumeAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0071334 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00AA728 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiHandleControlEvent @ 0x1C00AAA90 (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00AB6B4 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiBlockDriverCallback @ 0x1C00AD7C0 (VidSchiBlockDriverCallback.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C00AD81C (VidSchiCleanupQueuedCommand.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // esi
  int v5; // r13d
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r12d
  struct _VIDSCH_GLOBAL *i; // r14
  __int64 v11; // rcx
  _QWORD v12[20]; // [rsp+38h] [rbp-69h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 18) && CurrentThread != *((struct _KTHREAD **)a1 + 19) )
        *((_BYTE *)a1 + 2844) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( v3 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || (v9 = 0, v3 == 15) )
          v9 = 1;
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          if ( *((_DWORD *)a1 + 705) == 3 )
          {
            VidSchiBlockDriverCallback(a1);
            *((_DWORD *)a1 + 9) = 23;
            *((_QWORD *)a1 + 51) = 0LL;
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue((__int64)a1);
        }
        if ( v3 == 15 || *((_DWORD *)a1 + 705) == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjects((unsigned __int64)a1, 0);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 31);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 248);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice((__int64)i - 80);
        }
        VidSchResumeAdapter((__int64)a1, 0);
        if ( v9 )
        {
          VidSchiUnwaitAllContexts((__int64)a1);
          VidSchiClearFlipDevice(a1, 0LL, 9);
        }
        VidSchiCleanupQueuedCommand(a1);
        if ( (unsigned int)(*((_DWORD *)a1 + 67) - 2) > 1 )
          VidSchiHandleControlEvent(a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 665LL) )
    {
      v5 = VidSchiRequestSchedulerStatus((__int64)a1, 3, 1);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v11, (__int64)a1, v3);
      if ( v5 >= 0 && (v3 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || v3 == 15 )
          VidSchiUnwaitAllContexts((__int64)a1);
        if ( *((_DWORD *)a1 + 237) )
        {
          memset(v12, 0, sizeof(v12));
          LODWORD(v12[4]) |= 4u;
          LODWORD(v12[2]) = 1;
          v12[5] = (char *)a1 + 948;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x1Au);
        }
        if ( *((_DWORD *)a1 + 240) )
        {
          memset(v12, 0, sizeof(v12));
          LODWORD(v12[4]) |= 4u;
          LODWORD(v12[2]) = 3;
          v12[5] = (char *)a1 + 960;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x19u);
        }
        if ( v3 != 5 )
        {
          VidSchiClearFlipDevice(a1, 0LL, 9);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 238, (_DWORD *)a1 + 240);
        }
      }
    }
    LOBYTE(v2) = v3 == 15;
    _InterlockedOr((volatile signed __int32 *)a1 + 1423, v2);
    return (unsigned int)v5;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
