/*
 * XREFs of CcPinFileData @ 0x14009C5A0
 * Callers:
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     CcPinRead @ 0x140436EB0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140440510 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1404406E4 (CcMapDataCommon.c)
 *     CcPinMappedData @ 0x140513FF0 (CcPinMappedData.c)
 *     CcMapData @ 0x140514420 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireSharedStarveExclusive @ 0x140020280 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14009C0C0 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14009E170 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     CcAllocateInitializeBcb @ 0x140119A5C (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1401DE608 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401DE7D8 (CcReferenceFileOffset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025BF64 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rbx
  volatile signed __int32 *v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v17; // rcx
  int SessionId; // eax
  __int16 v19; // ax
  unsigned __int8 CurrentIrql; // bl
  __int64 v21; // r14
  __int64 v22; // rbx
  char v23; // si
  __int64 v24; // rdi
  __int64 v25; // rcx
  _QWORD *BcbListHeadLargeOffset; // rdi
  ULONG_PTR v27; // rdi
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  _QWORD *v30; // r12
  unsigned __int8 v31; // si
  unsigned __int32 v32; // eax
  ULONG_PTR v33; // rdi
  __int16 v34; // cx
  __int64 v35; // r14
  struct _KTHREAD *v36; // rsi
  NTSTATUS v37; // edx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r14
  unsigned int v40; // edi
  volatile signed __int32 *v41; // rdi
  struct _KTHREAD *v42; // rbx
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rsi
  int v46; // eax
  __int16 v47; // ax
  unsigned __int8 v48; // bl
  unsigned __int8 v49; // si
  unsigned __int32 v50; // eax
  __int64 v51; // rax
  char v52; // r14
  unsigned __int64 v53; // rcx
  struct _ERESOURCE *v54; // rcx
  int v55; // ecx
  int v56; // edx
  __int64 v57; // rbx
  unsigned int v58; // r8d
  unsigned int v59; // r12d
  unsigned int v60; // ebx
  _QWORD *v61; // r14
  __int64 v62; // rax
  struct _ERESOURCE *v63; // rcx
  __int64 v64; // r8
  unsigned __int8 v65; // dl
  struct _KTHREAD *v66; // r8
  __int64 v67; // rax
  int v68; // eax
  unsigned __int8 v69; // al
  __int64 v70; // rdx
  struct _KEVENT *v71; // rcx
  __int64 v73; // rcx
  struct _KEVENT *v74; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v76; // [rsp+30h] [rbp-C8h]
  int v77; // [rsp+34h] [rbp-C4h]
  ULONG_PTR v78; // [rsp+38h] [rbp-C0h]
  __int64 v79; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+50h] [rbp-A8h] BYREF
  char v81; // [rsp+58h] [rbp-A0h]
  int v82; // [rsp+5Ch] [rbp-9Ch] BYREF
  __int64 v83; // [rsp+60h] [rbp-98h] BYREF
  __int64 v84; // [rsp+68h] [rbp-90h]
  unsigned __int64 v85; // [rsp+70h] [rbp-88h]
  int v86; // [rsp+78h] [rbp-80h] BYREF
  NTSTATUS v87; // [rsp+7Ch] [rbp-7Ch]
  int v88; // [rsp+80h] [rbp-78h]
  int v89; // [rsp+84h] [rbp-74h]
  int v90; // [rsp+88h] [rbp-70h] BYREF
  ULONG_PTR v91; // [rsp+90h] [rbp-68h]
  __int64 v92; // [rsp+98h] [rbp-60h]
  int v93; // [rsp+A0h] [rbp-58h]
  int v94; // [rsp+A4h] [rbp-54h]
  int v95; // [rsp+A8h] [rbp-50h]
  int v96; // [rsp+ACh] [rbp-4Ch]
  __int64 v97; // [rsp+B0h] [rbp-48h]
  __int64 v98; // [rsp+B8h] [rbp-40h]
  char v99; // [rsp+100h] [rbp+8h] BYREF
  _QWORD *v100; // [rsp+108h] [rbp+10h]
  unsigned int v101; // [rsp+110h] [rbp+18h]
  unsigned __int8 v102; // [rsp+118h] [rbp+20h]

  v102 = a4;
  v101 = a3;
  v100 = a2;
  v10 = 0LL;
  v79 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v92 = v11;
  v12 = a3;
  if ( (signed __int64)(a3 + *a2) > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x106uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v82 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v79, (unsigned int)&v82, (a6 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v11 + 280);
  v86 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v11 + 280, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v11 + 280);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v17, AbEntrySummary);
  v93 = v17;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
  v10 = (__int64)&CurrentThread->LockEntries[v17];
LABEL_7:
  if ( v10 )
  {
    if ( (unsigned __int64)v14 >= 0xFFFF800000000000uLL
      && byte_14036D700[(((unsigned __int64)v14 >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v11 + 280, &v86);
  v19 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v19;
  if ( !v19 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v11 + 280, (PRTL_BALANCED_NODE)v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v77 = 1;
  v21 = *a2;
  v22 = *a2 + v12;
  v84 = v22;
  v23 = 0;
  v24 = v21 + 0x80000;
  v25 = *(_QWORD *)(v11 + 32);
  if ( v25 <= 0x200000 || (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    goto LABEL_107;
  if ( v25 > 0x2000000 )
  {
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v21 + 0x80000, 1);
    goto LABEL_23;
  }
  if ( v24 < v25 )
  {
    if ( *(_DWORD *)(v11 + 36) )
      v53 = 0xFFFFFFFFLL;
    else
      v53 = 8 * ((unsigned __int64)(unsigned int)v25 >> 18);
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v11 + 88) + v53 + 16 * (v24 >> 19));
  }
  else
  {
LABEL_107:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
  }
LABEL_23:
  v27 = *BcbListHeadLargeOffset - 16LL;
  v91 = v27;
  if ( *((_DWORD *)a2 + 1) )
  {
LABEL_134:
    while ( *(_WORD *)v27 == 765 && v21 < *(_QWORD *)(v27 + 32) )
    {
      v67 = *(_QWORD *)(v27 + 8);
      if ( v21 >= v67 )
      {
LABEL_33:
        v23 = 1;
        break;
      }
      if ( v22 >= v67 )
        v22 = *(_QWORD *)(v27 + 8);
      v84 = v22;
      v27 = *(_QWORD *)(v27 + 16) - 16LL;
      v91 = v27;
    }
  }
  else if ( *(_WORD *)v27 == 765 )
  {
    if ( *(_DWORD *)(v27 + 36) )
      goto LABEL_134;
    v28 = v84;
    while ( *(_WORD *)v27 == 765 && (unsigned int)v21 < *(_DWORD *)(v27 + 32) )
    {
      v29 = *(_DWORD *)(v27 + 8);
      if ( (unsigned int)v21 >= v29 )
        goto LABEL_33;
      if ( v28 >= v29 )
      {
        v28 = *(_DWORD *)(v27 + 8);
        LODWORD(v84) = v28;
        v22 = v84;
      }
      v27 = *(_QWORD *)(v27 + 16) - 16LL;
      v91 = v27;
    }
  }
  v78 = v27;
  if ( v23 )
  {
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v102 = 1;
    if ( *(_QWORD *)(v27 + 184) )
    {
      if ( (a6 & 1) != 0 )
      {
        ++*(_DWORD *)(v27 + 64);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        v77 = 0;
        if ( !v102 )
        {
          v54 = (struct _ERESOURCE *)(v27 + 72);
          if ( (a6 & 2) != 0 )
            ExAcquireResourceExclusiveLite(v54, 1u);
          else
            ExAcquireSharedStarveExclusive(v54, 1u);
        }
      }
      else
      {
        if ( !v102 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v27 + 72), 0) )
        {
          v27 = 0LL;
          v78 = 0LL;
          v76 = 0;
          v52 = a6;
          v30 = a8;
          goto LABEL_73;
        }
        ++*(_DWORD *)(v27 + 64);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        v77 = 0;
      }
      v30 = a8;
      goto LABEL_87;
    }
    v30 = a8;
    *a8 -= (unsigned int)(v21 - *(_DWORD *)(v27 + 8));
    v83 = *(_QWORD *)(v27 + 8);
    v80 = *(unsigned int *)(v27 + 4);
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v27 + 64);
      *(_QWORD *)(v11 + 288) = 0LL;
      v31 = *(_BYTE *)(v11 + 328);
      v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
      if ( v32 )
        ExpReleaseFastMutexContended(v11 + 280, v32);
      __writecr8(v31);
      KeAbPostRelease(v11 + 280);
      v77 = 0;
      if ( !v102 )
      {
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v27 + 72), 1u);
        }
        else
        {
          v33 = v27 + 72;
          if ( (*(_WORD *)(v33 + 26) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v33, 0LL, 0LL);
          v34 = *(_WORD *)(v33 + 26) & 1;
          if ( v34 )
          {
            v65 = KeGetCurrentIrql();
            v66 = KeGetCurrentThread();
            if ( v65 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, v65, 1uLL, 0LL);
            if ( (v66->ApcState.InProgressFlags & 2) != 0 )
              KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
            if ( !v65 && (v66->MiscFlags & 0x400) == 0 && !v66->WaitBlock[3].SpareLong )
              KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            v81 = 1;
          }
          if ( v34 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v33);
          else
            ExpAcquireSharedStarveExclusive(v33, 1);
        }
      }
      if ( (a6 & 4) != 0 )
      {
        v27 = v78;
        goto LABEL_71;
      }
      v35 = *v30;
      v36 = KeGetCurrentThread();
      v94 = 0;
      v37 = 0;
      v87 = 0;
      v99 = 1;
      v38 = ((v35 & 0xFFF) + (unsigned __int64)(unsigned int)v80 + 4095) >> 12;
      v88 = v38;
      v39 = v35 & 0xFFFFFFFFFFFFF000uLL;
      v85 = v39;
      v40 = BYTE4(v36[1].Queue) + 4 * LODWORD(v36[1].WaitListEntry.Flink);
      while ( (_DWORD)v38 )
      {
        BYTE4(v36[1].Queue) = 1;
        if ( (unsigned int)(v38 - 1) > LODWORD(v36[1].WaitListEntry.Flink) )
        {
          v68 = v38 - 1;
          if ( (unsigned int)(v38 - 1) > 0xF )
            v68 = 15;
          LODWORD(v36[1].WaitListEntry.Flink) = v68;
        }
        v95 = 0;
        v85 = (unsigned int)((_DWORD)v38 << 12);
        v37 = MmCheckCachedPageStates(v39, v85, 0LL, &v99);
        v87 = v37;
        if ( v37 < 0 )
          break;
        v39 += v85;
        v85 = v39;
        LODWORD(v38) = 0;
        v88 = 0;
      }
      BYTE4(v36[1].Queue) = v40 & 3;
      LODWORD(v36[1].WaitListEntry.Flink) = v40 >> 2;
      if ( v37 < 0 )
        RtlRaiseStatus(v37);
      v41 = (volatile signed __int32 *)(v11 + 280);
      v90 = 0;
      v42 = KeGetCurrentThread();
      --v42->SpecialApcDisable;
      if ( ++v42->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v42, v11 + 280, KeGetCurrentIrql(), 0LL);
      v98 = 0LL;
      if ( !v42->AbEntrySummary )
      {
        if ( !v42->AbOrphanedEntrySummary )
        {
          v89 = 0;
          v45 = 0LL;
          v97 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v42, v11 + 280);
          goto LABEL_54;
        }
        v69 = v42->AbOrphanedEntrySummary;
        v42->AbOrphanedEntrySummary = 0;
        v42->AbEntrySummary |= v69;
        v89 = 1;
      }
      v43 = v42->AbEntrySummary;
      _BitScanForward((unsigned int *)&v44, v43);
      v96 = v44;
      v42->AbEntrySummary = v43 & ~(1 << v44);
      v45 = (__int64)&v42->LockEntries[v44];
      v97 = v45;
LABEL_54:
      v98 = v45;
      if ( v45 )
      {
        if ( (unsigned int)MiGetSystemRegionType(v11 + 280) == 1 )
          v46 = MmGetSessionIdEx(v42->ApcState.Process);
        else
          v46 = -1;
        *(_DWORD *)(v45 + 40) = v46;
        *(_QWORD *)(v45 + 32) = (unsigned __int64)v41 & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)&v42->116 + 1, 0xFu);
      }
      --v42->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v42, v11 + 280, &v90);
      v47 = v42->SpecialApcDisable + 1;
      v42->SpecialApcDisable = v47;
      if ( !v47 && ($69CD3F157F9F39B6F7113F2231989901 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
        KiCheckForKernelApcDelivery();
      v48 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v41, 0) )
        ExpAcquireFastMutexContended(v11 + 280, (PRTL_BALANCED_NODE)v45);
      if ( v45 )
        *(_BYTE *)(v45 + 26) |= 1u;
      *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 328) = v48;
      v30 = a8;
      if ( !*(_QWORD *)(v78 + 184) )
      {
        *(_QWORD *)(v78 + 184) = *a8;
        *(_QWORD *)(v78 + 56) = v79;
        v79 = 0LL;
      }
      *(_QWORD *)(v11 + 288) = 0LL;
      v49 = *(_BYTE *)(v11 + 328);
      v50 = _InterlockedCompareExchange(v41, 1, 0);
      if ( v50 )
        ExpReleaseFastMutexContended(v11 + 280, v50);
      __writecr8(v49);
      KeAbPostRelease(v11 + 280);
      v27 = v78;
      v51 = *(_QWORD *)(v78 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v78 + 8));
      goto LABEL_70;
    }
    if ( !v102 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v27 + 72), 0) )
    {
      v27 = 0LL;
      v78 = 0LL;
      v76 = 0;
      v52 = a6;
      goto LABEL_73;
    }
    ++*(_DWORD *)(v27 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v77 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v27 + 4), 0LL, 0LL, *v30) )
    {
      v76 = 0;
      v52 = a6;
      goto LABEL_73;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
  }
  else
  {
    v52 = a6;
    if ( (a6 & 8) != 0 )
    {
      v27 = 0LL;
      v78 = 0LL;
      v76 = 0;
      v30 = a8;
      goto LABEL_73;
    }
    v83 = *a2;
    v57 = v22 - v83;
    v55 = v83;
    v56 = v83 & 0xFFF;
    LODWORD(v57) = v56 + v57;
    v80 = v57;
    v58 = v56 + v82;
    v82 += v56;
    if ( (v102 || (*(_DWORD *)(v11 + 152) & 4) != 0) && !a5 )
    {
      v59 = 0;
    }
    else
    {
      v59 = 2;
      if ( (v83 & 0xFFF) == 0 && v101 >= 0x1000 )
        v59 = 3;
      if ( (v57 & 0xFFF) == 0 )
        v59 |= 4u;
    }
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v102 = 1;
    v60 = (v57 + 4095) & 0xFFFFF000;
    LODWORD(v80) = v60;
    v61 = a8;
    *a8 -= *(_DWORD *)a2 & 0xFFF;
    LODWORD(v83) = v55 & 0xFFFFF000;
    if ( v60 > v58 )
    {
      v60 = v58;
      LODWORD(v80) = v58;
    }
    v62 = CcAllocateInitializeBcb(v11, v27, &v83, &v80);
    v27 = v62;
    v78 = v62;
    if ( (a6 & 1) != 0 )
    {
      if ( !v62 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v102 )
      {
        v63 = (struct _ERESOURCE *)(v62 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v63, 0) )
            KeBugCheckEx(0x34u, 0x201D4uLL, v27, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v63, 0) )
        {
          KeBugCheckEx(0x34u, 0x201DBuLL, v27, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v77 = 0;
      v52 = a6;
      if ( (a6 & 4) == 0 )
      {
        LOBYTE(v64) = 1;
        CcMapAndRead(v60, v59, v64, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
        if ( !*(_QWORD *)(v27 + 184) )
        {
          *(_QWORD *)(v27 + 184) = *a8;
          *(_QWORD *)(v27 + 56) = v79;
          v79 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        *a8 = *(_QWORD *)(v27 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v27 + 8));
      }
      v30 = a8;
      goto LABEL_72;
    }
    if ( !v62 )
    {
      v76 = 0;
      v52 = a6;
      v30 = a8;
      goto LABEL_73;
    }
    if ( !v102 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v62 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2023CuLL, v27, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v77 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v60, v59, 0LL, *v61) )
    {
      v76 = 0;
      v52 = a6;
      v30 = a8;
      goto LABEL_73;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v30 = v61;
  }
  if ( !*(_QWORD *)(v27 + 184) )
  {
    *(_QWORD *)(v27 + 184) = *v30;
    *(_QWORD *)(v27 + 56) = v79;
    v79 = 0LL;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
LABEL_87:
  v51 = *(_QWORD *)(v27 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v27 + 8));
LABEL_70:
  *v30 = v51;
LABEL_71:
  v52 = a6;
LABEL_72:
  v76 = 1;
LABEL_73:
  if ( (v52 & 6) == 6 && v27 && *(_QWORD *)(v27 + 184) )
  {
    v70 = *(_QWORD *)(*(_QWORD *)(v27 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 56) + 16LL)) )
    {
      v71 = *(struct _KEVENT **)(v70 + 184);
      if ( v71 )
        KeSetEvent(v71, 0, 0);
    }
    *(_QWORD *)(v27 + 184) = 0LL;
    *(_QWORD *)(v27 + 56) = 0LL;
    v27 = v78;
  }
  if ( v77 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  if ( v79 )
  {
    v73 = *(_QWORD *)(v79 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v79 + 16)) )
    {
      v74 = *(struct _KEVENT **)(v73 + 184);
      if ( v74 )
        KeSetEvent(v74, 0, 0);
    }
    v27 = v78;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v76 )
  {
    *a7 = v27;
    *a9 = *(_QWORD *)(v27 + 32);
  }
  else
  {
    *v30 = 0LL;
    if ( v27 )
      CcUnpinFileDataEx(v27, v102, 0LL);
  }
  return v76;
}
