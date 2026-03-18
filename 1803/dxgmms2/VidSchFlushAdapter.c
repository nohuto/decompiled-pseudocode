/*
 * XREFs of VidSchFlushAdapter @ 0x1C00BCEF0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00BBDA8 (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0004120 (VidSchiGetSchedulerStatus.c)
 *     VidSchIsWorkerThread @ 0x1C0004C00 (VidSchIsWorkerThread.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiInterlockedReadUlong @ 0x1C0012B74 (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0012C3C (VidSchiClearFlipDevice.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002B2E4 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x1C002D43C (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x1C002D4E4 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C002D87C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002DBEC (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C0033DFC (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0078FEC (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x1C0079420 (VidSchResumeAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C007C188 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00BBA10 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiHandleControlEvent @ 0x1C00BBDA8 (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00BCBBC (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiBlockDriverCallback @ 0x1C00BFB00 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // esi
  int v5; // r12d
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDSCH_GLOBAL *i; // r14
  __int64 v10; // rcx
  _QWORD v11[20]; // [rsp+38h] [rbp-59h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 18) && CurrentThread != *((struct _KTHREAD **)a1 + 19) )
        *((_BYTE *)a1 + 2884) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( v3 )
      {
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          if ( *((_DWORD *)a1 + 715) == 3 )
          {
            VidSchiBlockDriverCallback(a1);
            *((_DWORD *)a1 + 9) = 23;
            *((_QWORD *)a1 + 54) = 0LL;
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue((__int64)a1);
        }
        if ( v3 == 15 || *((_DWORD *)a1 + 715) == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjects((__int64)a1, 0);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 34);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 272);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice((__int64)i - 104);
        }
        VidSchResumeAdapter((__int64)a1, 0);
        VidSchiUnwaitAllContexts((__int64)a1);
        VidSchiClearFlipDevice(a1, 0LL, 9u);
        VidSchiCleanupQueuedCommand(a1);
        if ( (unsigned int)(*((_DWORD *)a1 + 73) - 2) > 1 )
          VidSchiHandleControlEvent((__int64)a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 777LL) )
    {
      v5 = VidSchiRequestSchedulerStatus((__int64)a1, 3, 1);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v10, (__int64)a1, v3);
      if ( v5 >= 0 && (v3 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || v3 == 15 )
          VidSchiUnwaitAllContexts((__int64)a1);
        if ( *((_DWORD *)a1 + 241) )
        {
          memset(v11, 0, sizeof(v11));
          LODWORD(v11[4]) |= 0x10u;
          LODWORD(v11[2]) = 1;
          v11[5] = (char *)a1 + 964;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v11, 0x1Au);
        }
        if ( *((_DWORD *)a1 + 244) )
        {
          memset(v11, 0, sizeof(v11));
          LODWORD(v11[4]) |= 0x10u;
          LODWORD(v11[2]) = 3;
          v11[5] = (char *)a1 + 976;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v11, 0x19u);
        }
        if ( v3 != 5 )
        {
          VidSchiClearFlipDevice(a1, 0LL, 9u);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 241, (_DWORD *)a1 + 244);
        }
      }
    }
    LOBYTE(v2) = v3 == 15;
    _InterlockedOr((volatile signed __int32 *)a1 + 1599, v2);
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
