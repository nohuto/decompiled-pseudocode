/*
 * XREFs of KeQueryValuesThread @ 0x1400FE540
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     PsQueryStatisticsProcess @ 0x1405A1840 (PsQueryStatisticsProcess.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v8; // esi
  __int64 v9; // rbp
  volatile signed __int32 *v10; // r14
  char v11; // al
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  struct _KPRCB *v16; // r12
  __int64 v17; // r12
  struct _KPRCB *v18; // r13
  __int64 v19; // r12
  struct _KPRCB *v20; // rbp
  __int64 v21; // rax
  struct _KPRCB *v22; // r13
  int v23; // eax
  int v24; // eax
  int v25[6]; // [rsp+20h] [rbp-58h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF
  int v28; // [rsp+90h] [rbp+18h] BYREF
  int v29; // [rsp+98h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v23 = SchedulerAssist[5];
      SchedulerAssist[5] = v23 + 1;
      if ( v23 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(a1 + 64) );
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 6) = 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 5 )
      {
        v11 = *(_BYTE *)(a1 + 112) & 7;
        if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
          goto LABEL_6;
        LOBYTE(v8) = 2;
        goto LABEL_17;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_17:
        v15 = *(unsigned int *)(a1 + 536);
        if ( (int)v15 >= 0 )
        {
          v16 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v15];
          v25[0] = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v16, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v16, 0);
            do
              KeYieldProcessorEx(v25);
            while ( *(_QWORD *)(v9 + 48) );
          }
          if ( a1 == *(_QWORD *)(v9 + 8) )
            goto LABEL_6;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
LABEL_22:
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_6;
        v17 = *(unsigned int *)(a1 + 536);
        if ( (int)v17 >= 0 )
        {
          v18 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v17];
          v27 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v18, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v18, 0);
            do
              KeYieldProcessorEx(&v27);
            while ( *(_QWORD *)(v9 + 48) );
          }
          if ( a1 == *(_QWORD *)(v9 + 16) )
            goto LABEL_6;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
            __fastfail(0x1Eu);
          goto LABEL_31;
        }
      }
    }
    v19 = *(unsigned int *)(a1 + 536);
    if ( (int)v19 < 0 )
      break;
    v22 = KeGetCurrentPrcb();
    v9 = KiProcessorBlock[v19];
    v29 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v22, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v22, 0);
      do
        KeYieldProcessorEx(&v29);
      while ( *(_QWORD *)(v9 + 48) );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v19 )
      goto LABEL_6;
LABEL_31:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  v20 = KeGetCurrentPrcb();
  v21 = (unsigned int)v19;
  LODWORD(v21) = v19 & 0x7FFFFFFF;
  v28 = 0;
  v10 = *(volatile signed __int32 **)(KiProcessorBlock[v21] + 24904);
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)v20, 1);
    if ( !_interlockedbittestandset64(v10, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)v20, 0);
    do
      KeYieldProcessorEx(&v28);
    while ( *(_QWORD *)v10 );
  }
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v19 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    goto LABEL_22;
  }
  v9 = 0LL;
LABEL_6:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  if ( v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  if ( v10 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  v3 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v8 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_13:
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v24 = v13[5] - 1;
      v13[5] = v24;
      if ( !v24 && !*((_BYTE *)v13 + 25) && !*((_BYTE *)v13 + 27) )
        KiPerformUnboostKick(v12);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 5) = v3;
  *(_BYTE *)(a2 + 4) = v8;
  return result;
}
