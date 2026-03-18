/*
 * XREFs of KiInsertTimerTable @ 0x1400F87E0
 * Callers:
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x14005AD00 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KiAdjustTimerDueTimes @ 0x140168180 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x1400C825C (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r12
  unsigned __int64 v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  char *v18; // r14
  __int64 v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // r13
  char v22; // r11
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int16 v27; // ax
  _QWORD *v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // cl
  unsigned __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+20h] [rbp-48h]
  struct _KPRCB *v38; // [rsp+28h] [rbp-40h]
  int v39; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a4;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v27 = *(_WORD *)(a3 + 2), v27 >= 0x500u) )
    {
      v10 = v27 - 1280;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL);
        if ( v31 )
        {
          v32 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v33, __ROR8__(v31, v32));
          v10 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208) + (((_BYTE)v33 + v32) & 0x3F)];
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v10;
  v11 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = CurrentPrcb;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v14 = KiProcessorBlock[v11] + 13952 + 32 * (a4 + 16LL);
  v37 = KiProcessorBlock[v11] + 13952;
  v39 = 0;
  v15 = (_QWORD *)(v14 + 8);
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v34 = SchedulerAssist[5];
      SchedulerAssist[5] = v34 + 1;
      if ( v34 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
  {
    KiSetVpThreadSpinLockCount(v38, 0LL);
    do
      KeYieldProcessorEx(&v39);
    while ( *(_QWORD *)v14 );
    LOBYTE(v30) = 1;
    KiSetVpThreadSpinLockCount(v38, v30);
  }
  v16 = *(_QWORD **)(v14 + 8);
  if ( v16 == (_QWORD *)(v14 + 8) )
  {
    v5 = 6;
  }
  else
  {
    v26 = *(v16 - 1);
    if ( v9 > v26 )
    {
      v28 = (_QWORD *)(v14 + 16);
      if ( v9 - v26 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v15 = *(_QWORD **)(v14 + 8);
        if ( v15 != (_QWORD *)*v28 )
        {
          while ( 1 )
          {
            v29 = (_QWORD *)*v15;
            if ( v9 <= *(_QWORD *)(*v15 - 8LL) )
              break;
            v15 = (_QWORD *)*v15;
            if ( v29 == (_QWORD *)*v28 )
            {
              v16 = (_QWORD *)*v29;
              goto LABEL_8;
            }
          }
        }
      }
      else
      {
        v15 = (_QWORD *)*v28;
        do
        {
          if ( v9 >= *(v15 - 1) )
            break;
          v15 = (_QWORD *)v15[1];
        }
        while ( v15 != (_QWORD *)(v14 + 8) );
      }
    }
    else
    {
      v5 = v9 < v26 ? 2 : 0;
    }
    v16 = (_QWORD *)*v15;
  }
LABEL_8:
  v17 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v16[1] != v15 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v15;
  *v17 = v16;
  v16[1] = v17;
  *v15 = v17;
  v18 = a5;
  if ( (v5 & 2) != 0 )
  {
    *(_QWORD *)(v14 + 24) = v9;
    _InterlockedOr(v36, 0);
    v19 = v37;
    if ( v5 >= 4 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v20 = v6 & 0x3F;
        v21 = 8LL * ((unsigned int)v6 >> 6);
      }
      else
      {
        v20 = *(unsigned __int8 *)(v37 - 13743);
        v21 = v6 << 6;
      }
      _interlockedbittestandset64(
        (volatile signed __int32 *)(qword_14044D448[2 * *(unsigned __int8 *)(v37 - 13744)] + v21),
        v20);
    }
    if ( v9 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( v18 )
      {
        v22 = 1;
        goto LABEL_16;
      }
      LOBYTE(v5) = 1;
      KiRemoveEntryTimer(v19, a2, v6);
    }
  }
  v22 = 0;
LABEL_16:
  _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
  v23 = KeGetCurrentPrcb();
  v24 = v23->SchedulerAssist;
  if ( v24 )
  {
    if ( v23->NestingLevel <= 1u )
    {
      v35 = v24[5] - 1;
      v24[5] = v35;
      if ( !v35 && !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
        KiPerformUnboostKick(v23);
    }
  }
  if ( v18 )
    *v18 = v22;
  return (v5 & 1) == 0;
}
