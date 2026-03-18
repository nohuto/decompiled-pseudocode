/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x1400A87B0
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400A8A64 (KiChargeSchedulingGroupCycleTime.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400A8ACC (KiMoveScbThreadsToNewReadylist.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400A93B4 (KiInsertNonMaxOverQuotaScb.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(struct _KPRCB *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 GenerationTarget; // rcx
  unsigned int v5; // r14d
  unsigned __int64 result; // rax
  _QWORD *v7; // r12
  _LIST_ENTRY *Flink; // rdi
  _QWORD *p_Blink; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  char v13; // r8
  volatile signed __int32 *v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  _DWORD *SchedulerAssist; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 Number; // rax
  char v24; // cl
  char v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]

  GenerationTarget = a1->GenerationTarget;
  v5 = 1;
  if ( a2 > GenerationTarget )
    v5 = (a2 - 1 + (unsigned int)KiGenerationTicks - GenerationTarget) / (unsigned int)KiGenerationTicks + 1;
  a1->GenerationTarget = KiGenerationEndTick;
  a1->ScbQueue.Root = 0LL;
  a1->ScbQueue.Min = 0LL;
  result = (unsigned __int64)a1->NextThread;
  v25 = 0;
  v26 = result;
  if ( !result )
  {
    result = (unsigned __int64)a1->CurrentThread;
    v26 = result;
  }
  v7 = *(_QWORD **)(result + 104);
  if ( v7 )
  {
    result = a1->ScbOffset;
    v7 = (_QWORD *)((char *)v7 + result);
  }
  Flink = a1->ScbList.Flink;
  if ( Flink == &a1->ScbList )
  {
LABEL_24:
    if ( a1->GroupSchedulingOverQuota )
    {
      Number = a1->Number;
      a1->GroupSchedulingOverQuota = 0;
      v24 = KiProcessorIndexToNumberMappingTable[Number];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_14039BB08[result], ~(1LL << (v24 & 0x3F)));
    }
    return result;
  }
  do
  {
    p_Blink = &Flink[-5].Blink;
    if ( v5 >= 0x40 )
      v10 = 0LL;
    else
      v10 = p_Blink[6] << v5;
    v11 = v10 | 1;
    if ( (p_Blink[14] & 4) == 0 )
      v11 = v10;
    p_Blink[6] = v11;
    v12 = (__int64)p_Blink - a1->ScbOffset;
    KiChargeSchedulingGroupCycleTime(v12, &Flink[-5].Blink);
    v13 = a3;
    if ( !a3 )
    {
      if ( a1->ClockOwner )
      {
        if ( (p_Blink[14] & 0x10) == 0 )
        {
          v20 = *(_QWORD *)(v12 + 40);
          v21 = v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 48), v20);
          v22 = *(_QWORD *)(v12 + 40);
          if ( v21 > v22 )
            _InterlockedExchange64((volatile __int64 *)(v12 + 48), v22);
        }
      }
    }
    if ( p_Blink[1] != p_Blink[2] )
    {
      v19 = KiGroupSchedulingNumerator;
      *p_Blink >>= 10;
      v13 = a3;
      p_Blink[4] = *p_Blink * v19 + ((p_Blink[4] * (unsigned __int64)(1024 - v19)) >> 10);
    }
    v14 = (volatile signed __int32 *)p_Blink[15];
    *p_Blink = 0LL;
    p_Blink[5] = 0LL;
    if ( v14 )
    {
      v15 = ((*((unsigned __int8 *)p_Blink + 112) >> 3) & 1) - *((_DWORD *)p_Blink + 29);
      if ( (int)(v15 + _InterlockedExchangeAdd(v14, v15)) < 0 )
        *(_DWORD *)p_Blink[15] = 0;
    }
    v16 = *((unsigned __int8 *)p_Blink + 112);
    p_Blink[3] = 0LL;
    *((_BYTE *)p_Blink + 112) = v16 & 0xFC;
    *((_DWORD *)p_Blink + 29) = (v16 >> 3) & 1;
    p_Blink[11] = 0LL;
    p_Blink[12] = 0LL;
    p_Blink[13] = 0LL;
    p_Blink[49] = 0LL;
    p_Blink[50] = 0LL;
    result = *((unsigned int *)p_Blink + 29);
    if ( !(_DWORD)result )
    {
      *((_BYTE *)p_Blink + 112) &= ~4u;
      if ( p_Blink == v7 )
      {
        if ( (*(_BYTE *)(v26 + 2) & 4) != 0 )
          LOBYTE(v17) = KiIsThreadRankNonZero(v26, a1) ? 1 : *(_BYTE *)(v26 + 195);
        else
          LOBYTE(v17) = *(_BYTE *)(v26 + 195);
        *a1->PriorityState = v17;
        SchedulerAssist = a1->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( (_KTHREAD *)v26 == a1->IdleThread )
            v17 = KiVpThreadSystemWorkPriority;
          else
            v17 = (char)v17;
          *SchedulerAssist = v17;
        }
      }
LABEL_21:
      result = KiMoveScbThreadsToNewReadylist(&Flink[-5].Blink, 0LL, a1, 0LL);
      goto LABEL_22;
    }
    if ( v13 )
      goto LABEL_21;
    if ( *((_WORD *)p_Blink + 57) )
    {
      result = KiInsertNonMaxOverQuotaScb(&Flink[-5].Blink, a1, 0LL);
      v25 = 1;
    }
LABEL_22:
    Flink = Flink->Flink;
  }
  while ( Flink != &a1->ScbList );
  if ( !v25 )
    goto LABEL_24;
  return result;
}
