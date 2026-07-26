/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C000E960
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
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

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  unsigned int Number; // r12d
  __int64 v3; // rax
  __int64 v4; // rsi
  char v5; // r14
  char v6; // r14
  ULONG v7; // r15d
  __int64 v8; // rdi
  KSPIN_LOCK *v9; // r11
  __int64 v10; // rbx
  unsigned int *v11; // r10
  char v12; // r13
  unsigned int v13; // ecx
  char DatapathCyclesMask; // bl
  __int64 v15; // rcx
  __int64 v16; // r14
  char v17; // di
  KIRQL v18; // al
  ULONG_PTR v19; // r10
  KIRQL v20; // si
  __int64 v21; // r9
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // al
  _BYTE *v24; // rdx
  bool v25; // zf
  unsigned int *v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rdx
  KIRQL v29; // al
  __int64 v30; // r9
  int v31; // edx
  int v32; // ebx
  _WORD *v33; // r8
  __int64 v34; // r11
  unsigned __int8 v35; // r10
  _BYTE *v36; // rcx
  KSPIN_LOCK *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  char *v40; // rsi
  __int64 *v41; // rax
  __int64 v42; // rcx
  LARGE_INTEGER v43; // rax
  __int64 Clock; // rax
  __int64 v45; // rax
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // dl
  __int64 v48; // rax
  ULONG_PTR v49; // r15
  unsigned int v50; // edx
  struct _KEVENT *v51; // rcx
  KIRQL v52; // [rsp+30h] [rbp-99h]
  KIRQL v53; // [rsp+31h] [rbp-98h]
  char Type_high; // [rsp+32h] [rbp-97h]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-91h]
  PKSPIN_LOCK SpinLocka; // [rsp+38h] [rbp-91h]
  unsigned int v57; // [rsp+40h] [rbp-89h]
  __int64 v58; // [rsp+48h] [rbp-81h]
  __int64 v59; // [rsp+50h] [rbp-79h] BYREF
  unsigned int *v60; // [rsp+58h] [rbp-71h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-69h] BYREF
  __int64 v62; // [rsp+68h] [rbp-61h]
  __int64 v63; // [rsp+70h] [rbp-59h]
  __int64 v64; // [rsp+78h] [rbp-51h]
  __int64 v65; // [rsp+80h] [rbp-49h]
  struct NDIS_PCW_CONTEXT v66; // [rsp+88h] [rbp-41h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-29h]
  _QWORD WnodeEventItem[6]; // [rsp+A8h] [rbp-21h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+D8h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+E8h] [rbp+1Fh] BYREF

  v52 = 0;
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
  v67 = v3;
  v65 = *(_QWORD *)(v4 + 96);
  v62 = *(_QWORD *)(a1 + 48);
  v63 = *(_QWORD *)(a1 + 56);
  if ( Number != v7 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v7, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v6 )
    v52 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)(v4 + 96);
  v9 = *(KSPIN_LOCK **)(v4 + 24);
  v10 = 0LL;
  v11 = *(unsigned int **)(v4 + 184);
  v59 = 0LL;
  v66.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
  v66.DatapathEventsMask = *(_DWORD *)(v8 + 48);
  v66.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
  SpinLock = v9;
  v60 = v11;
  v58 = 0LL;
  v66.CurrentCpu = -1;
  if ( HIBYTE(dword_1C0093FD8) )
  {
    v12 = 1;
    ndisTraceDpcStart(v8, 1LL);
    Clock = WmiGetClock(0LL, 0LL);
    v11 = v60;
    v9 = SpinLock;
    v10 = Clock;
    v58 = Clock;
  }
  else
  {
    v12 = 0;
  }
  if ( !*(_BYTE *)(v4 + 4) )
  {
    if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
    {
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        v13 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
      else
      {
        v13 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v8 + 3312) + (KeGetPcr()->Prcb.Number << 12))];
        if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v13 )
          v13 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
    }
    else
    {
      v13 = -1;
    }
    DatapathCyclesMask = v66.DatapathCyclesMask;
    LODWORD(v59) = v13;
    if ( (v66.DatapathCyclesMask & 1) != 0 )
    {
      ndisPcwStartCycleCounter(&v66, 0);
      DatapathCyclesMask = v66.DatapathCyclesMask;
    }
    v15 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v4 + 193) == 1 )
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 *, _QWORD))v11)(v15, (unsigned int)v62, v63, &v59, 0LL);
    else
      ((void (__fastcall *)(__int64, __int64, __int64 *, _QWORD))v9)(v15, v63, &v59, 0LL);
    if ( (DatapathCyclesMask & 1) != 0 )
      ndisPcwEndCycleCounter(&v66, 0, 0xDuLL);
    if ( (v59 & 0x100000000LL) == 0 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v4 + 104)) && *(_BYTE *)(v4 + 4) )
        KeSetEvent((PRKEVENT)(v4 + 128), 0, 0);
