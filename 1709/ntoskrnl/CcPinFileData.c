/*
 * XREFs of CcPinFileData @ 0x140079AD0
 * Callers:
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     CcPinMappedData @ 0x1404A6710 (CcPinMappedData.c)
 *     CcMapData @ 0x1404A6B70 (CcMapData.c)
 *     CcPinRead @ 0x14056CB10 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140570280 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x140570454 (CcMapDataCommon.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14007B720 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     CcGetBcbListHeadLargeOffset @ 0x1400F3910 (CcGetBcbListHeadLargeOffset.c)
 *     CcAllocateInitializeBcb @ 0x1400F755C (CcAllocateInitializeBcb.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSharedStarveExclusive @ 0x140115FD0 (ExAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1401E15A4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401E1870 (CcReferenceFileOffset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1402856A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
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
  __int64 v10; // r15
  __int64 v11; // r12
  _QWORD *v12; // rbx
  char v13; // r13
  volatile signed __int32 *v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v17; // rcx
  __int64 v18; // rsi
  int SessionId; // eax
  __int64 v20; // r8
  bool v21; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v23; // rsi
  __int64 v24; // rbx
  char v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rcx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v29; // rdi
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  ULONG_PTR v32; // rsi
  _QWORD *v33; // r12
  unsigned __int8 v34; // si
  unsigned __int32 v35; // eax
  __int64 v36; // rdx
  ULONG_PTR v37; // rdi
  __int16 v38; // cx
  __int64 v39; // r12
  struct _KTHREAD *v40; // rdi
  NTSTATUS v41; // edx
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // r12
  unsigned int v44; // esi
  volatile signed __int32 *v45; // rdi
  struct _KTHREAD *v46; // rbx
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rsi
  int v50; // eax
  unsigned __int8 v51; // bl
  unsigned __int8 v52; // si
  unsigned __int32 v53; // eax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int16 v56; // cx
  ULONG_PTR v57; // rcx
  int v58; // ecx
  int v59; // edx
  __int64 v60; // rbx
  unsigned int v61; // r8d
  unsigned int v62; // r12d
  unsigned int v63; // ebx
  __int64 v64; // rax
  struct _ERESOURCE *v65; // rcx
  __int64 v66; // r8
  struct _KTHREAD *v67; // r8
  struct _KTHREAD *v68; // r9
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  unsigned __int8 v72; // al
  __int64 v73; // rdx
  struct _KEVENT *v74; // rcx
  __int64 v76; // rcx
  struct _KEVENT *v77; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v79; // [rsp+30h] [rbp-C8h]
  int v80; // [rsp+34h] [rbp-C4h]
  _QWORD *P; // [rsp+38h] [rbp-C0h]
  __int64 v82; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+50h] [rbp-A8h] BYREF
  int v84; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v85; // [rsp+60h] [rbp-98h] BYREF
  __int64 v86; // [rsp+68h] [rbp-90h]
  unsigned __int64 v87; // [rsp+70h] [rbp-88h]
  int v88; // [rsp+78h] [rbp-80h] BYREF
  NTSTATUS v89; // [rsp+7Ch] [rbp-7Ch]
  int v90; // [rsp+80h] [rbp-78h]
  int v91; // [rsp+84h] [rbp-74h] BYREF
  __int64 v92; // [rsp+88h] [rbp-70h]
  __int64 v93; // [rsp+90h] [rbp-68h]
  int v94; // [rsp+98h] [rbp-60h]
  int v95; // [rsp+9Ch] [rbp-5Ch]
  int v96; // [rsp+A0h] [rbp-58h]
  int v97; // [rsp+A4h] [rbp-54h]
  __int64 v98; // [rsp+A8h] [rbp-50h]
  __int64 v99; // [rsp+B0h] [rbp-48h]
  char v100; // [rsp+100h] [rbp+8h] BYREF
  _QWORD *v101; // [rsp+108h] [rbp+10h]
  unsigned int v102; // [rsp+110h] [rbp+18h]
  char v103; // [rsp+118h] [rbp+20h]

  v103 = a4;
  v102 = a3;
  v101 = a2;
  v82 = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v93 = v10;
  v11 = a3;
  if ( (signed __int64)(a3 + *a2) > *(_QWORD *)(v10 + 32) )
    KeBugCheckEx(0x34u, 0x106uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v12 = a8;
  *a8 = 0LL;
  v13 = a6;
  if ( (a6 & 4) != 0 )
  {
    v84 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v10, *a2);
  }
  else
  {
    *v12 = CcGetVirtualAddress(v10, *a2, (unsigned int)&v82, (unsigned int)&v84, (a6 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v10 + 280);
  v88 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v10 + 280, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v18 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v10 + 280);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v17, AbEntrySummary);
  v94 = v17;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
  v18 = (__int64)&CurrentThread->LockEntries[v17];
LABEL_7:
  if ( v18 )
  {
    if ( (unsigned __int64)v14 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[794] + (((unsigned __int64)v14 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v18 + 40) = SessionId;
    *(_QWORD *)(v18 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v10 + 280, &v88);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v10 + 280, (PRTL_BALANCED_NODE)v18);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  *(_QWORD *)(v10 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v10 + 328) = CurrentIrql;
  v80 = 1;
  v23 = *a2;
  v24 = *a2 + v11;
  v86 = v24;
  v25 = 0;
  v26 = v23 + 0x80000;
  v27 = *(_QWORD *)(v10 + 32);
  if ( v27 <= 0x200000 || (*(_DWORD *)(v10 + 152) & 0x200) == 0 )
    goto LABEL_20;
  if ( v27 > 0x2000000 )
  {
    LOBYTE(v20) = 1;
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v10, v23 + 0x80000, v20);
    goto LABEL_21;
  }
  if ( v26 >= v27 )
  {
LABEL_20:
    BcbListHeadLargeOffset = (_QWORD *)(v10 + 16);
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v10 + 36) )
    v69 = 0xFFFFFFFFLL;
  else
    v69 = 8 * ((unsigned __int64)(unsigned int)v27 >> 18);
  BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v10 + 88) + v69 + 16 * (v26 >> 19));
LABEL_21:
  v29 = *BcbListHeadLargeOffset - 16LL;
  v92 = v29;
  if ( *((_DWORD *)a2 + 1) )
  {
LABEL_144:
    while ( *(_WORD *)v29 == 765 && v23 < *(_QWORD *)(v29 + 32) )
    {
      v70 = *(_QWORD *)(v29 + 8);
      if ( v23 >= v70 )
      {
LABEL_31:
        v25 = 1;
        break;
      }
      if ( v24 >= v70 )
        v24 = *(_QWORD *)(v29 + 8);
      v86 = v24;
      v29 = *(_QWORD *)(v29 + 16) - 16LL;
      v92 = v29;
    }
  }
  else if ( *(_WORD *)v29 == 765 )
  {
    if ( *(_DWORD *)(v29 + 36) )
      goto LABEL_144;
    v30 = v86;
    while ( *(_WORD *)v29 == 765 && (unsigned int)v23 < *(_DWORD *)(v29 + 32) )
    {
      v31 = *(_DWORD *)(v29 + 8);
      if ( (unsigned int)v23 >= v31 )
        goto LABEL_31;
      if ( v30 >= v31 )
      {
        v30 = *(_DWORD *)(v29 + 8);
        LODWORD(v86) = v30;
        v24 = v86;
      }
      v29 = *(_QWORD *)(v29 + 16) - 16LL;
      v92 = v29;
    }
  }
  v32 = v29;
  P = (_QWORD *)v29;
  if ( !v25 )
  {
    if ( (v13 & 8) != 0 )
    {
      v32 = 0LL;
      P = 0LL;
      v79 = 0;
      v33 = a8;
      goto LABEL_71;
    }
    v85 = *a2;
    v60 = v24 - v85;
    v58 = v85;
    v59 = v85 & 0xFFF;
    LODWORD(v60) = v59 + v60;
    v83 = v60;
    v61 = v59 + v84;
    v84 += v59;
    if ( (v103 || (*(_DWORD *)(v10 + 152) & 4) != 0) && !a5 )
    {
      v62 = 0;
    }
    else
    {
      v62 = 2;
      if ( (v85 & 0xFFF) == 0 && v102 >= 0x1000 )
        v62 = 3;
      if ( (v60 & 0xFFF) == 0 )
        v62 |= 4u;
    }
    if ( (*(_DWORD *)(v10 + 152) & 0x200) == 0 )
      v103 = 1;
    v63 = (v60 + 4095) & 0xFFFFF000;
    LODWORD(v83) = v63;
    *a8 -= *(_DWORD *)a2 & 0xFFF;
    LODWORD(v85) = v58 & 0xFFFFF000;
    if ( v63 > v61 )
    {
      v63 = v61;
      LODWORD(v83) = v61;
    }
    v64 = CcAllocateInitializeBcb(v10, v29, &v85, &v83);
    v32 = v64;
    P = (_QWORD *)v64;
    if ( (v13 & 1) != 0 )
    {
      if ( !v64 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v103 )
      {
        v65 = (struct _ERESOURCE *)(v64 + 72);
        if ( (v13 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v65, 0) )
            KeBugCheckEx(0x34u, 0x201D4uLL, v32, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v65, 0) )
        {
          KeBugCheckEx(0x34u, 0x201DBuLL, v32, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v80 = 0;
      if ( (v13 & 4) == 0 )
      {
        LOBYTE(v66) = 1;
        CcMapAndRead(v63, v62, v66, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
        if ( !*(_QWORD *)(v32 + 184) )
        {
          *(_QWORD *)(v32 + 184) = *a8;
          *(_QWORD *)(v32 + 56) = v82;
          v82 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
        *a8 = *(_QWORD *)(v32 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v32 + 8));
      }
      v33 = a8;
      goto LABEL_70;
    }
    if ( !v64 )
    {
      v79 = 0;
      v33 = a8;
      goto LABEL_71;
    }
    if ( !v103 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v64 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2023CuLL, v32, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
    v80 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v63, v62, 0LL, *a8) )
    {
      v79 = 0;
      v33 = a8;
      goto LABEL_71;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
    v33 = a8;
    if ( !*(_QWORD *)(v32 + 184) )
    {
      *(_QWORD *)(v32 + 184) = *a8;
      *(_QWORD *)(v32 + 56) = v82;
      v82 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
    v54 = *(_QWORD *)(v32 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v32 + 8));
    goto LABEL_69;
  }
  if ( (*(_DWORD *)(v10 + 152) & 0x200) == 0 )
    v103 = 1;
  if ( *(_QWORD *)(v29 + 184) )
  {
    if ( (v13 & 1) != 0 )
    {
      ++*(_DWORD *)(v29 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v80 = 0;
      if ( !v103 )
      {
        if ( (v13 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 72), 1u);
        }
        else
        {
          if ( (*(_WORD *)(v29 + 98) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v29 + 72, 0LL, 0LL);
          v56 = *(_WORD *)(v29 + 98) & 1;
          if ( v56 )
          {
            v55 = KeGetCurrentIrql();
            v68 = KeGetCurrentThread();
            if ( (unsigned __int8)v55 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v55, 1uLL, 0LL);
            if ( (v68->ApcState.InProgressFlags & 2) != 0 )
              KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
            if ( !(_BYTE)v55 && (v68->MiscFlags & 0x400) == 0 && !v68->WaitBlock[3].SpareLong )
              KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            v32 = v29;
          }
          LOBYTE(v55) = 1;
          v21 = v56 == 0;
          v57 = v29 + 72;
          if ( v21 )
            ExpAcquireSharedStarveExclusive(v57, v55);
          else
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v57);
        }
      }
    }
    else
    {
      if ( !v103 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
      {
        v32 = 0LL;
        P = 0LL;
        v79 = 0;
        v33 = a8;
        goto LABEL_71;
      }
      ++*(_DWORD *)(v29 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
      v80 = 0;
    }
    v33 = a8;
  }
  else
  {
    v33 = a8;
    *a8 -= (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v29 + 8));
    v85 = *(_QWORD *)(v29 + 8);
    v83 = *(unsigned int *)(v29 + 4);
    if ( (v13 & 1) != 0 )
    {
      ++*(_DWORD *)(v29 + 64);
      *(_QWORD *)(v10 + 288) = 0LL;
      v34 = *(_BYTE *)(v10 + 328);
      v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 280), 1, 0);
      if ( v35 )
        ExpReleaseFastMutexContended(v10 + 280, v35);
      __writecr8(v34);
      KeAbPostRelease(v10 + 280);
      v80 = 0;
      if ( !v103 )
      {
        if ( (v13 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 72), 1u);
        }
        else
        {
          v37 = v29 + 72;
          if ( (*(_WORD *)(v37 + 26) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v37, 0LL, 0LL);
          v38 = *(_WORD *)(v37 + 26) & 1;
          if ( v38 )
          {
            v36 = KeGetCurrentIrql();
            v67 = KeGetCurrentThread();
            if ( (unsigned __int8)v36 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v36, 1uLL, 0LL);
            if ( (v67->ApcState.InProgressFlags & 2) != 0 )
              KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
            if ( !(_BYTE)v36 && (v67->MiscFlags & 0x400) == 0 && !v67->WaitBlock[3].SpareLong )
              KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
          }
          LOBYTE(v36) = 1;
          if ( v38 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v37);
          else
            ExpAcquireSharedStarveExclusive(v37, v36);
        }
      }
      if ( (v13 & 4) != 0 )
      {
        v32 = (ULONG_PTR)P;
        goto LABEL_70;
      }
      v39 = *v33;
      v40 = KeGetCurrentThread();
      v95 = 0;
      v41 = 0;
      v89 = 0;
      v100 = 1;
      v42 = ((v39 & 0xFFF) + (unsigned __int64)(unsigned int)v83 + 4095) >> 12;
      v90 = v42;
      v43 = v39 & 0xFFFFFFFFFFFFF000uLL;
      v87 = v43;
      v44 = BYTE4(v40[1].Queue) + 4 * LODWORD(v40[1].WaitListEntry.Flink);
      while ( (_DWORD)v42 )
      {
        BYTE4(v40[1].Queue) = 1;
        if ( (unsigned int)(v42 - 1) > LODWORD(v40[1].WaitListEntry.Flink) )
        {
          v71 = v42 - 1;
          if ( (unsigned int)(v42 - 1) > 0xF )
            v71 = 15;
          LODWORD(v40[1].WaitListEntry.Flink) = v71;
        }
        v96 = 0;
        v102 = v42;
        v87 = (unsigned int)((_DWORD)v42 << 12);
        v41 = MmCheckCachedPageStates(v43, (unsigned int)v87, 0LL, &v100);
        v89 = v41;
        if ( v41 < 0 )
          break;
        v43 += v87;
        v87 = v43;
        LODWORD(v42) = v42 - v102;
        v90 = v42;
      }
      BYTE4(v40[1].Queue) = v44 & 3;
      LODWORD(v40[1].WaitListEntry.Flink) = v44 >> 2;
      if ( v41 < 0 )
        RtlRaiseStatus(v41);
      v45 = (volatile signed __int32 *)(v10 + 280);
      v91 = 0;
      v46 = KeGetCurrentThread();
      --v46->SpecialApcDisable;
      if ( ++v46->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v46, v10 + 280, KeGetCurrentIrql(), 0LL);
      v99 = 0LL;
      if ( !v46->AbEntrySummary )
      {
        if ( !v46->AbOrphanedEntrySummary )
        {
          v49 = 0LL;
          v98 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v46, v10 + 280);
          goto LABEL_52;
        }
        v72 = v46->AbOrphanedEntrySummary;
        v46->AbOrphanedEntrySummary = 0;
        v46->AbEntrySummary |= v72;
      }
      v47 = v46->AbEntrySummary;
      _BitScanForward((unsigned int *)&v48, v47);
      v97 = v48;
      v46->AbEntrySummary = v47 & ~(1 << v48);
      v49 = (__int64)&v46->LockEntries[v48];
      v98 = v49;
LABEL_52:
      v99 = v49;
      if ( v49 )
      {
        if ( (unsigned __int64)v45 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[794] + (((unsigned __int64)v45 >> 39) & 0x1FF)) == 1 )
        {
          v50 = MmGetSessionIdEx(v46->ApcState.Process);
        }
        else
        {
          v50 = -1;
        }
        *(_DWORD *)(v49 + 40) = v50;
        *(_QWORD *)(v49 + 32) = (unsigned __int64)v45 & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)&v46->116 + 1, 0x10u);
      }
      --v46->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v46, v10 + 280, &v91);
      v21 = v46->SpecialApcDisable++ == -1;
      if ( v21 && ($B476B70DB57F76B110DA5B9238C3E934 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        KiCheckForKernelApcDelivery();
      v51 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v45, 0) )
        ExpAcquireFastMutexContended(v10 + 280, (PRTL_BALANCED_NODE)v49);
      if ( v49 )
        *(_BYTE *)(v49 + 26) |= 1u;
      *(_QWORD *)(v10 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v10 + 328) = v51;
      v33 = a8;
      if ( !P[23] )
      {
        P[23] = *a8;
        P[7] = v82;
        v82 = 0LL;
      }
      *(_QWORD *)(v10 + 288) = 0LL;
      v52 = *(_BYTE *)(v10 + 328);
      v53 = _InterlockedCompareExchange(v45, 1, 0);
      if ( v53 )
        ExpReleaseFastMutexContended(v10 + 280, v53);
      __writecr8(v52);
      KeAbPostRelease(v10 + 280);
      v32 = (ULONG_PTR)P;
      v54 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
      goto LABEL_69;
    }
    if ( !v103 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
    {
      v32 = 0LL;
      P = 0LL;
      v79 = 0;
      goto LABEL_71;
    }
    ++*(_DWORD *)(v29 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
    v80 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v29 + 4), 0LL, 0LL, *v33) )
    {
      v79 = 0;
      goto LABEL_71;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
    if ( !*(_QWORD *)(v29 + 184) )
    {
      *(_QWORD *)(v29 + 184) = *v33;
      *(_QWORD *)(v29 + 56) = v82;
      v82 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
  }
  v54 = *(_QWORD *)(v29 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v29 + 8));
LABEL_69:
  *v33 = v54;
LABEL_70:
  v79 = 1;
LABEL_71:
  if ( (v13 & 6) == 6 && v32 && *(_QWORD *)(v32 + 184) )
  {
    v73 = *(_QWORD *)(*(_QWORD *)(v32 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v32 + 56) + 16LL)) )
    {
      v74 = *(struct _KEVENT **)(v73 + 184);
      if ( v74 )
        KeSetEvent(v74, 0, 0);
    }
    *(_QWORD *)(v32 + 184) = 0LL;
    *(_QWORD *)(v32 + 56) = 0LL;
    v32 = (ULONG_PTR)P;
  }
  if ( v80 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
  if ( v82 )
  {
    v76 = *(_QWORD *)(v82 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v82 + 16)) )
    {
      v77 = *(struct _KEVENT **)(v76 + 184);
      if ( v77 )
        KeSetEvent(v77, 0, 0);
    }
    v32 = (ULONG_PTR)P;
  }
  if ( (v13 & 4) != 0 )
    CcDereferenceFileOffset(v10, *a2);
  if ( v79 )
  {
    *a7 = v32;
    *a9 = *(_QWORD *)(v32 + 32);
  }
  else
  {
    *v33 = 0LL;
    if ( v32 )
      CcUnpinFileDataEx((char *)v32, v103, 0);
  }
  return v79;
}
