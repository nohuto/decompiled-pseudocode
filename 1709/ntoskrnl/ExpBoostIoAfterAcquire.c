/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x1400F19F0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r9
  int v7; // edx
  int v8; // ebx
  volatile signed __int64 *v9; // rcx
  char v10; // al
  _QWORD *v11; // rdx
  _QWORD *CurrentThread; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 ExtensionTable; // rax
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v19; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v21; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 26);
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
      v9 = (volatile signed __int64 *)(a1 + 96);
      v19 = v9;
      v21 = 2;
      v18 = 0LL;
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        v10 = KiFastAcquireQueuedSpinLockInstrumented(&v18, v9, &v21);
      }
      else
      {
        v10 = 0;
        v11 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&v18);
        if ( v11 )
        {
          KxWaitForLockOwnerShipWithIrql((__int64)&v18, v11, &v21);
          v10 = 1;
        }
      }
      if ( v10 )
      {
        _disable();
        __writecr8(v21);
      }
      CurrentThread = ExpFindCurrentThread(a1, a2, (__int64)&v18, 0, 1, a3);
      v13 = CurrentThread;
      if ( (v8 & 4) != 0 )
      {
        if ( (CurrentThread[1] & 1) != 0 )
        {
          v8 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(a2, 0LL);
          *((_DWORD *)v13 + 2) |= 1u;
        }
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (v13[1] & 4) != 0 )
        {
          v8 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1804)) == 1 && *(_BYTE *)(a2 + 793) )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &CurrentPrcb->AbPropagateBoostsList, a2 + 1376) )
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            __writecr8(CurrentIrql);
          }
          *((_DWORD *)v13 + 2) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v18, retaddr);
      }
      else
      {
        _m_prefetchw(&v18);
        v14 = v18;
        if ( !v18 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v19, 0LL, (signed __int64)&v18) == &v18 )
            goto LABEL_22;
          v14 = KxWaitForLockChainValid(&v18);
        }
        v18 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
      }
LABEL_22:
      _enable();
      if ( v8 )
      {
        if ( (v8 & 4) != 0 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)a2, 2, 0);
        if ( (v8 & 2) != 0 && *(_DWORD *)(a2 + 1808) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
