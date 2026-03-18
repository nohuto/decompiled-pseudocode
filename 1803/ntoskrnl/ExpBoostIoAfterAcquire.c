/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x1400884C0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140100730 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // ax
  int v6; // esi
  int v7; // r9d
  int v8; // ebx
  volatile __int64 *v9; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v12; // al
  __int64 v13; // rdx
  __int64 CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  unsigned __int8 CurrentIrql; // r14
  struct _KDPC *v24; // rbp
  int v25; // eax
  __int64 ExtensionTable; // rax
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v28; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v30; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 26);
  v6 = a1;
  if ( (v3 & 8) == 0 )
  {
    v7 = 0;
    if ( (v3 & 4) != 0
      && ((*(_DWORD *)(*(_QWORD *)(a2 + 544) + 772LL) & 0x100000) != 0 || (*(_DWORD *)(a2 + 1744) & 0xE00u) < 0x400) )
    {
      v7 = 4;
    }
    v8 = v7 | 2;
    if ( (v3 & 2) == 0 )
      v8 = v7;
    if ( v8 )
    {
      v9 = (volatile __int64 *)(a1 + 96);
      v28 = (volatile signed __int64 *)(a1 + 96);
      v30 = 2;
      v27 = 0LL;
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = SchedulerAssist[5];
          SchedulerAssist[5] = v22 + 1;
          if ( v22 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        v12 = KiFastAcquireQueuedSpinLockInstrumented(&v27, v9, &v30);
      }
      else
      {
        v12 = 0;
        v13 = _InterlockedExchange64(v9, (__int64)&v27);
        if ( v13 )
        {
          KxWaitForLockOwnerShipWithIrql(&v27, v13, &v30);
          v12 = 1;
        }
      }
      if ( v12 )
      {
        _disable();
        __writecr8(v30);
      }
      CurrentThread = ExpFindCurrentThread(v6, a2, (unsigned int)&v27, 0, 1, a3);
      v18 = CurrentThread;
      if ( (v8 & 4) != 0 )
      {
        if ( (*(_DWORD *)(CurrentThread + 8) & 1) != 0 )
        {
          v8 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(a2, 0LL);
          *(_DWORD *)(v18 + 8) |= 1u;
        }
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v18 + 8) & 4) != 0 )
        {
          v8 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1804)) == 1 && *(_BYTE *)(a2 + 793) )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v24 = (struct _KDPC *)KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &v24[401].DpcData, a2 + 1376) )
              KiAbQueueAutoBoostDpc(v24);
            __writecr8(CurrentIrql);
          }
          *(_DWORD *)(v18 + 8) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v27, retaddr, v16, v17);
      }
      else
      {
        _m_prefetchw(&v27);
        v19 = v27;
        if ( !v27 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v28, 0LL, (signed __int64)&v27) == &v27 )
            goto LABEL_23;
          v19 = KxWaitForLockChainValid(&v27, v15, v16, v17);
        }
        v27 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
      }
LABEL_23:
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v25 = v21[5] - 1;
          v21[5] = v25;
          if ( !v25 && !*((_BYTE *)v21 + 25) && !*((_BYTE *)v21 + 27) )
            KiPerformUnboostKick(v20);
        }
      }
      _enable();
      if ( v8 )
      {
        if ( (v8 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL, 0LL);
        if ( (v8 & 2) != 0 && *(_DWORD *)(a2 + 1808) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
