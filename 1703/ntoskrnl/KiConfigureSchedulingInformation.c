/*
 * XREFs of KiConfigureSchedulingInformation @ 0x14041093C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140418DA0 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v11; // edi
  USHORT v12; // cx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rsi
  int v14; // r15d
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned __int8 v17; // bl
  struct _KPRCB *v18; // rdi
  unsigned __int64 GroupSetMember; // rax
  __int64 NextThread; // r14
  bool IsThreadRankNonZero; // al
  char v22; // cl
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rdx
  char v26; // al
  unsigned __int64 v27; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 *v29; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 Mask; // [rsp+38h] [rbp-20h]
  unsigned __int16 Group; // [rsp+40h] [rbp-18h]
  unsigned int Count; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+58h]
  __int64 CurrentIrql; // [rsp+B8h] [rbp+60h]

  v2 = *(_DWORD *)(a1 + 24756);
  v4 = a1;
  if ( v2 )
    v5 = *(_QWORD *)(a1 + 8LL * (v2 - 1) + 25200);
  else
    v5 = *(_QWORD *)(a1 + 200);
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 209);
  v7 = 0LL;
  *(_QWORD *)(a1 + 25192) = v5;
  if ( v2 )
  {
    while ( (~*(_QWORD *)(a1 + 25176) & *(_QWORD *)(a1 + 8 * v7 + 25200)) == 0LL )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v2 )
        goto LABEL_8;
    }
    v8 = *(_QWORD *)(a1 + 8 * v7 + 25200);
    _BitScanForward64((unsigned __int64 *)&v6, v8);
    *(_QWORD *)(v4 + 25184) = v8;
  }
LABEL_8:
  v9 = *(_QWORD *)(v4 + 192);
  v34 = v9;
  *(_DWORD *)(v4 + 25172) = v6;
  if ( !a2 && *(_DWORD *)(v4 + 36) == *(_DWORD *)(v9 + 164) )
  {
    v11 = KiMaximumSharedReadyQueueSize;
    if ( !KiMaximumSharedReadyQueueSize )
      v11 = 1;
    if ( (v11 & 0x100) != 0 )
      v11 &= ~0x100u;
    if ( v11 > 0x40 )
      v11 = 64;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = *(_WORD *)(v9 + 146);
    *(_QWORD *)(v9 + 152) = 0LL;
    KeQueryNodeActiveAffinity(v12, &Affinity, (PUSHORT)&Count);
    SharedReadyQueue = *(_KSHARED_READY_QUEUE **)(v4 + 25160);
    v14 = 0;
    v15 = (v11 + (unsigned __int16)Count - 1) / v11;
    Group = Affinity.Group;
    v29 = 0LL;
    v16 = (unsigned __int16)Count % v15;
    Count = (unsigned __int16)Count / v15;
    v17 = Count;
    Mask = Affinity.Mask;
    while ( !(unsigned int)KeEnumerateNextProcessor(&Count, &v29) )
    {
      v18 = (struct _KPRCB *)KiProcessorBlock[Count];
      if ( v14 == SharedReadyQueue->ProcCount )
      {
        SharedReadyQueue = v18->SharedReadyQueue;
        v14 = 0;
      }
      if ( !v14 )
      {
        SharedReadyQueue->ProcCount = v17;
        if ( v16 )
        {
          --v16;
          SharedReadyQueue->ProcCount = v17 + 1;
        }
      }
      GroupSetMember = v18->GroupSetMember;
      ++v14;
      v18->SharedReadyQueue = SharedReadyQueue;
      SharedReadyQueue->Affinity |= GroupSetMember;
      NextThread = (__int64)v18->NextThread;
      v18->PriorityState = &SharedReadyQueue->RunningSummary[v18->GroupIndex - SharedReadyQueue->LowProcIndex];
      if ( !NextThread )
        NextThread = (__int64)v18->CurrentThread;
      IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v18);
      v22 = 1;
      if ( !IsThreadRankNonZero )
        v22 = *(_BYTE *)(NextThread + 195);
      *v18->PriorityState = v22;
    }
    v29 = 0LL;
    v4 = a1;
    v23 = v34;
    Group = Affinity.Group;
    Mask = Affinity.Mask;
    while ( !(unsigned int)KeEnumerateNextProcessor(&Count, &v29) )
    {
      v24 = KiProcessorBlock[Count];
      v25 = *(_QWORD *)(v24 + 25160);
      if ( *(_BYTE *)(v25 + 595) > 1u )
        *(_QWORD *)(v24 + 25152) = *(_QWORD *)(v25 + 600);
      v26 = *(_BYTE *)(v24 + 209);
      if ( v26 == *(_BYTE *)(v25 + 593) && *(_BYTE *)(v25 + 595) > 1u )
      {
        *(_DWORD *)(v24 + 25168) = 1;
        *(_BYTE *)(v25 + 596) = v26;
        *(_QWORD *)(v23 + 152) |= *(_QWORD *)(v24 + 200);
        _BitScanReverse64(&v27, *(_QWORD *)(v25 + 600));
        *(_BYTE *)(v25 + 592) = v27 - *(_BYTE *)(v25 + 593) + 1;
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return KiConfigureCpuSetSchedulingInformation(v4);
}
