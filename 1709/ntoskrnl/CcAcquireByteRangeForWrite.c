/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x1400F2DD0
 * Callers:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDeductDirtyPages @ 0x140066B70 (CcDeductDirtyPages.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindBcb @ 0x1400F37FC (CcFindBcb.c)
 *     CcFindBitmapRangeToClean @ 0x1400F3A7C (CcFindBitmapRangeToClean.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400F3AB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        unsigned int a8)
{
  _DWORD *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned int v14; // r8d
  int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 *v18; // rdx
  char Bcb; // al
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  struct _FAST_MUTEX *v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v32; // ecx
  __int64 v33; // r10
  _QWORD *v34; // rdi
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rax
  unsigned int v42; // ebx
  unsigned __int64 v43; // r8
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rbx
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 BitmapRangeToClean; // rax
  unsigned __int64 v52; // r9
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // [rsp+50h] [rbp-E8h]
  int v58; // [rsp+58h] [rbp-E0h]
  __int64 v59; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-D0h]
  _QWORD *v61; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+80h] [rbp-B8h]
  __int64 v64; // [rsp+A8h] [rbp-90h]
  __int64 v65; // [rsp+C0h] [rbp-78h]
  __int64 v66; // [rsp+C8h] [rbp-70h] BYREF
  __int64 Partition; // [rsp+D0h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-50h] BYREF

  v64 = 0LL;
  v58 = 0;
  v61 = 0LL;
  v63 = 0LL;
  v11 = 0LL;
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  v65 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  Partition = CcGetPartition((_QWORD *)a1);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v13 = *(_QWORD *)(a1 + 160);
  v60 = v13;
  v14 = a3;
  if ( !v13 || !*(_DWORD *)(v13 + 8) || !*(_DWORD *)(v13 + 4) && !a3 )
  {
    v57 = (__int64)a5;
    v62 = a8;
LABEL_7:
    v15 = a8;
    goto LABEL_8;
  }
  if ( a2 )
  {
    v57 = *a2 >> 12;
    v12 = (a3 + *a2 - 1) >> 12;
    BitmapRangeToClean = CcFindBitmapRangeToClean(v13, v57);
    v34 = (_QWORD *)BitmapRangeToClean;
    v61 = (_QWORD *)BitmapRangeToClean;
    v38 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v12 < v38 + *(unsigned int *)(BitmapRangeToClean + 24)
      || (v37 = *(unsigned int *)(BitmapRangeToClean + 28), v36 > (__int64)(v37 + v38)) )
    {
      v62 = a8;
      v14 = a3;
      goto LABEL_7;
    }
    v39 = *(_QWORD *)(BitmapRangeToClean + 40);
    if ( v12 < (__int64)(v37 + v38) )
      v37 = (unsigned int)(v12 - v38);
  }
  else
  {
    v33 = 0LL;
    if ( !a3 )
      v33 = *(_QWORD *)(v13 + 32);
    v34 = (_QWORD *)CcFindBitmapRangeToClean(v13, v33);
    v61 = v34;
    v37 = *((unsigned int *)v34 + 7);
    v38 = v34[2];
    if ( v36 > (__int64)(v37 + v38) )
      v36 = v38 + *((unsigned int *)v34 + 6);
    v39 = v34[5];
  }
  v40 = v39 + 4 * (v37 >> 5);
  v63 = v40;
  if ( v36 < v38 + *((unsigned int *)v34 + 6) )
    v36 = v38 + *((unsigned int *)v34 + 6);
  v57 = v36;
  v41 = (unsigned int)(v36 - *((_DWORD *)v34 + 4));
  v62 = v41;
  v11 = (_DWORD *)(v39 + 4 * (v41 >> 5));
  v15 = -1 << (v36 % 32);
  if ( (v15 & *v11) != 0 )
  {
LABEL_76:
    v15 = -v15;
    if ( (*v11 & v15) == 0 )
    {
      do
      {
        v15 *= 2;
        ++v36;
      }
      while ( (*v11 & v15) == 0 );
      v57 = v36;
    }
    if ( a2 )
    {
      v14 = a3;
      if ( v36 >= (a3 + 4095LL + *a2) >> 12 )
        goto LABEL_8;
      if ( *(_QWORD *)(a1 + 16) != a1 + 16 )
      {
        v58 = 1;
        goto LABEL_8;
      }
    }
LABEL_78:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v56 = *a2;
      else
        v56 = 0LL;
      v42 = a3;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v56,
        a3,
        (const void *)a1,
        v36,
        v34,
        *((_DWORD *)v34 + 8));
      v35 = v60;
      v36 = v57;
    }
    else
    {
      v42 = a3;
    }
    if ( (v15 & *v11) != 0 )
    {
      v43 = v63;
      do
      {
        if ( a2 && v36 + *a6 >= (unsigned int)((*a2 + 4095 + v42) >> 12) )
          break;
        if ( (unsigned __int64)v11 > v34[5] + 4 * ((unsigned __int64)*((unsigned int *)v34 + 7) >> 5) )
          KeBugCheckEx(0x34u, 0x1197uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        if ( !a2 && *a6 >= CcMaxLazyWritePages )
          break;
        *v11 -= v15;
        ++*a6;
        v15 *= 2;
        if ( !v15 )
        {
          ++v11;
          v15 = 1;
          if ( (unsigned __int64)v11 > v43 )
            break;
        }
      }
      while ( (v15 & *v11) != 0 );
    }
    v44 = *a6;
    v45 = *(_DWORD *)(v35 + 4);
    if ( *a6 < v45 )
      *(_DWORD *)(v35 + 4) = v45 - v44;
    else
      *(_DWORD *)(v35 + 4) = 0;
    v46 = *(_DWORD *)(v35 + 8);
    if ( v46 < v44 )
      KeBugCheckEx(0x34u, 0x11C6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v35 + 8) = v46 - v44;
    *((_DWORD *)v34 + 8) -= v44;
    v47 = Partition;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, *a6);
    v48 = *(_DWORD *)(v47 + 456);
    if ( v48 <= *a6 )
      *(_DWORD *)(v47 + 456) = 0;
    else
      *(_DWORD *)(v47 + 456) = v48 - *a6;
    if ( !*(_DWORD *)(a1 + 112) )
      CcInsertIntoCleanSharedCacheMapList(a1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( *((_DWORD *)v34 + 8) )
    {
      if ( *((_DWORD *)v34 + 6) == (_DWORD)v62 )
        *((_DWORD *)v34 + 6) = v57 + *a6 - *((_DWORD *)v34 + 4);
      v50 = v60;
      if ( a3 )
        goto LABEL_98;
      v49 = v57 + *a6;
    }
    else
    {
      *((_DWORD *)v34 + 6) = -1;
      *((_DWORD *)v34 + 7) = 0;
      v49 = v34[2] + 0x2000LL;
      v50 = v60;
    }
    *(_QWORD *)(v50 + 32) = v49;
LABEL_98:
    if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
      *(_DWORD *)(a1 + 192) = *(_DWORD *)(v50 + 4);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    *a6 <<= 12;
    *a5 = v57 << 12;
    *a7 = 0LL;
    goto LABEL_42;
  }
  v15 = -1;
  v36 &= 0xFFFFFFFFFFFFFFE0uLL;
  while ( 1 )
  {
    ++v11;
    v36 += 32LL;
    v57 = v36;
    if ( (unsigned __int64)v11 > v40 )
      break;
LABEL_138:
    if ( *v11 )
      goto LABEL_76;
  }
  v14 = a3;
  if ( !a3 )
    *((_DWORD *)v34 + 7) = v62 - 1;
  do
  {
    v34 = (_QWORD *)*v34;
    v61 = v34;
    if ( v34 == (_QWORD *)(v35 + 16) )
    {
      if ( a3 )
        goto LABEL_8;
      v34 = (_QWORD *)*v34;
      v61 = v34;
    }
  }
  while ( !*((_DWORD *)v34 + 8) );
  v52 = *((unsigned int *)v34 + 6);
  v53 = v34[2];
  if ( v12 >= (__int64)(v53 + v52) )
  {
    v54 = *((unsigned int *)v34 + 7);
    if ( v36 <= (__int64)(v54 + v53) )
    {
      v55 = v34[5];
      v11 = (_DWORD *)(v55 + 4 * (v52 >> 5));
      v40 = v55 + 4 * (v54 >> 5);
      v63 = v40;
      v36 = v53 + ((unsigned int)v52 & 0xFFFFFFE0);
      v57 = v36;
      LODWORD(v62) = v52;
      v35 = v60;
      goto LABEL_138;
    }
  }
  v14 = a3;
