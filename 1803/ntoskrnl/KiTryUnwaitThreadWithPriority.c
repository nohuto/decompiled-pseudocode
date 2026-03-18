/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x140128300
 * Callers:
 *     KiWakePriQueueWaiter @ 0x14008FB10 (KiWakePriQueueWaiter.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 * Callees:
 *     KiSignalThread @ 0x14002F9B0 (KiSignalThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v5; // rbx
  unsigned __int8 v7; // si
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 v11; // al
  __int64 v12; // r8
  struct _KDPC *v13; // rcx
  int v14; // edx
  char v15; // al
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  int v21; // edx
  PVOID *v22; // r8
  PVOID *p_SystemArgument2; // r9
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+58h] [rbp+10h] BYREF
  int v28; // [rsp+68h] [rbp+20h]

  v28 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v27 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v24 = SchedulerAssist[5];
      SchedulerAssist[5] = v24 + 1;
      if ( v24 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v27);
    while ( *(_QWORD *)(v5 + 64) );
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v11 = v28;
    v12 = (unsigned __int8)*(_DWORD *)(v5 + 540);
    if ( (_DWORD)v12 != v28 )
    {
      v21 = *(_DWORD *)(v5 + 540) & 0x100;
      if ( !v21 )
      {
        v25 = *(_QWORD *)(v5 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v25 + 4 * v12 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 4LL * v28 + 536));
        v11 = v28;
      }
      *(_DWORD *)(v5 + 540) = v21 | v11;
    }
    v7 = KiSignalThread(a1, v5, a3, a2);
    if ( v7 )
    {
      *(_BYTE *)(v5 + 645) = 0;
      v13 = (struct _KDPC *)KeGetCurrentPrcb();
      v14 = v28;
      if ( (char)v28 < *(char *)(v5 + 563) )
      {
        if ( *(_BYTE *)(v5 + 1423) )
        {
          v22 = (PVOID *)(v5 + 1384);
          if ( *(_QWORD *)(v5 + 1384) == 1LL )
          {
            p_SystemArgument2 = &v13[401].SystemArgument2;
            if ( v13 != (struct _KDPC *)-25712LL )
            {
              *v22 = *p_SystemArgument2;
              *p_SystemArgument2 = v22;
              _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1420));
              KiAbQueueAutoBoostDpc(v13);
              v14 = v28;
            }
          }
        }
      }
      v15 = *(_BYTE *)(v5 + 564);
      *(_BYTE *)(v5 + 563) = v14;
      if ( v15 )
      {
        if ( (v15 & 0xF) != 0 )
        {
          v14 = v28;
          *(_DWORD *)(v5 + 1424) = MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(v5 + 564) = 0;
      }
      if ( v14 != *(char *)(v5 + 195) )
      {
        v19 = *(_QWORD *)(v5 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        v20 = v28;
        *(_QWORD *)(v5 + 32) = v19;
        KiSetPriorityThread(v5, 0LL, v20);
      }
    }
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v26 = v17[5] - 1;
      v17[5] = v26;
      if ( !v26 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
        KiPerformUnboostKick(v16);
    }
  }
  result = v7;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
