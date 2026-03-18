/*
 * XREFs of CcPinFileData @ 0x14011C510
 * Callers:
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     CcPinRead @ 0x140554EC0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x14055E310 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x14055E4E4 (CcMapDataCommon.c)
 *     CcPinMappedData @ 0x1405B6940 (CcPinMappedData.c)
 *     CcMapData @ 0x1405B6DB0 (CcMapData.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     CcGetBcbListHeadLargeOffset @ 0x1400AE3C0 (CcGetBcbListHeadLargeOffset.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400B6530 (ExAcquireSharedStarveExclusive.c)
 *     CcAllocateInitializeBcb @ 0x1400DA798 (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14011E210 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x140220A9C (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140220AF4 (CcReferenceFileOffset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1402B9EB4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // r13
  __int64 v11; // r15
  volatile signed __int32 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // dl
  __int64 v15; // rcx
  __int64 v16; // rsi
  int SessionId; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v20; // r14
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rcx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v26; // rdi
  __int16 v27; // cx
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  ULONG_PTR v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // r14
  unsigned __int8 v33; // di
  signed __int32 v34; // eax
  __int64 v35; // rdx
  struct _ERESOURCE *v36; // rsi
  __int16 v37; // cx
  __int64 v38; // rbx
  struct _KTHREAD *v39; // rdi
  NTSTATUS v40; // r8d
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  unsigned int v43; // esi
  volatile signed __int32 *v44; // rbx
  struct _KTHREAD *v45; // rdi
  unsigned __int8 v46; // dl
  __int64 v47; // rcx
  __int64 v48; // rsi
  int v49; // eax
  unsigned __int8 v50; // di
  unsigned __int8 v51; // si
  signed __int32 v52; // eax
  _QWORD *v53; // r15
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // rdx
  __int16 v60; // cx
  ULONG_PTR v61; // rcx
  int v62; // edx
  __int64 v63; // rbx
  unsigned int v64; // r8d
  int v65; // eax
  unsigned int v66; // r14d
  unsigned int v67; // ebx
  char *v68; // rax
  struct _ERESOURCE *v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // rcx
  struct _KTHREAD *v73; // r8
  struct _KTHREAD *v74; // r9
  int v75; // eax
  unsigned __int8 v76; // al
  __int64 v77; // rdx
  struct _KEVENT *v78; // rcx
  __int64 v80; // rcx
  struct _KEVENT *v81; // rcx
  int v82; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v84; // [rsp+30h] [rbp-C8h]
  int v85; // [rsp+34h] [rbp-C4h]
  _QWORD *P; // [rsp+38h] [rbp-C0h]
  __int64 v87; // [rsp+40h] [rbp-B8h] BYREF
  int v88; // [rsp+48h] [rbp-B0h]
  int v89; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v90; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v91; // [rsp+58h] [rbp-A0h]
  int v92; // [rsp+60h] [rbp-98h] BYREF
  NTSTATUS v93; // [rsp+64h] [rbp-94h]
  int v94; // [rsp+68h] [rbp-90h]
  int v95; // [rsp+6Ch] [rbp-8Ch]
  int v96; // [rsp+70h] [rbp-88h] BYREF
  __int64 v97; // [rsp+78h] [rbp-80h] BYREF
  __int64 v98; // [rsp+80h] [rbp-78h]
  unsigned __int64 v99; // [rsp+88h] [rbp-70h]
  __int64 v100; // [rsp+90h] [rbp-68h]
  int v101; // [rsp+98h] [rbp-60h]
  int v102; // [rsp+9Ch] [rbp-5Ch]
  int v103; // [rsp+A0h] [rbp-58h]
  int v104; // [rsp+A4h] [rbp-54h]
  __int64 v105; // [rsp+A8h] [rbp-50h]
  __int64 v106; // [rsp+B0h] [rbp-48h]

  v88 = 0;
  v87 = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v100 = v10;
  v11 = a3;
  if ( (signed __int64)(a3 + *a2) > *(_QWORD *)(v10 + 32) )
    KeBugCheckEx(0x34u, 0x107uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v89 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v10, *a2);
  }
  else
  {
    *a8 = CcGetVirtualAddress(v10, *a2, (unsigned int)&v87, (unsigned int)&v89, (a6 & 0x40) != 0, 0);
  }
  v12 = (volatile signed __int32 *)(v10 + 280);
  v92 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v10 + 280, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary
    || ((v82 = 0, CurrentThread->AbOrphanedEntrySummary)
      ? (AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary,
         CurrentThread->AbOrphanedEntrySummary = 0,
         CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary,
         AbEntrySummary = CurrentThread->AbEntrySummary,
         v82 = 1)
      : (AbEntrySummary = 0),
        v82) )
  {
    _BitScanForward((unsigned int *)&v15, AbEntrySummary);
    v101 = v15;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v15);
    v16 = (__int64)&CurrentThread->LockEntries[v15];
  }
  else
  {
    v16 = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceAutoBoostEntryExhaustion(CurrentThread, v10 + 280);
  }
  if ( v16 )
  {
    if ( (unsigned __int64)v12 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[946] + (((unsigned __int64)v12 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v16 + 40) = SessionId;
    *(_QWORD *)(v16 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v10 + 280, (__int64)&v92);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v12, 0) )
    ExpAcquireFastMutexContended(v10 + 280, v16);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  *(_QWORD *)(v10 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v10 + 328) = CurrentIrql;
  v85 = 1;
  v20 = *a2;
  v21 = v20 + v11;
  v91 = v20 + v11;
  v22 = 0;
  v23 = v20 + 0x80000;
  v24 = *(_QWORD *)(v10 + 32);
  if ( v24 <= 0x200000 || (*(_DWORD *)(v10 + 152) & 0x200) == 0 )
    goto LABEL_20;
  if ( v24 > 0x2000000 )
  {
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v10, v20 + 0x80000, 1);
    goto LABEL_21;
  }
  if ( v23 < v24 )
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v10 + 88)
                                      + 8 * ((unsigned __int64)(unsigned int)v24 >> 18)
                                      + 16 * (v23 >> 19));
  else
LABEL_20:
    BcbListHeadLargeOffset = (_QWORD *)(v10 + 16);
LABEL_21:
  v26 = *BcbListHeadLargeOffset - 16LL;
  v98 = v26;
  if ( HIDWORD(v20) || *(_WORD *)v26 != 765 || *(_DWORD *)(v26 + 36) )
  {
    v71 = v20;
    while ( 1 )
    {
      LODWORD(v20) = v71;
      if ( *(_WORD *)v26 != 765 || v71 >= *(_QWORD *)(v26 + 32) )
        break;
      v72 = *(_QWORD *)(v26 + 8);
      if ( v71 >= v72 )
      {
LABEL_31:
        v22 = 1;
        break;
      }
      if ( v21 >= v72 )
        v21 = *(_QWORD *)(v26 + 8);
      v91 = v21;
      v26 = *(_QWORD *)(v26 + 16) - 16LL;
      v98 = v26;
    }
  }
  else
  {
    v27 = 765;
    v28 = v91;
    while ( v27 == 765 )
    {
      LODWORD(v20) = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 >= *(_DWORD *)(v26 + 32) )
        break;
      v29 = *(_DWORD *)(v26 + 8);
      if ( *(_DWORD *)a2 >= v29 )
        goto LABEL_31;
      if ( v28 >= v29 )
      {
        v28 = *(_DWORD *)(v26 + 8);
        LODWORD(v91) = v28;
        v21 = v91;
      }
      v26 = *(_QWORD *)(v26 + 16) - 16LL;
      v98 = v26;
      v27 = *(_WORD *)v26;
    }
  }
  v30 = v26;
  P = (_QWORD *)v26;
  if ( !v22 )
  {
    if ( (a6 & 8) == 0 )
    {
      v53 = a2;
      v62 = *a2;
      v97 = *a2;
      v63 = v21 - v97;
      LODWORD(v63) = (v97 & 0xFFF) + v63;
      v90 = v63;
      v64 = (v97 & 0xFFF) + v89;
      v89 = v64;
      v65 = *(_DWORD *)(v10 + 152);
      if ( (a4 || (v65 & 4) != 0) && !a5 )
      {
        v66 = v88;
      }
      else
      {
        v66 = 2;
        v88 = 2;
        if ( (v97 & 0xFFF) == 0 && a3 >= 0x1000 )
        {
          v66 = 3;
          v88 = 3;
        }
        if ( (v63 & 0xFFF) == 0 )
        {
          v66 |= 4u;
          v88 = v66;
        }
      }
      if ( (v65 & 0x200) == 0 )
        a4 = 1;
      v67 = (v63 + 4095) & 0xFFFFF000;
      LODWORD(v90) = v67;
      *a8 -= v62 & 0xFFF;
      LODWORD(v97) = v62 & 0xFFFFF000;
      if ( v67 > v64 )
      {
        v67 = v64;
        LODWORD(v90) = v64;
      }
      v68 = CcAllocateInitializeBcb(v10, v26, &v97, &v90);
      v30 = (ULONG_PTR)v68;
      P = v68;
      if ( (a6 & 1) != 0 )
      {
        if ( !v68 )
        {
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
          RtlRaiseStatus(-1073741670);
        }
        if ( !a4 )
        {
          v69 = (struct _ERESOURCE *)(v68 + 72);
          if ( (a6 & 2) != 0 )
          {
            if ( !ExAcquireResourceExclusiveLite(v69, 0) )
              KeBugCheckEx(0x34u, 0x201D5uLL, v30, 0LL, 0LL);
          }
          else if ( !ExAcquireSharedStarveExclusive(v69, 0) )
          {
            KeBugCheckEx(0x34u, 0x201DCuLL, v30, 0LL, 0LL);
          }
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
        v85 = 0;
        if ( (a6 & 4) == 0 )
        {
          LOBYTE(v70) = 1;
          CcMapAndRead(v67, v66, v70, *a8);
          ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
          if ( !*(_QWORD *)(v30 + 184) )
          {
            *(_QWORD *)(v30 + 184) = *a8;
            *(_QWORD *)(v30 + 56) = v87;
            v87 = 0LL;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
          *a8 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
        }
        v32 = a8;
        goto LABEL_71;
      }
      if ( !v68 )
      {
        v84 = 0;
        v32 = a8;
        goto LABEL_72;
      }
      if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v68 + 72), 0) )
        KeBugCheckEx(0x34u, 0x2023DuLL, v30, 0LL, 0LL);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v85 = 0;
      if ( !(unsigned __int8)CcMapAndRead(v67, v66, 0LL, *a8) )
      {
        v84 = 0;
        v32 = a8;
        goto LABEL_72;
      }
      ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
      v32 = a8;
      if ( !*(_QWORD *)(v30 + 184) )
      {
        *(_QWORD *)(v30 + 184) = *a8;
        *(_QWORD *)(v30 + 56) = v87;
        v87 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v55 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
      goto LABEL_70;
    }
    goto LABEL_116;
  }
  if ( (*(_DWORD *)(v10 + 152) & 0x200) == 0 )
    a4 = 1;
  if ( !*(_QWORD *)(v26 + 184) )
  {
    v31 = (unsigned int)(v20 - *(_DWORD *)(v26 + 8));
    v32 = a8;
    *a8 -= v31;
    v97 = *(_QWORD *)(v26 + 8);
    v90 = *(unsigned int *)(v26 + 4);
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v26 + 64);
      *(_QWORD *)(v10 + 288) = 0LL;
      v33 = *(_BYTE *)(v10 + 328);
      v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 280), 1, 0);
      if ( v34 )
        ExpReleaseFastMutexContended(v10 + 280, v34);
      __writecr8(v33);
      KeAbPostRelease(v10 + 280);
      v85 = 0;
      if ( !a4 )
      {
        v36 = (struct _ERESOURCE *)(v30 + 72);
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite(v36, 1u);
        }
        else
        {
          if ( (v36->Flag & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v36, 0LL, 0LL);
          v37 = v36->Flag & 1;
          if ( v37 )
          {
            v35 = KeGetCurrentIrql();
            v73 = KeGetCurrentThread();
            if ( (unsigned __int8)v35 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v35, 1uLL, 0LL);
            if ( (v73->ApcState.InProgressFlags & 2) != 0 )
              KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
            if ( !(_BYTE)v35 && (v73->MiscFlags & 0x400) == 0 && !v73->WaitBlock[3].SpareLong )
              KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
          }
          LOBYTE(v35) = 1;
          if ( v37 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v36);
          else
            ExpAcquireSharedStarveExclusive(v36, v35);
        }
      }
      if ( (a6 & 4) != 0 )
      {
        v30 = (ULONG_PTR)P;
        v53 = a2;
        goto LABEL_71;
      }
      v38 = *a8;
      v39 = KeGetCurrentThread();
      v102 = 0;
      v40 = 0;
      v93 = 0;
      v41 = ((v38 & 0xFFF) + (unsigned __int64)(unsigned int)v90 + 4095) >> 12;
      v94 = v41;
      v42 = v38 & 0xFFFFFFFFFFFFF000uLL;
      v99 = v42;
      v43 = BYTE4(v39[1].Queue) + 4 * LODWORD(v39[1].WaitListEntry.Flink);
      while ( (_DWORD)v41 )
      {
        BYTE4(v39[1].Queue) = 1;
        v56 = v41 - 1;
        if ( (unsigned int)(v41 - 1) > LODWORD(v39[1].WaitListEntry.Flink) )
        {
          if ( v56 > 0xF )
            v56 = 15;
          LODWORD(v39[1].WaitListEntry.Flink) = v56;
        }
        v103 = 0;
        v57 = (unsigned int)((_DWORD)v41 << 12);
        v58 = (unsigned int)v57;
        v40 = MmCheckCachedPageStates(v42, v57, 0LL);
        v93 = v40;
        if ( v40 < 0 )
          break;
        v42 += v58;
        v99 = v42;
        LODWORD(v41) = 0;
        v94 = 0;
      }
      BYTE4(v39[1].Queue) = v43 & 3;
      LODWORD(v39[1].WaitListEntry.Flink) = v43 >> 2;
      if ( v40 < 0 )
        RtlRaiseStatus(v40);
      v44 = (volatile signed __int32 *)(v10 + 280);
      v96 = 0;
      v45 = KeGetCurrentThread();
      --v45->SpecialApcDisable;
      if ( ++v45->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v45, v10 + 280, KeGetCurrentIrql(), 0LL);
      v106 = 0LL;
      v46 = v45->AbEntrySummary;
      if ( v46
        || ((v75 = 0, v45->AbOrphanedEntrySummary)
          ? (v76 = v45->AbOrphanedEntrySummary,
             v45->AbOrphanedEntrySummary = 0,
             v45->AbEntrySummary |= v76,
             v46 = v45->AbEntrySummary,
             v75 = 1)
          : (v46 = 0),
            (v95 = v75) != 0) )
      {
        _BitScanForward((unsigned int *)&v47, v46);
        v104 = v47;
        v45->AbEntrySummary = v46 & ~(1 << v47);
        v48 = (__int64)&v45->LockEntries[v47];
        v105 = v48;
      }
      else
      {
        v48 = 0LL;
        v105 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v45, v10 + 280);
      }
      v106 = v48;
      if ( v48 )
      {
        if ( (unsigned __int64)v44 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[946] + (((unsigned __int64)v44 >> 39) & 0x1FF)) == 1 )
        {
          v49 = MmGetSessionIdEx((__int64)v45->ApcState.Process);
        }
        else
        {
          v49 = -1;
        }
        *(_DWORD *)(v48 + 40) = v49;
        *(_QWORD *)(v48 + 32) = (unsigned __int64)v44 & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)&v45->116 + 1, 0x10u);
      }
      --v45->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v45, v10 + 280, (__int64)&v96);
      v18 = v45->SpecialApcDisable++ == -1;
      if ( v18 && ($005F0E83B22994B61E86C72E0CE43C71 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
        KiCheckForKernelApcDelivery();
      v50 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v44, 0) )
        ExpAcquireFastMutexContended(v10 + 280, v48);
      if ( v48 )
        *(_BYTE *)(v48 + 26) |= 1u;
      *(_QWORD *)(v10 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v10 + 328) = v50;
      v26 = (__int64)P;
      v32 = a8;
      if ( !P[23] )
      {
        P[23] = *a8;
        P[7] = v87;
        v87 = 0LL;
      }
      *(_QWORD *)(v10 + 288) = 0LL;
      v51 = *(_BYTE *)(v10 + 328);
      v52 = _InterlockedCompareExchange(v44, 1, 0);
      if ( v52 )
        ExpReleaseFastMutexContended(v10 + 280, v52);
      __writecr8(v51);
      KeAbPostRelease(v10 + 280);
      v30 = (ULONG_PTR)P;
      v53 = a2;
      v54 = (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
    }
    else
    {
      if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v26 + 72), 0) )
      {
        v30 = 0LL;
        P = 0LL;
        v84 = 0;
        v53 = a2;
        goto LABEL_72;
      }
      ++*(_DWORD *)(v26 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v85 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v26 + 4), 0LL, 0LL, *a8) )
      {
        v84 = 0;
        v53 = a2;
        goto LABEL_72;
      }
      ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
      if ( !*(_QWORD *)(v26 + 184) )
      {
        *(_QWORD *)(v26 + 184) = *a8;
        *(_QWORD *)(v26 + 56) = v87;
        v87 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v53 = a2;
      v54 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v26 + 8));
    }
    goto LABEL_69;
  }
  if ( (a6 & 1) != 0 )
  {
    ++*(_DWORD *)(v26 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
    v85 = 0;
    if ( !a4 )
    {
      if ( (a6 & 2) != 0 )
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v26 + 72), 1u);
      }
      else
      {
        if ( (*(_WORD *)(v26 + 98) & 0x41) == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v26 + 72, 0LL, 0LL);
        v60 = *(_WORD *)(v26 + 98) & 1;
        if ( v60 )
        {
          v59 = KeGetCurrentIrql();
          v74 = KeGetCurrentThread();
          if ( (unsigned __int8)v59 > 1u )
            KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v59, 1uLL, 0LL);
          if ( (v74->ApcState.InProgressFlags & 2) != 0 )
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !(_BYTE)v59 && (v74->MiscFlags & 0x400) == 0 && !v74->WaitBlock[3].SpareLong )
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
          v30 = v26;
        }
        LOBYTE(v59) = 1;
        v18 = v60 == 0;
        v61 = v26 + 72;
        if ( v18 )
          ExpAcquireSharedStarveExclusive(v61, v59);
        else
          ExpFastResourceLegacyAcquireSharedStarveExclusive(v61);
      }
    }
    goto LABEL_84;
  }
  if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v26 + 72), 0) )
  {
LABEL_116:
    v30 = 0LL;
    P = 0LL;
    v84 = 0;
    v53 = a2;
    v32 = a8;
    goto LABEL_72;
  }
  ++*(_DWORD *)(v26 + 64);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
  v85 = 0;
LABEL_84:
  v32 = a8;
  v53 = a2;
  v54 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v26 + 8));
LABEL_69:
  v55 = *(_QWORD *)(v26 + 184) + v54;
LABEL_70:
  *v32 = v55;
LABEL_71:
  v84 = 1;
LABEL_72:
  if ( (a6 & 6) == 6 && v30 && *(_QWORD *)(v30 + 184) )
  {
    v77 = *(_QWORD *)(*(_QWORD *)(v30 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 56) + 16LL)) )
    {
      v78 = *(struct _KEVENT **)(v77 + 184);
      if ( v78 )
        KeSetEvent(v78, 0, 0);
    }
    *(_QWORD *)(v30 + 184) = 0LL;
    *(_QWORD *)(v30 + 56) = 0LL;
    v30 = (ULONG_PTR)P;
  }
  if ( v85 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
  if ( v87 )
  {
    v80 = *(_QWORD *)(v87 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v87 + 16)) )
    {
      v81 = *(struct _KEVENT **)(v80 + 184);
      if ( v81 )
        KeSetEvent(v81, 0, 0);
    }
    v30 = (ULONG_PTR)P;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v10, *v53);
  if ( v84 )
  {
    *a7 = v30;
    *a9 = *(_QWORD *)(v30 + 32);
  }
  else
  {
    *v32 = 0LL;
    if ( v30 )
      CcUnpinFileDataEx((char *)v30, a4, 0);
  }
  return v84;
}
