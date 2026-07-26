/*
 * XREFs of ndisInterruptDpc @ 0x1C0003D80
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0012D20 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
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
  KSPIN_LOCK *v15; // r10
  int v16; // r14d
  void (__fastcall *v17)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r12
  char v18; // r15
  char DatapathCyclesMask; // di
  __int64 v20; // rcx
  PVOID v21; // r12
  unsigned __int8 v22; // al
  __int64 v23; // r15
  unsigned int v24; // r12d
  KIRQL v25; // al
  struct _NDIS_REFCOUNT_BLOCK *v26; // rcx
  KIRQL v27; // r14
  int v28; // r14d
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  char *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  LARGE_INTEGER v35; // rax
  __int64 v36; // rdi
  unsigned int Number; // eax
  bool v38; // zf
  __int64 v39; // rdx
  KIRQL v40; // al
  struct _NDIS_REFCOUNT_BLOCK *v41; // rcx
  KSPIN_LOCK *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  int v45; // eax
  char *v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  KSPIN_LOCK *Clock; // rax
  __int64 v53; // rax
  char v54; // [rsp+30h] [rbp-D0h]
  KIRQL v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+31h] [rbp-CFh]
  unsigned int v58; // [rsp+38h] [rbp-C8h]
  PKSPIN_LOCK v59; // [rsp+40h] [rbp-C0h]
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-B0h]
  struct _KDPC *v62; // [rsp+58h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v63; // [rsp+60h] [rbp-A0h] BYREF
  struct NDIS_PCW_CONTEXT v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h]
  _QWORD WnodeEventItem[6]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v67[6]; // [rsp+C8h] [rbp-38h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+F8h] [rbp-8h] BYREF

  v4 = *((_QWORD *)DeferredContext + 12);
  v5 = -1;
  v62 = Dpc;
  CurrentCpu = -1;
  v63.CurrentCpu = -1;
  v10 = *(_DWORD *)(v4 + 48);
  v63.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v11 = *(_DWORD *)(v4 + 80);
  v63.DatapathEventsMask = v10;
  v63.DatapathCyclesMask = v11;
  if ( (v11 & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v63, 0xCu, 0x23uLL);
    LOBYTE(v10) = v63.DatapathEventsMask;
    CurrentCpu = v63.CurrentCpu;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v63.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)v63.PcwBlock->DatapathEventReferences
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( dword_1C0098DC4 == -1
    || (v22 = *(_BYTE *)(v4 + 32), v22 <= 6u) && (v22 != 6 || *(_BYTE *)(v4 + 33) < 0x14u)
    || (*(_DWORD *)(v4 + 124) & 0x400000) != 0 )
  {
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0
      || !ndisDpcWatchdogLimit
      || WatchdogInformation.DpcWatchdogCount >= ndisDpcWatchdogLimit )
    {
      v14 = *((_QWORD *)DeferredContext + 12);
      v15 = (KSPIN_LOCK *)*((_QWORD *)DeferredContext + 3);
      v16 = 0;
      v17 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
      v60 = 0LL;
      v64.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v14 + 40);
      v64.DatapathEventsMask = *(_DWORD *)(v14 + 48);
      v64.DatapathCyclesMask = *(_DWORD *)(v14 + 80);
      v59 = v15;
      SpinLock = 0LL;
      v64.CurrentCpu = -1;
      if ( HIBYTE(dword_1C009AF18) )
      {
        v18 = 1;
        ndisTraceDpcStart(v14, 1LL);
        Clock = (KSPIN_LOCK *)WmiGetClock(0LL, 0LL, v50, v51);
        v15 = v59;
        SpinLock = Clock;
      }
      else
      {
        v18 = 0;
      }
      if ( DeferredContext[4] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1 )
          goto LABEL_22;
      }
      else
      {
        if ( byte_1C0098DC1 )
        {
          if ( dword_1C0098DCC )
          {
            v5 = dword_1C0098DC4;
          }
          else
          {
            v5 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12)
                                                               + *(_QWORD *)(v14 + 3312))];
            if ( dword_1C0098DC4 < v5 )
              v5 = dword_1C0098DC4;
          }
        }
        LODWORD(v60) = v5;
        DatapathCyclesMask = v64.DatapathCyclesMask;
        if ( (v64.DatapathCyclesMask & 1) != 0 )
        {
          ndisPcwStartCycleCounter(&v64, 0);
          DatapathCyclesMask = v64.DatapathCyclesMask;
        }
        v20 = *((_QWORD *)DeferredContext + 1);
        if ( DeferredContext[193] == 1 )
        {
          v17(v20, (unsigned int)SystemArgument1, SystemArgument2, &v60, 0LL);
          v21 = SystemArgument2;
        }
        else
        {
          v21 = SystemArgument2;
          ((void (__fastcall *)(__int64, PVOID, __int64 *, _QWORD))v15)(v20, SystemArgument2, &v60, 0LL);
        }
        if ( (DatapathCyclesMask & 1) != 0 )
          ndisPcwEndCycleCounter(&v64, 0, 0xDuLL);
        if ( (v60 & 0x100000000LL) != 0 )
        {
          v36 = *((_QWORD *)DeferredContext + 12);
          v56 = byte_1C0098DC1;
          Number = KeGetPcr()->Prcb.Number;
          v38 = (*(_DWORD *)(v36 + 48) & 0x800000) == 0;
          v39 = *(_QWORD *)(v36 + 40);
          v65 = v36;
          v58 = Number;
          if ( !v38 )
          {
            v48 = v39 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
            ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v48 + 288);
          }
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 4464));
          v41 = *(struct _NDIS_REFCOUNT_BLOCK **)(v36 + 4920);
          v55 = v40;
          if ( v41 )
            NdisReferenceWithTag(v41);
          v42 = (KSPIN_LOCK *)(v36 + 4464);
          ++*(_DWORD *)(v36 + 4472);
          if ( (unsigned __int8)byte_1C009961B >= 4u )
          {
            WPP_SF_qD(13LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v36, *(unsigned int *)(v36 + 4472));
            v42 = (KSPIN_LOCK *)(v36 + 4464);
          }
          KeReleaseSpinLock(v42, v55);
          if ( DeferredContext[193] )
            v16 = (int)SystemArgument1;
          v43 = *((_QWORD *)DeferredContext + 27) + 80LL * (v58 + ndisMaxNumberOfProcessors * v16);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v43 + 72));
          if ( (*(_DWORD *)(v43 + 68) & 1) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
            LOBYTE(v44) = 77;
            ndisDereferenceMiniport(v65, v44);
          }
          else
          {
            *(_QWORD *)(v43 + 32) = v62;
            *(_DWORD *)(v43 + 64) = v58;
            *(_QWORD *)(v43 + 40) = DeferredContext;
            *(_QWORD *)(v43 + 48) = SystemArgument1;
            *(_QWORD *)(v43 + 56) = v21;
            *(_DWORD *)(v43 + 68) = 1;
            if ( v56 )
            {
              v45 = 1;
              if ( HIBYTE(word_1C009AF1C) )
              {
                memset((char *)v67 + 2, 0, 0x2EuLL);
                HIDWORD(v67[5]) = 0x20000;
                LOWORD(v67[0]) = 48;
                v67[1] = qword_1C009AF10;
                *(GUID *)&v67[3] = EtwGuidNdisReceive;
                BYTE4(v67[0]) = 24;
                IoWMIWriteEvent(v67);
                v45 = *(_DWORD *)(v43 + 68);
              }
              *(_DWORD *)(v43 + 68) = v45 | 2;
              v46 = (char *)qword_1C0098E00 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v46 + 2);
              v47 = (__int64 *)*((_QWORD *)v46 + 1);
              if ( (char *)*v47 != v46 )
                __fastfail(3u);
              *(_QWORD *)v43 = v46;
              *(_QWORD *)(v43 + 8) = v47;
              *v47 = v43;
              *((_QWORD *)v46 + 1) = v43;
              ++*((_DWORD *)v46 + 6);
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v46 + 2);
              KeReleaseSemaphore((PRKSEMAPHORE)v46 + 1, 0, 1, 0);
              ndisQueuePeriodicReceivesTimer();
            }
            else
            {
              ExQueueWorkItem((PWORK_QUEUE_ITEM)v43, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
            }
          }
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v43 + 72));
          goto LABEL_22;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1
          || !DeferredContext[4] )
        {
LABEL_22:
          if ( v18 )
          {
            v53 = WmiGetClock(0LL, 0LL, v12, v13);
            ndisTraceDpcEnd(v14, 1LL, v53 - (_QWORD)SpinLock);
          }
          return;
        }
      }
      KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
      goto LABEL_22;
    }
  }
  v23 = *((_QWORD *)DeferredContext + 12);
  v24 = KeGetPcr()->Prcb.Number;
  v54 = byte_1C0098DC1;
  if ( (*(_DWORD *)(v23 + 48) & 0x800000) != 0 )
  {
    v49 = *(_QWORD *)(v23 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v49 + 288);
  }
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4464));
  v26 = *(struct _NDIS_REFCOUNT_BLOCK **)(v23 + 4920);
  v27 = v25;
  if ( v26 )
    NdisReferenceWithTag(v26);
  ++*(_DWORD *)(v23 + 4472);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(13LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v23, *(unsigned int *)(v23 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 4464), v27);
  v28 = 0;
  if ( DeferredContext[193] )
    v28 = (int)SystemArgument1;
  v29 = *((_QWORD *)DeferredContext + 27) + 80LL * (v24 + ndisMaxNumberOfProcessors * v28);
  SpinLock = (PKSPIN_LOCK)(v29 + 72);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v29 + 72));
  if ( (*(_DWORD *)(v29 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    LOBYTE(v30) = 77;
    ndisDereferenceMiniport(v23, v30);
  }
  else
  {
    *(_QWORD *)(v29 + 32) = v62;
    *(_DWORD *)(v29 + 68) = 1;
    *(_QWORD *)(v29 + 40) = DeferredContext;
    *(_QWORD *)(v29 + 48) = SystemArgument1;
    *(_QWORD *)(v29 + 56) = SystemArgument2;
    *(_DWORD *)(v29 + 64) = v24;
    if ( v54 )
    {
      v31 = 1;
      if ( HIBYTE(word_1C009AF1C) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C009AF10;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
        v31 = *(_DWORD *)(v29 + 68);
      }
      *(_DWORD *)(v29 + 68) = v31 | 2;
      v32 = (char *)qword_1C0098E00 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v32 + 2);
      v33 = (__int64 *)*((_QWORD *)v32 + 1);
      if ( (char *)*v33 != v32 )
        __fastfail(3u);
      *(_QWORD *)v29 = v32;
      *(_QWORD *)(v29 + 8) = v33;
      *v33 = v29;
      *((_QWORD *)v32 + 1) = v29;
      ++*((_DWORD *)v32 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v32 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v32 + 1, 0, 1, 0);
      v34 = KeGetPcr()->Prcb.Number;
      if ( !_InterlockedExchange((volatile __int32 *)qword_1C0098DF8 + v34, 1) )
      {
        v35 = DueTime;
        if ( !DueTime.QuadPart )
          v35.QuadPart = -1LL;
        LODWORD(v34) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)qword_1C0098DF0 + 2 * v34,
          v35,
          (PKDPC)qword_1C0098DF0 + 2 * (unsigned __int64)(unsigned int)v34 + 1);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v29, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
}
