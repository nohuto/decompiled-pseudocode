/*
 * XREFs of ExpApplyPriorityBoost @ 0x14008B550
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x140117340 (ExpApplyPrewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x14011BAE8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyRewaitBoost @ 0x14012DBD0 (ExpApplyRewaitBoost.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x140060E60 (PsGetBaseIoPriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14010F854 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

volatile signed __int64 *__fastcall ExpApplyPriorityBoost(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  volatile signed __int64 *result; // rax
  __int64 v6; // r9
  unsigned int v7; // r12d
  bool v8; // cc
  int v9; // r15d
  volatile __int64 *v10; // rsi
  __int64 v11; // r8
  int v12; // edi
  int v13; // r13d
  char v14; // al
  _QWORD *v15; // rdx
  int v16; // edx
  char v17; // cl
  int v18; // eax
  ULONG_PTR v19; // rbx
  signed __int64 BugCheckParameter4; // rax
  __int64 v21; // rax
  char v22; // al
  _QWORD *v23; // rdx
  __int64 v24; // rbx
  unsigned int v25; // r15d
  unsigned int i; // esi
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // al
  _QWORD *v33; // rdx
  __int64 v34; // rax
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 ExtensionTable; // rax
  __int64 v38; // rax
  unsigned __int8 v39[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-40h]
  _BYTE v41[12]; // [rsp+3Ch] [rbp-3Ch] BYREF
  volatile signed __int64 *LockHandle_8; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+20h] BYREF
  unsigned __int8 v44; // [rsp+A0h] [rbp+28h] BYREF
  int v45; // [rsp+A8h] [rbp+30h]
  unsigned __int8 v46; // [rsp+B8h] [rbp+40h] BYREF

  result = (volatile signed __int64 *)&retaddr;
  if ( (*(_BYTE *)(a1 + 26) & 8) == 0 )
  {
    v6 = 0LL;
    v7 = (*(_DWORD *)(a3 + 1744) >> 9) & 7;
    if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
      v7 = 0;
    v8 = v7 <= 2;
    if ( v7 < 2 )
    {
      if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1800) )
        v7 = 2;
      v8 = v7 <= 2;
    }
    if ( v8 )
      v7 = 2;
    v44 = 2;
    *(_DWORD *)&v41[8] = 0;
    v9 = a2 & 0xFF00;
    v10 = (volatile __int64 *)(a1 + 96);
    v11 = a2 & 4;
    *(_QWORD *)v41 = a2 & 0xFF00;
    v12 = a2 & 2;
    v40 = a2 & 4;
    v45 = v12;
    v13 = 0;
    LockHandle_8 = (volatile signed __int64 *)(a1 + 96);
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v14 = KiFastAcquireQueuedSpinLockInstrumented(&v41[4], a1 + 96, &v44);
    }
    else
    {
      v14 = 0;
      v15 = (_QWORD *)_InterlockedExchange64(v10, (__int64)&v41[4]);
      if ( !v15 )
        goto LABEL_9;
      KxWaitForLockOwnerShipWithIrql((__int64)&v41[4], v15, &v44);
      v14 = 1;
    }
    v11 = v40;
    v6 = 0LL;
LABEL_9:
    if ( v14 )
    {
      _disable();
      __writecr8(v44);
    }
    if ( (_DWORD)v11 )
      *(_WORD *)(a1 + 26) |= 4u;
    if ( v12 )
      *(_WORD *)(a1 + 26) |= 2u;
    if ( v9 )
    {
      v16 = *(char *)(a3 + 195);
      if ( v16 > *(unsigned __int8 *)(a1 + 27) )
      {
        v17 = 15;
        if ( (unsigned __int8)v16 < 0xFu )
          v17 = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(a1 + 27) = v17;
      }
    }
    v18 = *(_DWORD *)(a1 + 56);
    v19 = *(_QWORD *)(a1 + 48);
    if ( (v18 & 2) != 0 )
    {
      v19 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v19 & 3) != 0 )
    {
      goto LABEL_54;
    }
    if ( v19 )
    {
      if ( (_DWORD)v11
        && (v18 & 1) == 0
        && ((*(_DWORD *)(*(_QWORD *)(v19 + 544) + 772LL) & 0x100000) != 0 || (*(_DWORD *)(v19 + 1744) & 0xE00u) < 0x400) )
      {
        v13 = 4;
        PsBoostThreadIo(v19, 0LL);
        *(_DWORD *)(a1 + 56) |= 1u;
      }
      if ( v12 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
      {
        v13 |= 2u;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v19 + 1804)) == 1 && *(_BYTE *)(v19 + 793) )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (unsigned int)KiAbThreadInsertList(v19, &CurrentPrcb->AbPropagateBoostsList, v19 + 1376) )
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          __writecr8(CurrentIrql);
          v10 = (volatile __int64 *)(a1 + 96);
        }
        *(_DWORD *)(a1 + 56) |= 4u;
      }
      if ( v9 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v19 + 195) )
        v13 |= 0xFF00u;
      if ( !v13 )
        goto LABEL_53;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19 - 48);
      BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v19 - 48));
      if ( BugCheckParameter4 <= 1 )
        KeBugCheckEx(0x18u, 0LL, v19, 0x10uLL, BugCheckParameter4);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v41[4], retaddr);
        goto LABEL_42;
      }
      _m_prefetchw(&v41[4]);
      v21 = *(_QWORD *)&v41[4];
      if ( !*(_QWORD *)&v41[4] )
      {
        if ( (_BYTE *)_InterlockedCompareExchange64(LockHandle_8, 0LL, (signed __int64)&v41[4]) == &v41[4] )
        {
LABEL_42:
          _enable();
          if ( (v13 & 4) != 0 )
          {
            ++ExpResourceIoBoosted;
            IoBoostThreadIoPriority(v19, v7, 0LL);
          }
          if ( (v13 & 2) != 0 )
          {
            if ( *(_DWORD *)(v19 + 1808) )
            {
              ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( ExtensionTable )
              {
                (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v19);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
            }
          }
          if ( (v13 & 0xFF00) != 0 )
          {
            __incgsdword(0x63E8u);
            KeSetPriorityBoost(v19, *(unsigned __int8 *)(a1 + 27), v11, v6);
          }
          v13 = 0;
          ObDereferenceObjectDeferDelete((PVOID)v19);
          v46 = 2;
          LockHandle_8 = v10;
          *(_QWORD *)&v41[4] = 0LL;
          _disable();
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            v22 = KiFastAcquireQueuedSpinLockInstrumented(&v41[4], v10, &v46);
          }
          else
          {
            v22 = 0;
            v23 = (_QWORD *)_InterlockedExchange64(v10, (__int64)&v41[4]);
            if ( v23 )
            {
              KxWaitForLockOwnerShipWithIrql((__int64)&v41[4], v23, &v46);
              v22 = 1;
            }
          }
          if ( v22 )
          {
            _disable();
            __writecr8(v46);
          }
LABEL_53:
          v11 = v40;
          goto LABEL_54;
        }
        v21 = KxWaitForLockChainValid(&v41[4]);
      }
      *(_QWORD *)&v41[4] = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
      goto LABEL_42;
    }
LABEL_54:
    if ( *(char *)(a1 + 26) >= 0 )
    {
      v24 = *(_QWORD *)(a1 + 16);
      if ( v24 )
      {
        v25 = *(_DWORD *)(v24 + 8);
        for ( i = 1; i < v25; ++i )
        {
          v27 = *(_DWORD *)(v24 + 24);
          v24 += 16LL;
          v28 = *(_QWORD *)v24;
          if ( (v27 & 2) != 0 )
          {
            v28 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v28 & 3) != 0 )
          {
            goto LABEL_65;
          }
          if ( v28 )
          {
            if ( (_DWORD)v11 && (v27 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v28) < 2 )
            {
              v13 |= 4u;
              PsBoostThreadIo(v28, 0LL);
              *(_DWORD *)(v24 + 8) |= 1u;
            }
            if ( v45 && (*(_DWORD *)(v24 + 8) & 4) == 0 )
            {
              v13 |= 2u;
              if ( _InterlockedIncrement((volatile signed __int32 *)(v28 + 1804)) == 1 )
                KeAbProcessEffectiveIoPriorityChange(v28, 0LL, v11, v6);
              *(_DWORD *)(v24 + 8) |= 4u;
            }
            if ( *(_DWORD *)v41 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v28 + 195) )
              v13 |= 0xFF00u;
            if ( v13 )
            {
              v29 = v28 - 48;
              if ( ObpTraceFlags )
              {
                ObpPushStackInfo(v28 - 48);
                v29 = v28 - 48;
              }
              ObpIncrPointerCount(v29);
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v41[4]);
              _enable();
              if ( (v13 & 4) != 0 )
              {
                ++ExpResourceIoBoostedShared;
                IoBoostThreadIoPriority(v28, v7, 0LL);
              }
              if ( (v13 & 2) != 0 )
              {
                if ( *(_DWORD *)(v28 + 1808) )
                {
                  v38 = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( v38 )
                  {
                    (*(void (__fastcall **)(__int64))(v38 + 16))(v28);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
              }
              if ( (v13 & 0xFF00) != 0 )
              {
                __incgsdword(0x63ECu);
                KeSetPriorityBoost(v28, *(unsigned __int8 *)(a1 + 27), v30, v31);
              }
              ObDereferenceObjectDeferDelete((PVOID)v28);
              v39[0] = 2;
              *(_QWORD *)&v41[4] = 0LL;
              v13 = 0;
              LockHandle_8 = (volatile signed __int64 *)(a1 + 96);
              _disable();
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                v32 = KiFastAcquireQueuedSpinLockInstrumented(&v41[4], a1 + 96, v39);
              }
              else
              {
                v32 = 0;
                v33 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v41[4]);
                if ( v33 )
                {
                  KxWaitForLockOwnerShipWithIrql((__int64)&v41[4], v33, v39);
                  v32 = 1;
                }
              }
              if ( v32 )
              {
                _disable();
                __writecr8(v39[0]);
              }
              v34 = *(_QWORD *)(a1 + 16);
              if ( !v34 || *(_DWORD *)(v34 + 8) != v25 )
                break;
            }
          }
LABEL_65:
          v11 = v40;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      result = (volatile signed __int64 *)KiReleaseQueuedSpinLockInstrumented(&v41[4], retaddr);
      goto LABEL_58;
    }
    _m_prefetchw(&v41[4]);
    result = *(volatile signed __int64 **)&v41[4];
    if ( !*(_QWORD *)&v41[4] )
    {
      result = (volatile signed __int64 *)_InterlockedCompareExchange64(LockHandle_8, 0LL, (signed __int64)&v41[4]);
      if ( result == (volatile signed __int64 *)&v41[4] )
      {
LABEL_58:
        _enable();
        return result;
      }
      result = (volatile signed __int64 *)KxWaitForLockChainValid(&v41[4]);
    }
    *(_QWORD *)&v41[4] = 0LL;
    _InterlockedXor64(result + 1, 1uLL);
    goto LABEL_58;
  }
  return result;
}
