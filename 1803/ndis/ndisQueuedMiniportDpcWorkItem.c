/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0007AB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  unsigned int Number; // edx
  __int64 v3; // rax
  ULONG v4; // ecx
  __int64 v5; // rdi
  char v6; // r15
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned int v12; // ebx
  void (__fastcall *v13)(__int64, __int64, __int64 *, _QWORD); // r12
  void (__fastcall *v14)(__int64, _QWORD, __int64, __int64 *, _QWORD); // r13
  char DatapathCyclesMask; // bl
  __int64 v16; // rcx
  KIRQL v17; // al
  ULONG_PTR v18; // r8
  KIRQL v19; // si
  __int64 v20; // rcx
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // dl
  char v23; // al
  int v24; // ebx
  __int64 v25; // r9
  __int64 v26; // rsi
  unsigned int v27; // r15d
  char v28; // r12
  KIRQL v29; // al
  struct _NDIS_REFCOUNT_BLOCK *v30; // rcx
  KIRQL v31; // r13
  __int64 v32; // rbx
  __int64 v33; // rdx
  int v34; // eax
  char *v35; // rdi
  __int64 *v36; // rax
  __int64 v37; // rcx
  LARGE_INTEGER v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  ULONG_PTR v43; // rbx
  unsigned int v44; // edx
  int v45; // ecx
  struct _KEVENT *v46; // rcx
  char v47; // [rsp+38h] [rbp-79h]
  KIRQL NewIrql; // [rsp+39h] [rbp-78h]
  char v49; // [rsp+3Ah] [rbp-77h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v51; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-69h]
  ULONG v53; // [rsp+4Ch] [rbp-65h]
  __int64 v54; // [rsp+50h] [rbp-61h]
  __int64 v55; // [rsp+58h] [rbp-59h]
  __int64 Clock; // [rsp+60h] [rbp-51h]
  struct NDIS_PCW_CONTEXT v57; // [rsp+68h] [rbp-49h] BYREF
  __int64 v58; // [rsp+80h] [rbp-31h]
  __int64 v59; // [rsp+88h] [rbp-29h]
  _QWORD WnodeEventItem[6]; // [rsp+90h] [rbp-21h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+C0h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+D0h] [rbp+1Fh] BYREF

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v58 = v3;
  v8 = *(_QWORD *)(v5 + 96);
  v54 = *(_QWORD *)(a1 + 48);
  v55 = *(_QWORD *)(a1 + 56);
  v52 = Number;
  v53 = v4;
  v49 = v7;
  NewIrql = 0;
  if ( Number != v4 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v4, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    NewIrql = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v11 = *(_QWORD *)(v5 + 96);
  Clock = 0LL;
  v12 = -1;
  v13 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(v5 + 24);
  v14 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *, _QWORD))(v5 + 184);
  v51 = 0LL;
  v57.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v11 + 40);
  v57.DatapathEventsMask = *(_DWORD *)(v11 + 48);
  v57.DatapathCyclesMask = *(_DWORD *)(v11 + 80);
  v59 = v11;
  v57.CurrentCpu = -1;
  if ( HIBYTE(dword_1C009AF18) )
  {
    v47 = 1;
    ndisTraceDpcStart(v11, 1LL);
    Clock = WmiGetClock(0LL, 0LL, v40, v41);
  }
  else
  {
    v47 = 0;
  }
  if ( *(_BYTE *)(v5 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) != 1 )
      goto LABEL_21;
    goto LABEL_65;
  }
  if ( byte_1C0098DC1 )
  {
    if ( dword_1C0098DCC )
    {
      v12 = dword_1C0098DC4;
    }
    else
    {
      v12 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(v11 + 3312))];
      if ( dword_1C0098DC4 < v12 )
        v12 = dword_1C0098DC4;
    }
  }
  LODWORD(v51) = v12;
  DatapathCyclesMask = v57.DatapathCyclesMask;
  if ( (v57.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v57, 0);
    DatapathCyclesMask = v57.DatapathCyclesMask;
  }
  v16 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v5 + 193) == 1 )
    v14(v16, (unsigned int)v54, v55, &v51, 0LL);
  else
    v13(v16, v55, &v51, 0LL);
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v57, 0, 0xDuLL);
  if ( (v51 & 0x100000000LL) == 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) != 1 || !*(_BYTE *)(v5 + 4) )
      goto LABEL_21;
