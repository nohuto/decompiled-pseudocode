/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
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

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  unsigned int Number; // r12d
  __int64 v3; // rax
  __int64 v4; // rsi
  char v5; // r14
  char v6; // r14
  ULONG v7; // r15d
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  KSPIN_LOCK *v11; // r11
  __int64 v12; // rbx
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  char v14; // r13
  unsigned int v15; // ecx
  char DatapathCyclesMask; // bl
  __int64 v17; // rcx
  __int64 v18; // r14
  char v19; // di
  KIRQL v20; // al
  ULONG_PTR v21; // r10
  KIRQL v22; // si
  __int64 v23; // r9
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // al
  _BYTE *v26; // rdx
  bool v27; // zf
  char v28; // cl
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rdx
  KIRQL v32; // al
  struct _NDIS_REFCOUNT_BLOCK *v33; // rcx
  KSPIN_LOCK *v34; // rax
  int v35; // eax
  __int64 v36; // rbx
  char *v37; // rsi
  __int64 *v38; // rax
  __int64 v39; // rcx
  LARGE_INTEGER v40; // rax
  __int64 Clock; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  ULONG_PTR v44; // r15
  unsigned int v45; // edx
  struct _KEVENT *v46; // rcx
  KIRQL v47; // [rsp+30h] [rbp-99h]
  KIRQL v48; // [rsp+31h] [rbp-98h]
  char v49; // [rsp+32h] [rbp-97h]
  __int64 v50; // [rsp+38h] [rbp-91h]
  PKSPIN_LOCK SpinLock; // [rsp+40h] [rbp-89h]
  void (__fastcall *v52)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-81h]
  unsigned int v53; // [rsp+48h] [rbp-81h]
  __int64 v54; // [rsp+50h] [rbp-79h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp-71h] BYREF
  __int64 v56; // [rsp+60h] [rbp-69h]
  __int64 v57; // [rsp+68h] [rbp-61h]
  __int64 v58; // [rsp+70h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v59; // [rsp+78h] [rbp-51h] BYREF
  __int64 v60; // [rsp+90h] [rbp-39h]
  __int64 v61; // [rsp+98h] [rbp-31h]
  _QWORD WnodeEventItem[6]; // [rsp+A0h] [rbp-29h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+D0h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+E0h] [rbp+17h] BYREF

  v47 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v6 = v5 & 2;
  v7 = *(_DWORD *)(a1 + 64);
  v60 = v3;
  v58 = *(_QWORD *)(v4 + 96);
  v56 = *(_QWORD *)(a1 + 48);
  v57 = *(_QWORD *)(a1 + 56);
  if ( Number != v7 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v7, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v6 )
    v47 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v10 = *(_QWORD *)(v4 + 96);
  v11 = *(KSPIN_LOCK **)(v4 + 24);
  v12 = 0LL;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v4 + 184);
  v54 = 0LL;
  v59.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v10 + 40);
  v59.DatapathEventsMask = *(_DWORD *)(v10 + 48);
  v59.DatapathCyclesMask = *(_DWORD *)(v10 + 80);
  SpinLock = v11;
  v52 = v13;
  v50 = 0LL;
  v59.CurrentCpu = -1;
  if ( HIBYTE(dword_1C0099FD8) )
  {
    v14 = 1;
    ndisTraceDpcStart(v10, 1LL, v8, v9);
    Clock = WmiGetClock(0LL, 0LL);
    v13 = v52;
    v11 = SpinLock;
    v12 = Clock;
    v50 = Clock;
  }
  else
  {
    v14 = 0;
  }
  if ( *(_BYTE *)(v4 + 4) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v4 + 104)) )
      KeSetEvent((PRKEVENT)(v4 + 128), 0, 0);
  }
  else
  {
    if ( byte_1C0097F01 )
    {
      if ( dword_1C0097F0C )
      {
        v15 = dword_1C0097F04;
      }
      else
      {
        v15 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(v10 + 3312))];
        if ( dword_1C0097F04 < v15 )
          v15 = dword_1C0097F04;
      }
    }
    else
    {
      v15 = -1;
    }
    DatapathCyclesMask = v59.DatapathCyclesMask;
    LODWORD(v54) = v15;
    if ( (v59.DatapathCyclesMask & 1) != 0 )
    {
      ndisPcwStartCycleCounter(&v59, 0);
      DatapathCyclesMask = v59.DatapathCyclesMask;
    }
    v17 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v4 + 193) == 1 )
      v13(v17, (unsigned int)v56, v57, &v54, 0LL);
    else
      ((void (__fastcall *)(__int64, __int64, __int64 *, _QWORD))v11)(v17, v57, &v54, 0LL);
    if ( (DatapathCyclesMask & 1) != 0 )
      ndisPcwEndCycleCounter(&v59, 0, 0xDuLL);
    if ( (v54 & 0x100000000LL) != 0 )
    {
      v29 = *(_QWORD *)(v4 + 96);
      v49 = byte_1C0097F01;
      v30 = KeGetPcr()->Prcb.Number;
      v27 = (*(_DWORD *)(v29 + 48) & 0x800000) == 0;
      v31 = *(_QWORD *)(v29 + 40);
      v61 = v29;
      v53 = v30;
      if ( !v27 )
      {
        v42 = v31 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v42 + 288);
      }
      v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v29 + 4464));
      v33 = *(struct _NDIS_REFCOUNT_BLOCK **)(v29 + 4920);
      v48 = v32;
      if ( v33 )
        NdisReferenceWithTag(v33, 0x4Du);
      v34 = (KSPIN_LOCK *)(v29 + 4464);
      ++*(_DWORD *)(v29 + 4472);
      if ( (unsigned __int8)byte_1C009875B >= 4u )
      {
        WPP_SF_qD(13LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v29, *(unsigned int *)(v29 + 4472));
        v34 = (KSPIN_LOCK *)(v29 + 4464);
      }
      KeReleaseSpinLock(v34, v48);
      v35 = 0;
      if ( *(_BYTE *)(v4 + 193) )
        v35 = v56;
      v36 = *(_QWORD *)(v4 + 216) + 80LL * (v53 + ndisMaxNumberOfProcessors * v35);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v36 + 72));
      if ( (*(_DWORD *)(v36 + 68) & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 104));
        ndisDereferenceMiniport(v61, 0x4Du);
      }
      else
      {
        *(_QWORD *)(v36 + 32) = v60;
        *(_QWORD *)(v36 + 48) = v56;
        *(_QWORD *)(v36 + 56) = v57;
        *(_DWORD *)(v36 + 64) = v53;
        *(_QWORD *)(v36 + 40) = v4;
        *(_DWORD *)(v36 + 68) = 1;
        if ( v49 )
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
          *(_DWORD *)(v36 + 68) |= 2u;
          v37 = (char *)qword_1C0097F40 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v37 + 2);
          v38 = (__int64 *)*((_QWORD *)v37 + 1);
          if ( (char *)*v38 != v37 )
            __fastfail(3u);
          *(_QWORD *)v36 = v37;
          *(_QWORD *)(v36 + 8) = v38;
          *v38 = v36;
          *((_QWORD *)v37 + 1) = v36;
          ++*((_DWORD *)v37 + 6);
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v37 + 2);
          KeReleaseSemaphore((PRKSEMAPHORE)v37 + 1, 0, 1, 0);
          if ( !_InterlockedExchange((volatile __int32 *)qword_1C0097F38 + KeGetPcr()->Prcb.Number, 1) )
          {
            HIDWORD(v39) = DueTime.HighPart;
            v40.QuadPart = -1LL;
            if ( DueTime.QuadPart )
              v40 = DueTime;
            LODWORD(v39) = KeGetPcr()->Prcb.Number;
            KeSetTimer(
              (PKTIMER)qword_1C0097F30 + 2 * v39,
              v40,
              (PKDPC)qword_1C0097F30 + 2 * (unsigned __int64)(unsigned int)v39 + 1);
          }
        }
        else
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v36, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v36 + 72));
    }
    else if ( !_InterlockedDecrement((volatile signed __int32 *)(v4 + 104)) && *(_BYTE *)(v4 + 4) )
    {
      KeSetEvent((PRKEVENT)(v4 + 128), 0, 0);
    }
    v12 = v50;
  }
  if ( v14 )
  {
    v43 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v10, 1LL, v43 - v12);
  }
  if ( !v6 && v47 != 2 )
    KeLowerIrql(v47);
  if ( Number != v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v18 = v58;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v58);
  v19 = 0;
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 4464));
  v21 = *(_QWORD *)(v18 + 4920);
  v22 = v20;
  if ( v21 )
  {
    if ( *(_BYTE *)(v21 + 1) )
    {
      if ( *(_BYTE *)(v21 + 1) == 1 )
      {
        v44 = v21 + 4936;
        v45 = *(_DWORD *)(v21 + 4992);
        if ( v45 >> 17 < 0x3FFE && (unsigned __int16)v45 >> 1 == (v45 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v21 + 4936));
          *(_DWORD *)(v44 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v45 & 0xFFFE) == 0 && (v45 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v18 + 4920), 0x4DuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v21 + 4936), 0);
        }
      }
    }
    else
    {
      v23 = *(_QWORD *)(v21 + 8);
      if ( v23 && (v24 = *(_BYTE *)(v21 + 3), v25 = 0, v24) )
      {
        while ( 1 )
        {
          v26 = (_BYTE *)(v23 + 2LL * v25);
          if ( *v26 == 77 )
          {
            v28 = v26[1];
            if ( v28 )
              break;
          }
          if ( ++v25 >= v24 )
            goto LABEL_36;
        }
        v26[1] = v28 - 1;
      }
      else
      {
LABEL_36:
        if ( !_bittestandreset((signed __int32 *)(v21 + 24), 0xDu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v21, 0x4DuLL);
      }
    }
  }
  v27 = (*(_DWORD *)(v18 + 4472))-- == 1;
  if ( v27 )
    v19 = 1;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v18, *(unsigned int *)(v18 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 4464), v22);
  if ( v19 )
  {
    v46 = *(struct _KEVENT **)(v18 + 1608);
    if ( v46 )
      KeSetEvent(v46, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v18);
}