LABEL_8:
  v16 = v64;
  while ( 2 )
  {
    v17 = *(_QWORD *)(a1 + 24) - 16LL;
    v59 = v17;
    if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    {
      v18 = a2 ? a2 : (__int64 *)(a1 + 200);
      if ( *v18 )
      {
        v66 = *v18 + 4096;
        Bcb = CcFindBcb(a1, v18, &v66, &v59);
        v14 = a3;
        if ( Bcb )
        {
          v17 = v59;
        }
        else
        {
          v17 = *(_QWORD *)(v59 + 24) - 16LL;
          v59 = v17;
        }
      }
    }
    v20 = a1 + 16;
    if ( v17 + 16 != a1 + 16 )
    {
      while ( 2 )
      {
        if ( *(_WORD *)v17 != 765 )
          goto LABEL_17;
        if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v17 + 48) > *a4 )
        {
          v17 = *(_QWORD *)(v17 + 24) - 16LL;
          ++CcDbgLsnLargerThanHint;
          goto LABEL_19;
        }
        if ( a2 && *a2 + v14 <= *(_QWORD *)(v17 + 8) )
          goto LABEL_60;
        v22 = *a6;
        if ( !(_DWORD)v22 )
        {
          if ( *(_BYTE *)(v17 + 2) )
          {
            if ( a2 )
            {
              if ( *a2 < *(_QWORD *)(v17 + 32) )
                goto LABEL_46;
            }
            else if ( *(_QWORD *)(v17 + 8) >= *(_QWORD *)(a1 + 200) )
            {
LABEL_46:
              if ( v58 )
              {
                v36 = v57;
                if ( v57 <= (unsigned int)(*(__int64 *)(v17 + 8) >> 12) )
                  goto LABEL_155;
              }
              goto LABEL_47;
            }
          }
LABEL_17:
          v21 = *(_QWORD *)(v17 + 24);
LABEL_18:
          v17 = v21 - 16;
LABEL_19:
          v59 = v17;
          if ( v17 + 16 == v20 )
            goto LABEL_60;
          v14 = a3;
          continue;
        }
        break;
      }
      v23 = a5;
      if ( !*(_BYTE *)(v17 + 2)
        || (v24 = *(_QWORD *)(v17 + 8), v24 != *a5 + v22)
        || *(_DWORD *)(v17 + 64)
        || (v24 & 0x1FFFFFF) == 0 )
      {
        v25 = (struct _FAST_MUTEX *)(a1 + 280);
        goto LABEL_33;
      }
