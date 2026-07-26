/*
 * XREFs of ndisInterruptDpc @ 0x1C000A480
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0023888 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // r11
  unsigned int v5; // edi
  unsigned int CurrentCpu; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  void (__fastcall *v16)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r12
  char v17; // r15
  char DatapathCyclesMask; // di
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v21; // r15
  KIRQL v22; // al
  struct _NDIS_REFCOUNT_BLOCK *v23; // rcx
  KIRQL v24; // r14
  int v25; // r14d
  __int64 v26; // r14
  char *v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rcx
  LARGE_INTEGER v30; // rax
  char v31; // bl
  KIRQL v32; // al
  ULONG_PTR v33; // r10
  KIRQL v34; // si
  __int64 v35; // r9
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // cl
  _BYTE *v38; // rdx
  char v39; // al
  __int64 v41; // rax
  ULONG_PTR v42; // r14
  unsigned int v43; // edx
  struct _KEVENT *v44; // rcx
  KSPIN_LOCK *Clock; // rax
  __int64 v46; // rax
  char v47; // [rsp+30h] [rbp-89h]
  unsigned int Number; // [rsp+38h] [rbp-81h]
  __int64 v50; // [rsp+40h] [rbp-79h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-71h]
  struct _KDPC *v52; // [rsp+50h] [rbp-69h]
  struct NDIS_PCW_CONTEXT v53; // [rsp+58h] [rbp-61h] BYREF
  struct NDIS_PCW_CONTEXT v54; // [rsp+70h] [rbp-49h] BYREF
  void (__fastcall *v55)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp-31h]
  _QWORD WnodeEventItem[6]; // [rsp+90h] [rbp-29h] BYREF
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+C0h] [rbp+7h] BYREF

  v4 = *((_QWORD *)DeferredContext + 12);
  v5 = -1;
  v52 = Dpc;
  CurrentCpu = -1;
  v53.CurrentCpu = -1;
  v10 = *(_DWORD *)(v4 + 48);
  v53.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v11 = *(_DWORD *)(v4 + 80);
  v53.DatapathEventsMask = v10;
  v53.DatapathCyclesMask = v11;
  if ( (v11 & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v53, 0xCu, 0x23uLL);
    LOBYTE(v10) = v53.DatapathEventsMask;
    CurrentCpu = v53.CurrentCpu;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v53.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)v53.PcwBlock->DatapathEventReferences
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( dword_1C0097F04 == -1
    || (v20 = *(_BYTE *)(v4 + 32), v20 <= 6u) && (v20 != 6 || *(_BYTE *)(v4 + 33) < 0x14u)
    || (*(_DWORD *)(v4 + 124) & 0x400000) != 0 )
  {
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0
      || !ndisDpcWatchdogLimit
      || WatchdogInformation.DpcWatchdogCount >= ndisDpcWatchdogLimit )
    {
      v14 = *((_QWORD *)DeferredContext + 12);
      v15 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
      v16 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
      v50 = 0LL;
      v54.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v14 + 40);
      v54.DatapathEventsMask = *(_DWORD *)(v14 + 48);
      v54.DatapathCyclesMask = *(_DWORD *)(v14 + 80);
      v55 = v15;
      SpinLock = 0LL;
      v54.CurrentCpu = -1;
      if ( HIBYTE(dword_1C0099FD8) )
      {
        v17 = 1;
        ndisTraceDpcStart(v14, 1LL, v12, v13);
        Clock = (KSPIN_LOCK *)WmiGetClock(0LL, 0LL);
        v15 = v55;
        SpinLock = Clock;
      }
      else
      {
        v17 = 0;
      }
      if ( DeferredContext[4] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1 )
          goto LABEL_23;
      }
      else
      {
        if ( byte_1C0097F01 )
        {
          if ( dword_1C0097F0C )
          {
            v5 = dword_1C0097F04;
          }
          else
          {
            v5 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12)
                                                               + *(_QWORD *)(v14 + 3312))];
            if ( dword_1C0097F04 < v5 )
              v5 = dword_1C0097F04;
          }
        }
        LODWORD(v50) = v5;
        DatapathCyclesMask = v54.DatapathCyclesMask;
        if ( (v54.DatapathCyclesMask & 1) != 0 )
        {
          ndisPcwStartCycleCounter(&v54, 0);
          DatapathCyclesMask = v54.DatapathCyclesMask;
        }
        v19 = *((_QWORD *)DeferredContext + 1);
        if ( DeferredContext[193] == 1 )
          v16(v19, (unsigned int)SystemArgument1, SystemArgument2, &v50, 0LL);
        else
          v15(v19, SystemArgument2, &v50, 0LL);
        if ( (DatapathCyclesMask & 1) != 0 )
          ndisPcwEndCycleCounter(&v54, 0, 0xDuLL);
        if ( (v50 & 0x100000000LL) != 0 )
        {
          ndisQueueDpcWorkItem(v52, DeferredContext, SystemArgument1, SystemArgument2, byte_1C0097F01);
          goto LABEL_23;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1
          || !DeferredContext[4] )
        {
          goto LABEL_23;
        }
      }
      KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
LABEL_23:
      if ( v17 )
      {
        v46 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v14, 1LL, v46 - (_QWORD)SpinLock);
      }
      return;
    }
  }
  v21 = *((_QWORD *)DeferredContext + 12);
  v47 = byte_1C0097F01;
  Number = KeGetPcr()->Prcb.Number;
  if ( (*(_DWORD *)(v21 + 48) & 0x800000) != 0 )
  {
    v41 = *(_QWORD *)(v21 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v41 + 288);
  }
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 4464));
  v23 = *(struct _NDIS_REFCOUNT_BLOCK **)(v21 + 4920);
  v24 = v22;
  if ( v23 )
    NdisReferenceWithTag(v23);
  ++*(_DWORD *)(v21 + 4472);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(13LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v21, *(unsigned int *)(v21 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 4464), v24);
  v25 = 0;
  if ( DeferredContext[193] )
    v25 = (int)SystemArgument1;
  v26 = *((_QWORD *)DeferredContext + 27) + 80LL * (Number + ndisMaxNumberOfProcessors * v25);
  SpinLock = (PKSPIN_LOCK)(v26 + 72);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 72));
  if ( (*(_DWORD *)(v26 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v21);
    v31 = 0;
    v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 4464));
    v33 = *(_QWORD *)(v21 + 4920);
    v34 = v32;
    if ( v33 )
    {
      if ( *(_BYTE *)(v33 + 1) )
      {
        if ( *(_BYTE *)(v33 + 1) == 1 )
        {
          v42 = v33 + 4936;
          v43 = *(_DWORD *)(v33 + 4992);
          if ( v43 >> 17 < 0x3FFE && (unsigned __int16)v43 >> 1 == (v43 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v33 + 4936));
            *(_DWORD *)(v42 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v43 & 0xFFFE) == 0 && (v43 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v21 + 4920), 0x4DuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v33 + 4936), 0);
          }
        }
      }
      else
      {
        v35 = *(_QWORD *)(v33 + 8);
        if ( v35 && (v36 = *(_BYTE *)(v33 + 3), v37 = 0, v36) )
        {
          while ( 1 )
          {
            v38 = (_BYTE *)(v35 + 2LL * v37);
            if ( *v38 == 77 )
            {
              v39 = v38[1];
              if ( v39 )
                break;
            }
            if ( ++v37 >= v36 )
              goto LABEL_81;
          }
          v38[1] = v39 - 1;
        }
        else
        {
LABEL_81:
          if ( !_bittestandreset((signed __int32 *)(v33 + 24), 0xDu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v33, 0x4DuLL);
        }
      }
    }
    if ( (*(_DWORD *)(v21 + 4472))-- == 1 )
      v31 = 1;
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v21, *(unsigned int *)(v21 + 4472));
    KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 4464), v34);
    if ( v31 )
    {
      v44 = *(struct _KEVENT **)(v21 + 1608);
      if ( v44 )
        KeSetEvent(v44, 0, 0);
    }
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v21);
  }
  else
  {
    *(_QWORD *)(v26 + 32) = v52;
    *(_DWORD *)(v26 + 68) = 1;
    *(_QWORD *)(v26 + 40) = DeferredContext;
    *(_QWORD *)(v26 + 48) = SystemArgument1;
    *(_QWORD *)(v26 + 56) = SystemArgument2;
    *(_DWORD *)(v26 + 64) = Number;
    if ( v47 )
    {
      if ( HIBYTE(word_1C0099FDC) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C0099FD0;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v26 + 68) |= 2u;
      v27 = (char *)qword_1C0097F40 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v27 + 2);
      v28 = (__int64 *)*((_QWORD *)v27 + 1);
      if ( (char *)*v28 != v27 )
        __fastfail(3u);
      *(_QWORD *)v26 = v27;
      *(_QWORD *)(v26 + 8) = v28;
      *v28 = v26;
      *((_QWORD *)v27 + 1) = v26;
      ++*((_DWORD *)v27 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v27 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v27 + 1, 0, 1, 0);
      if ( !_InterlockedExchange((volatile __int32 *)qword_1C0097F38 + KeGetPcr()->Prcb.Number, 1) )
      {
        HIDWORD(v29) = DueTime.HighPart;
        v30.QuadPart = -1LL;
        if ( DueTime.QuadPart )
          v30 = DueTime;
        LODWORD(v29) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)qword_1C0097F30 + 2 * v29,
          v30,
          (PKDPC)qword_1C0097F30 + 2 * (unsigned __int64)(unsigned int)v29 + 1);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v26, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
}
