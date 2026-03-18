/*
 * XREFs of KiSignalThread @ 0x14002F9B0
 * Callers:
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KeAlertThreadByThreadId @ 0x140062644 (KeAlertThreadByThreadId.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140128300 (KiTryUnwaitThreadWithPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = SchedulerAssist[5];
          SchedulerAssist[5] = v19 + 1;
          if ( v19 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 22800), 0LL) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v21);
        while ( *(_QWORD *)(v11 + 22800) );
        LOBYTE(v18) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, v18);
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v14 = *(_QWORD *)(a2 + 216);
        v15 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v14 + 8) != a2 + 216 || *v15 != a2 + 216 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 22800), 0LL);
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v20 = v17[5] - 1;
          v17[5] = v20;
          if ( !v20 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
            KiPerformUnboostKick(v16);
        }
      }
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