LABEL_47:
      ++*(_DWORD *)(v17 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      if ( (*(_DWORD *)(a1 + 152) & 0x202) == 0x200 )
      {
        if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 72), *a6 == 0) )
        {
          CcUnpinFileDataEx((char *)v17, 1, 0);
          v25 = (struct _FAST_MUTEX *)(a1 + 280);
          ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
          goto LABEL_61;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
        if ( *(_BYTE *)(v17 + 2) )
        {
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v17 + 48) <= *a4 )
            goto LABEL_53;
          ++CcDbgLsnLargerThanHint;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
        CcUnpinFileDataEx((char *)v17, 0, 0);
        v25 = (struct _FAST_MUTEX *)(a1 + 280);
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
        if ( *a6 )
          goto LABEL_61;
        v21 = *(_QWORD *)(a1 + 24);
        v20 = a1 + 16;
        goto LABEL_18;
      }
      CcUnpinFileDataEx((char *)v17, 1, 2);
      ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
LABEL_53:
      v58 = 0;
      v32 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v17 + 8);
      *a7 = v17;
      *a6 = *(_DWORD *)(v17 + 4) + v32;
      if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 && *(_QWORD *)(v17 + 48) > v16 )
        v16 = *(_QWORD *)(v17 + 48);
      v20 = a1 + 16;
      goto LABEL_17;
    }
LABEL_60:
    v25 = (struct _FAST_MUTEX *)(a1 + 280);
LABEL_61:
    v23 = a5;
LABEL_33:
    if ( v58 )
    {
      v36 = v57;
LABEL_155:
      v35 = v60;
      v34 = v61;
      goto LABEL_78;
    }
    v26 = *a6;
    if ( !*a6 )
    {
      if ( !*(_QWORD *)(a1 + 200) || a2 )
        goto LABEL_38;
      *(_QWORD *)(a1 + 200) = 0LL;
      v14 = a3;
      continue;
    }
    break;
  }
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 200) = *v23 + v26;
    v27 = v26 >> 12;
    v28 = *(_DWORD *)(a1 + 192);
    if ( v28 <= v27 )
      *(_DWORD *)(a1 + 192) = 0;
    else
      *(_DWORD *)(a1 + 192) = v28 - v27;
  }
LABEL_38:
  KeReleaseGuardedMutex(v25);
  if ( v16 )
  {
    v30 = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(a1 + 248))(v30, v16);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(v30 + 8))(*(_QWORD *)v30, v16);
  }
LABEL_42:
  if ( (_BYTE)a8 )
  {
    LOBYTE(v29) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v29);
  }
  return *a6 != 0;
}
