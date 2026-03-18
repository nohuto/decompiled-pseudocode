/*
 * XREFs of CiSchedulerSleep @ 0x1C0003278
 * Callers:
 *     CiSchedulerWait @ 0x1C0003944 (CiSchedulerWait.c)
 * Callees:
 *     CiLogSchedulerSleep @ 0x1C0001878 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C00018F4 (CiLogSchedulerWakeup.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C60 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerUpdateTimer @ 0x1C000388C (CiSchedulerUpdateTimer.c)
 */

__int64 __fastcall CiSchedulerSleep(int a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int32 i; // eax
  __int64 result; // rax
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( qword_1C00061B8 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  byte_1C00061C4 = 0;
  qword_1C00061B8 = MEMORY[0xFFFFF78000000008] + v4;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v7 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    else
      v7 = 0LL;
  }
  LOBYTE(v6) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) > (unsigned __int64)(MEMORY[0xFFFFF78000000008] + v4) )
      {
        v8 = *(_QWORD *)v7;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_19:
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_13;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_13:
          LOBYTE(v6) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, v6, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer();
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C00062B0 )
    CiLogSchedulerSleep(a1, v4);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v11 = i;
    if ( !i )
      KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
    if ( CiSchedulerProcessDeadlines(&v11) )
      break;
    if ( byte_1C00062B0 )
      CiLogSchedulerWakeup(v11);
  }
  result = v11;
  *a3 = v11;
  return result;
}
