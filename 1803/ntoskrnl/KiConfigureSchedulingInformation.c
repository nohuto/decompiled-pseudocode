/*
 * XREFs of KiConfigureSchedulingInformation @ 0x14047B818
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140484800 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140175FAC (KiConfigureCpuSetSchedulingInformation.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // r15
  int v11; // ecx
  unsigned int v12; // ebx
  USHORT v13; // cx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rsi
  int v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // r13d
  unsigned __int8 v18; // di
  struct _KPRCB *v19; // rbx
  int ProcCount; // eax
  int v21; // ecx
  unsigned __int64 GroupSetMember; // rax
  __int64 NextThread; // r14
  bool IsThreadRankNonZero; // al
  char v25; // cl
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  unsigned __int64 v30; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 *v32; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 Mask; // [rsp+38h] [rbp-20h]
  unsigned __int16 Group; // [rsp+40h] [rbp-18h]
  unsigned int Count; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+58h]
  __int64 CurrentIrql; // [rsp+B8h] [rbp+60h]

  v2 = *(_DWORD *)(a1 + 24596);
  v4 = a1;
  if ( v2 )
    v5 = *(_QWORD *)(a1 + 8LL * (v2 - 1) + 24944);
  else
    v5 = *(_QWORD *)(a1 + 200);
  v6 = 0LL;
  *(_QWORD *)(a1 + 24936) = v5;
  LODWORD(v7) = *(unsigned __int8 *)(a1 + 209);
  if ( v2 )
  {
    while ( (~*(_QWORD *)(a1 + 24920) & *(_QWORD *)(a1 + 8 * v6 + 24944)) == 0LL )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v2 )
        goto LABEL_8;
    }
    v8 = *(_QWORD *)(a1 + 8 * v6 + 24944);
    _BitScanForward64((unsigned __int64 *)&v7, v8);
    *(_QWORD *)(v4 + 24928) = v8;
  }
LABEL_8:
  v9 = *(_QWORD *)(v4 + 192);
  v37 = v9;
  *(_DWORD *)(v4 + 24916) = v7;
  if ( !a2 && *(_DWORD *)(v4 + 36) == *(_DWORD *)(v9 + 164) )
  {
    v11 = KiMaximumSharedReadyQueueSize;
    if ( !KiMaximumSharedReadyQueueSize )
      v11 = 1;
    v12 = v11 & 0xFFFFFEFF;
    if ( (v11 & 0x100) == 0 )
      v12 = v11;
    if ( v12 > 0x40 )
      v12 = 64;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v13 = *(_WORD *)(v9 + 146);
    *(_QWORD *)(v9 + 152) = 0LL;
    KeQueryNodeActiveAffinity(v13, &Affinity, (PUSHORT)&Count);
    SharedReadyQueue = *(_KSHARED_READY_QUEUE **)(v4 + 24904);
    v15 = 0;
    v16 = (v12 + (unsigned __int16)Count - 1) / v12;
    Group = Affinity.Group;
    v32 = 0LL;
    v17 = (unsigned __int16)Count % v16;
    Count = (unsigned __int16)Count / v16;
    v18 = Count;
    Mask = Affinity.Mask;
    while ( !(unsigned int)KeEnumerateNextProcessor(&Count, &v32) )
    {
      v19 = (struct _KPRCB *)KiProcessorBlock[Count];
      ProcCount = SharedReadyQueue->ProcCount;
      if ( v15 == ProcCount )
        SharedReadyQueue = v19->SharedReadyQueue;
      v21 = 0;
      if ( v15 != ProcCount )
        v21 = v15;
      if ( !v21 )
      {
        SharedReadyQueue->ProcCount = v18;
        if ( v17 )
        {
          --v17;
          SharedReadyQueue->ProcCount = v18 + 1;
        }
      }
      GroupSetMember = v19->GroupSetMember;
      v15 = v21 + 1;
      v19->SharedReadyQueue = SharedReadyQueue;
      SharedReadyQueue->Affinity |= GroupSetMember;
      NextThread = (__int64)v19->NextThread;
      v19->PriorityState = &SharedReadyQueue->RunningSummary[v19->GroupIndex - SharedReadyQueue->LowProcIndex];
      if ( !NextThread )
        NextThread = (__int64)v19->CurrentThread;
      IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v19);
      v25 = 1;
      if ( !IsThreadRankNonZero )
        v25 = *(_BYTE *)(NextThread + 195);
      *v19->PriorityState = v25;
    }
    v32 = 0LL;
    v4 = a1;
    v26 = v37;
    Group = Affinity.Group;
    Mask = Affinity.Mask;
    while ( !(unsigned int)KeEnumerateNextProcessor(&Count, &v32) )
    {
      v27 = KiProcessorBlock[Count];
      v28 = *(_QWORD *)(v27 + 24904);
      if ( *(_BYTE *)(v28 + 595) > 1u )
        *(_QWORD *)(v27 + 24896) = *(_QWORD *)(v28 + 600);
      v29 = *(_BYTE *)(v27 + 209);
      if ( v29 == *(_BYTE *)(v28 + 593) && *(_BYTE *)(v28 + 595) > 1u )
      {
        *(_DWORD *)(v27 + 24912) = 1;
        *(_BYTE *)(v28 + 596) = v29;
        *(_QWORD *)(v26 + 152) |= *(_QWORD *)(v27 + 200);
        _BitScanReverse64(&v30, *(_QWORD *)(v28 + 600));
        *(_BYTE *)(v28 + 592) = v30 - *(_BYTE *)(v28 + 593) + 1;
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return KiConfigureCpuSetSchedulingInformation(v4);
}
