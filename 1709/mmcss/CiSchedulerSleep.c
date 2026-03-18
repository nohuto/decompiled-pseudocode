/*
 * XREFs of CiSchedulerSleep @ 0x1C000324C
 * Callers:
 *     CiSchedulerWait @ 0x1C00038B4 (CiSchedulerWait.c)
 * Callees:
 *     CiLogSchedulerSleep @ 0x1C00018A8 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0001924 (CiLogSchedulerWakeup.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C70 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerUpdateTimer @ 0x1C000381C (CiSchedulerUpdateTimer.c)
 */

__int64 __fastcall CiSchedulerSleep(int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int32 i; // eax
  __int64 result; // rax
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  if ( qword_1C00061B8 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  LOBYTE(a3) = 0;
  v6 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  qword_1C00061B8 = v4 + MEMORY[0xFFFFF78000000008];
  byte_1C00061C4 = 0;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v6 + 24) > (unsigned __int64)(v4 + MEMORY[0xFFFFF78000000008]) )
      {
        v7 = *(_QWORD *)v6;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_15;
          v7 ^= v6;
        }
        if ( !v7 )
        {
LABEL_15:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_9;
          v7 ^= v6;
        }
        if ( !v7 )
        {
LABEL_9:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v6 = v7;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v6, a3, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer();
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C00062A8 )
    CiLogSchedulerSleep(a1, v4);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v10 = i;
    if ( !i )
      KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
    if ( CiSchedulerProcessDeadlines(&v10) )
      break;
    if ( byte_1C00062A8 )
      CiLogSchedulerWakeup(v10);
  }
  result = v10;
  *v3 = v10;
  return result;
}
