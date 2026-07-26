/*
 * XREFs of ndisInterruptDpc @ 0x1C00041C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0024AB0 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C0050E8C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F70 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
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
  __int64 v12; // rsi
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  void (__fastcall *v14)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r12
  char v15; // r15
  char DatapathCyclesMask; // di
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  __int64 v19; // r15
  KIRQL v20; // al
  __int64 v21; // r12
  int v22; // r14d
  _WORD *v23; // rdx
  __int64 v24; // r14
  char *v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rcx
  LARGE_INTEGER v28; // rax
  __int64 v29; // r10
  unsigned __int8 v30; // r9
  unsigned __int8 v31; // r8
  _BYTE *v32; // rcx
  char v33; // si
  KIRQL v34; // al
  ULONG_PTR v35; // r8
  KIRQL v36; // r14
  __int64 v37; // r10
  unsigned __int8 v38; // r9
  unsigned __int8 v39; // cl
  _BYTE *v40; // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // dl
  ULONG_PTR v45; // rbx
  unsigned int v46; // edx
  struct _KEVENT *v47; // rcx
  KSPIN_LOCK *Clock; // rax
  __int64 v49; // rax
  KIRQL v50; // [rsp+30h] [rbp-89h]
  char Type_high; // [rsp+31h] [rbp-88h]
  unsigned int Number; // [rsp+38h] [rbp-81h]
  __int64 v54; // [rsp+40h] [rbp-79h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-71h]
  struct _KDPC *v56; // [rsp+50h] [rbp-69h]
  struct NDIS_PCW_CONTEXT v57; // [rsp+58h] [rbp-61h] BYREF
  struct NDIS_PCW_CONTEXT v58; // [rsp+70h] [rbp-49h] BYREF
  void (__fastcall *v59)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp-31h]
  _QWORD WnodeEventItem[6]; // [rsp+90h] [rbp-29h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+C0h] [rbp+7h] BYREF

  v4 = *((_QWORD *)DeferredContext + 12);
  v5 = -1;
  v56 = Dpc;
  CurrentCpu = -1;
  v57.CurrentCpu = -1;
  v10 = *(_DWORD *)(v4 + 48);
  v57.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v11 = *(_DWORD *)(v4 + 80);
  v57.DatapathEventsMask = v10;
  v57.DatapathCyclesMask = v11;
  if ( (v11 & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v57, 0xCu, 0x23uLL);
    LOBYTE(v10) = v57.DatapathEventsMask;
    CurrentCpu = v57.CurrentCpu;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v57.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)v57.PcwBlock->DatapathEventReferences
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) == -1
    || (v18 = *(_BYTE *)(v4 + 32), v18 <= 6u) && (v18 != 6 || *(_BYTE *)(v4 + 33) < 0x14u)
    || (*(_DWORD *)(v4 + 124) & 0x400000) != 0 )
  {
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0
      || !ndisDpcWatchdogLimit
      || WatchdogInformation.DpcWatchdogCount >= ndisDpcWatchdogLimit )
    {
      v12 = *((_QWORD *)DeferredContext + 12);
      v13 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
      v14 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
      v54 = 0LL;
      v58.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v12 + 40);
      v58.DatapathEventsMask = *(_DWORD *)(v12 + 48);
      v58.DatapathCyclesMask = *(_DWORD *)(v12 + 80);
      v59 = v13;
      SpinLock = 0LL;
      v58.CurrentCpu = -1;
      if ( HIBYTE(dword_1C0093FD8) )
      {
        v15 = 1;
        ndisTraceDpcStart(v12, 1LL);
        Clock = (KSPIN_LOCK *)WmiGetClock(0LL, 0LL);
        v13 = v59;
        SpinLock = Clock;
      }
      else
      {
        v15 = 0;
      }
      if ( DeferredContext[4] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1 )
          goto LABEL_23;
      }
      else
      {
        if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
        {
          if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
          {
            v5 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
          }
          else
          {
            v5 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v12 + 3312)
                                                               + (KeGetPcr()->Prcb.Number << 12))];
            if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v5 )
              v5 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
          }
        }
        LODWORD(v54) = v5;
        DatapathCyclesMask = v58.DatapathCyclesMask;
        if ( (v58.DatapathCyclesMask & 1) != 0 )
        {
          ndisPcwStartCycleCounter(&v58, 0);
          DatapathCyclesMask = v58.DatapathCyclesMask;
        }
        v17 = *((_QWORD *)DeferredContext + 1);
        if ( DeferredContext[193] == 1 )
          v14(v17, (unsigned int)SystemArgument1, SystemArgument2, &v54, 0LL);
        else
          v13(v17, SystemArgument2, &v54, 0LL);
        if ( (DatapathCyclesMask & 1) != 0 )
          ndisPcwEndCycleCounter(&v58, 0, 0xDuLL);
        if ( (v54 & 0x100000000LL) != 0 )
        {
          ndisQueueDpcWorkItem(
            v56,
            DeferredContext,
            SystemArgument1,
            SystemArgument2,
            SHIBYTE(WPP_MAIN_CB.DeviceQueue.Type));
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
      if ( v15 )
      {
        v49 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v12, 1LL, v49 - (_QWORD)SpinLock);
      }
      return;
    }
  }
  v19 = *((_QWORD *)DeferredContext + 12);
  Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
  Number = KeGetPcr()->Prcb.Number;
  if ( (*(_DWORD *)(v19 + 48) & 0x800000) != 0 )
  {
    v42 = *(_QWORD *)(v19 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v42 + 288);
  }
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 4464));
  v21 = *(_QWORD *)(v19 + 4920);
  v22 = 0;
  v50 = v20;
  if ( !v21 )
    goto LABEL_35;
  if ( *(_BYTE *)(v21 + 1) )
  {
    if ( *(_BYTE *)(v21 + 1) != 1 )
      goto LABEL_35;
    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v21 + 4936), 1u);
    goto LABEL_59;
  }
  v23 = 0LL;
  if ( _bittestandset((signed __int32 *)(v21 + 24), 0xDu) )
  {
    v29 = *(_QWORD *)(v21 + 8);
    if ( v29 )
    {
      v30 = *(_BYTE *)(v21 + 3);
      v31 = 0;
      if ( v30 )
      {
        do
        {
          v32 = (_BYTE *)(v29 + 2LL * v31);
          if ( *v32 == 77 )
          {
            if ( v32[1] != 0xFF )
            {
              ++v32[1];
              goto LABEL_59;
            }
          }
          else if ( !v32[1] )
          {
            v23 = (_WORD *)(v29 + 2LL * v31);
          }
          ++v31;
        }
        while ( v31 < v30 );
        if ( !v23 )
          goto LABEL_86;
        *v23 = 333;
        goto LABEL_35;
      }
    }
LABEL_86:
    if ( !*(_BYTE *)(v21 + 1) )
    {
      v43 = *(_BYTE *)(v21 + 3);
      if ( v43 == 0xFF )
      {
        ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v21);
        *(_BYTE *)(v21 + 1) = 2;
      }
      else
      {
        if ( (unsigned int)v43 + 2 <= 0xFF )
          v44 = v43 + 2;
        else
          v44 = -1;
        ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v21, v44);
      }
    }
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v21);
LABEL_59:
    v20 = v50;
  }
LABEL_35:
  ++*(_DWORD *)(v19 + 4472);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
  {
    WPP_SF_qD(13LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v19, *(unsigned int *)(v19 + 4472));
    v20 = v50;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 4464), v20);
  if ( DeferredContext[193] )
    v22 = (int)SystemArgument1;
  v24 = *((_QWORD *)DeferredContext + 27) + 80LL * (Number + ndisMaxNumberOfProcessors * v22);
  SpinLock = (PKSPIN_LOCK)(v24 + 72);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v24 + 72));
  if ( (*(_DWORD *)(v24 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v19);
    v33 = 0;
    v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 4464));
    v35 = *(_QWORD *)(v19 + 4920);
    v36 = v34;
    if ( v35 )
    {
      if ( *(_BYTE *)(v35 + 1) )
      {
        if ( *(_BYTE *)(v35 + 1) == 1 )
        {
          v45 = v35 + 4936;
          v46 = *(_DWORD *)(v35 + 4992);
          if ( v46 >> 17 < 0x3FFE && (unsigned __int16)v46 >> 1 == (v46 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v35 + 4936));
            *(_DWORD *)(v45 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v46 & 0xFFFE) == 0 && (v46 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v35, 0x4DuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v35 + 4936), 0);
          }
        }
      }
      else
      {
        v37 = *(_QWORD *)(v35 + 8);
        if ( v37 && (v38 = *(_BYTE *)(v35 + 3), v39 = 0, v38) )
        {
          while ( 1 )
          {
            v40 = (_BYTE *)(v37 + 2LL * v39);
            if ( *v40 == 77 )
            {
              if ( v40[1] )
                break;
            }
            if ( ++v39 >= v38 )
              goto LABEL_103;
          }
          --v40[1];
        }
        else
        {
LABEL_103:
          if ( !_bittestandreset((signed __int32 *)(v35 + 24), 0xDu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v35, 0x4DuLL);
        }
      }
    }
    if ( (*(_DWORD *)(v19 + 4472))-- == 1 )
      v33 = 1;
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v19, *(unsigned int *)(v19 + 4472));
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 4464), v36);
    if ( v33 )
    {
      v47 = *(struct _KEVENT **)(v19 + 1608);
      if ( v47 )
        KeSetEvent(v47, 0, 0);
    }
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v19);
  }
  else
  {
    *(_QWORD *)(v24 + 32) = v56;
    *(_DWORD *)(v24 + 68) = 1;
    *(_QWORD *)(v24 + 40) = DeferredContext;
    *(_QWORD *)(v24 + 48) = SystemArgument1;
    *(_QWORD *)(v24 + 56) = SystemArgument2;
    *(_DWORD *)(v24 + 64) = Number;
    if ( Type_high )
    {
      if ( HIBYTE(word_1C0093FDC) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C0093FD0;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v24 + 68) |= 2u;
      v25 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v25 + 2);
      v26 = (__int64 *)*((_QWORD *)v25 + 1);
      if ( (char *)*v26 != v25 )
        __fastfail(3u);
      *(_QWORD *)v24 = v25;
      *(_QWORD *)(v24 + 8) = v26;
      *v26 = v24;
      *((_QWORD *)v25 + 1) = v24;
      ++*((_DWORD *)v25 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v25 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v25 + 1, 0, 1, 0);
      if ( !_InterlockedExchange(
              (volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number),
              1) )
      {
        HIDWORD(v27) = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
        v28.QuadPart = -1LL;
        if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
          v28 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
        LODWORD(v27) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v27],
          v28,
          (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v27 + 8]);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v24, CriticalWorkQueue);
    }
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
}