LABEL_65:
    KeSetEvent((PRKEVENT)(v5 + 128), 0, 0);
    goto LABEL_21;
  }
  v26 = *(_QWORD *)(v5 + 96);
  v27 = KeGetPcr()->Prcb.Number;
  v28 = byte_1C0098DC1;
  if ( (*(_DWORD *)(v26 + 48) & 0x800000) != 0 )
  {
    v39 = *(_QWORD *)(v26 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v39 + 288);
  }
  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4464));
  v30 = *(struct _NDIS_REFCOUNT_BLOCK **)(v26 + 4920);
  v31 = v29;
  if ( v30 )
    NdisReferenceWithTag(v30);
  ++*(_DWORD *)(v26 + 4472);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(13LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v26, *(unsigned int *)(v26 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 4464), v31);
  v32 = *(_QWORD *)(v5 + 216) + 80 * (v27 + ndisMaxNumberOfProcessors * (*(_BYTE *)(v5 + 193) != 0 ? v54 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v32 + 72));
  if ( (*(_DWORD *)(v32 + 68) & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF);
    LOBYTE(v33) = 77;
    ndisDereferenceMiniport(v26, v33);
  }
  else
  {
    *(_QWORD *)(v32 + 32) = v58;
    *(_QWORD *)(v32 + 48) = v54;
    *(_QWORD *)(v32 + 56) = v55;
    *(_QWORD *)(v32 + 40) = v5;
    *(_DWORD *)(v32 + 64) = v27;
    *(_DWORD *)(v32 + 68) = 1;
    if ( v28 )
    {
      v34 = 1;
      if ( HIBYTE(word_1C009AF1C) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C009AF10;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
        v34 = *(_DWORD *)(v32 + 68);
      }
      *(_DWORD *)(v32 + 68) = v34 | 2;
      v35 = (char *)qword_1C0098E00 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v35 + 2);
      v36 = (__int64 *)*((_QWORD *)v35 + 1);
      if ( (char *)*v36 != v35 )
        __fastfail(3u);
      *(_QWORD *)v32 = v35;
      *(_QWORD *)(v32 + 8) = v36;
      *v36 = v32;
      *((_QWORD *)v35 + 1) = v32;
      ++*((_DWORD *)v35 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v35 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v35 + 1, 0, 1, 0);
      HIDWORD(v37) = HIDWORD(qword_1C0098DF8);
      if ( !_InterlockedExchange((volatile __int32 *)qword_1C0098DF8 + KeGetPcr()->Prcb.Number, 1) )
      {
        v38 = DueTime;
        if ( !DueTime.QuadPart )
          v38.QuadPart = -1LL;
        LODWORD(v37) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)qword_1C0098DF0 + 2 * v37,
          v38,
          (PKDPC)qword_1C0098DF0 + 2 * (unsigned __int64)(unsigned int)v37 + 1);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v32, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v32 + 72));
  v11 = v59;
  v7 = v49;
LABEL_21:
  if ( v47 )
  {
    v42 = WmiGetClock(0LL, 0LL, v9, v10);
    ndisTraceDpcEnd(v11, 1LL, v42 - Clock);
  }
  if ( !v7 && NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v52 != v53 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v8, v10);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4464));
  v18 = *(_QWORD *)(v8 + 4920);
  v19 = v17;
  if ( v18 )
  {
    if ( v18 - 2 <= 1 )
    {
      v18 = 0LL;
    }
    else if ( v18 == 1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( v18 )
    {
      if ( *(_BYTE *)(v18 + 2) <= 0x4Du )
        ndisBugCheckEx(0x1EuLL, 2uLL, v18, 0x4DuLL);
      if ( *(_BYTE *)(v18 + 1) )
      {
        if ( *(_BYTE *)(v18 + 1) == 1 )
        {
          v43 = v18 + 4936;
          v44 = *(_DWORD *)(v18 + 4992);
          v45 = (unsigned __int16)v44 >> 1;
          if ( v44 >> 17 < 0x3FFE && v45 == (v44 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v18 + 4936));
            *(_DWORD *)(v43 + 56) &= 0x10001u;
          }
          else
          {
            if ( v45 == 0 && (v44 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v18, 0x4DuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v18 + 4936), 0);
          }
        }
      }
      else
      {
        v20 = *(_QWORD *)(v18 + 8);
        if ( v20 && (v21 = *(_BYTE *)(v18 + 3), v22 = 0, v21) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v20 + 2LL * v22) == 77 )
            {
              v23 = *(_BYTE *)(v20 + 2LL * v22 + 1);
              if ( v23 )
                break;
            }
            if ( ++v22 >= v21 )
              goto LABEL_38;
          }
          *(_BYTE *)(v20 + 2LL * v22 + 1) = v23 - 1;
        }
        else
        {
LABEL_38:
          if ( !_bittestandreset((signed __int32 *)(v18 + 24), 0xDu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v18, 0x4DuLL);
        }
      }
    }
  }
  v24 = *(_DWORD *)(v8 + 4472) - 1;
  *(_DWORD *)(v8 + 4472) = v24;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v8, *(unsigned int *)(v8 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4464), v19);
  if ( !v24 )
  {
    v46 = *(struct _KEVENT **)(v8 + 1608);
    if ( v46 )
      KeSetEvent(v46, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v8, v25);
}