LABEL_22:
      v10 = v58;
      goto LABEL_23;
    }
    v26 = *(unsigned int **)(v4 + 96);
    Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
    v27 = KeGetPcr()->Prcb.Number;
    v25 = (v26[12] & 0x800000) == 0;
    v28 = *((_QWORD *)v26 + 5);
    v60 = v26;
    v57 = v27;
    if ( !v25 )
    {
      v45 = v28 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v45 + 288);
    }
    SpinLocka = (PKSPIN_LOCK)(v26 + 1116);
    v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26 + 558);
    v30 = *((_QWORD *)v26 + 615);
    v53 = v29;
    v64 = v30;
    if ( v30 )
    {
      v31 = *(unsigned __int8 *)(v30 + 1);
      if ( !*(_BYTE *)(v30 + 1) )
      {
        v32 = 0;
        v33 = 0LL;
        if ( _bittestandset((signed __int32 *)(v30 + 24), 0xDu) )
        {
          v34 = *(_QWORD *)(v30 + 8);
          if ( v34 && (v35 = *(_BYTE *)(v30 + 3)) != 0 )
          {
            do
            {
              v36 = (_BYTE *)(v34 + 2LL * (unsigned __int8)v31);
              if ( *v36 == 77 )
              {
                if ( v36[1] != 0xFF )
                {
                  ++v36[1];
                  goto LABEL_62;
                }
              }
              else if ( !v36[1] )
              {
                v33 = (_WORD *)(v34 + 2LL * (unsigned __int8)v31);
              }
              LOBYTE(v31) = v31 + 1;
            }
            while ( (unsigned __int8)v31 < v35 );
            if ( !v33 )
              goto LABEL_85;
            *v33 = 333;
          }
          else
          {
LABEL_85:
            if ( !*(_BYTE *)(v30 + 1) )
            {
              v46 = *(_BYTE *)(v30 + 3);
              if ( v46 == 0xFF )
              {
                ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v30);
                v30 = v64;
                *(_BYTE *)(v64 + 1) = 2;
              }
              else
              {
                if ( (unsigned int)v46 + 2 <= 0xFF )
                  v47 = v46 + 2;
                else
                  v47 = -1;
                ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v30, v47);
                v30 = v64;
              }
            }
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v30);
          }
        }
        goto LABEL_62;
      }
      if ( v31 == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v30 + 4936), 1u);
    }
    v32 = 0;
LABEL_62:
    v37 = SpinLocka;
    ++*((_DWORD *)SpinLocka + 2);
    if ( (unsigned __int8)byte_1C009261B >= 4u )
    {
      WPP_SF_qD(13LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v60, v60[1118]);
      v37 = SpinLocka;
    }
    KeReleaseSpinLock(v37, v53);
    if ( *(_BYTE *)(v4 + 193) )
      v32 = v62;
    v38 = *(_QWORD *)(v4 + 216) + 80LL * (v57 + ndisMaxNumberOfProcessors * v32);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v38 + 72));
    if ( (*(_DWORD *)(v38 + 68) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 104));
      LOBYTE(v39) = 77;
      ndisDereferenceMiniport(v60, v39);
    }
    else
    {
      *(_QWORD *)(v38 + 32) = v67;
      *(_QWORD *)(v38 + 48) = v62;
      *(_QWORD *)(v38 + 56) = v63;
      *(_DWORD *)(v38 + 64) = v57;
      *(_QWORD *)(v38 + 40) = v4;
      *(_DWORD *)(v38 + 68) = 1;
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
        *(_DWORD *)(v38 + 68) |= 2u;
        v40 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v40 + 2);
        v41 = (__int64 *)*((_QWORD *)v40 + 1);
        if ( (char *)*v41 != v40 )
          __fastfail(3u);
        *(_QWORD *)v38 = v40;
        *(_QWORD *)(v38 + 8) = v41;
        *v41 = v38;
        *((_QWORD *)v40 + 1) = v38;
        ++*((_DWORD *)v40 + 6);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v40 + 2);
        KeReleaseSemaphore((PRKSEMAPHORE)v40 + 1, 0, 1, 0);
        if ( !_InterlockedExchange(
                (volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number),
                1) )
        {
          HIDWORD(v42) = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
          v43.QuadPart = -1LL;
          if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
            v43 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
          LODWORD(v42) = KeGetPcr()->Prcb.Number;
          KeSetTimer(
            (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v42],
            v43,
            (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v42 + 8]);
        }
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v38, CriticalWorkQueue);
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v38 + 72));
    goto LABEL_22;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v4 + 104)) )
    KeSetEvent((PRKEVENT)(v4 + 128), 0, 0);
LABEL_23:
  if ( v12 )
  {
    v48 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v8, 1LL, v48 - v10);
  }
  if ( !v6 && v52 != 2 )
    KeLowerIrql(v52);
  if ( Number != v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v16 = v65;
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v65);
  v17 = 0;
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 4464));
  v19 = *(_QWORD *)(v16 + 4920);
  v20 = v18;
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 1) )
    {
      if ( *(_BYTE *)(v19 + 1) == 1 )
      {
        v49 = v19 + 4936;
        v50 = *(_DWORD *)(v19 + 4992);
        if ( v50 >> 17 < 0x3FFE && (unsigned __int16)v50 >> 1 == (v50 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v19 + 4936));
          *(_DWORD *)(v49 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v50 & 0xFFFE) == 0 && (v50 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v16 + 4920), 0x4DuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v19 + 4936), 0);
        }
      }
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 8);
      if ( v21 && (v22 = *(_BYTE *)(v19 + 3), v23 = 0, v22) )
      {
        while ( 1 )
        {
          v24 = (_BYTE *)(v21 + 2LL * v23);
          if ( *v24 == 77 )
          {
            if ( v24[1] )
              break;
          }
          if ( ++v23 >= v22 )
            goto LABEL_36;
        }
        --v24[1];
      }
      else
      {
LABEL_36:
        if ( !_bittestandreset((signed __int32 *)(v19 + 24), 0xDu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v19, 0x4DuLL);
      }
    }
  }
  v25 = (*(_DWORD *)(v16 + 4472))-- == 1;
  if ( v25 )
    v17 = 1;
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v16, *(unsigned int *)(v16 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 4464), v20);
  if ( v17 )
  {
    v51 = *(struct _KEVENT **)(v16 + 1608);
    if ( v51 )
      KeSetEvent(v51, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v16);
}
