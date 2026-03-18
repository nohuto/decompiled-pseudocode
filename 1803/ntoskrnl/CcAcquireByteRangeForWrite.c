/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x1400E0910
 * Callers:
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFindBcb @ 0x1400AE290 (CcFindBcb.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B7344 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcFindBitmapRangeToClean @ 0x1400C0B68 (CcFindBitmapRangeToClean.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcDeductDirtyPages @ 0x1400DC394 (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        int a8)
{
  __int64 *BitmapRangeToClean; // r13
  _DWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r9
  int v16; // esi
  __int64 *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r14
  char Bcb; // al
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  struct _FAST_MUTEX *v26; // r14
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  __int64 v29; // rdi
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v35; // ecx
  signed __int64 v36; // r11
  __int64 v37; // r9
  __int64 v38; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // eax
  bool v43; // zf
  int v44; // ecx
  _DWORD *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rdi
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  __int64 v51; // rsi
  unsigned int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rcx
  int v57; // ecx
  unsigned __int64 v58; // r9
  __int64 v59; // r8
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r9
  struct _FAST_MUTEX *Mutex; // [rsp+50h] [rbp-F8h]
  signed __int64 v64; // [rsp+58h] [rbp-F0h]
  int v65; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v66; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v67; // [rsp+70h] [rbp-D8h]
  __int64 *v68; // [rsp+78h] [rbp-D0h]
  __int64 v69; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+88h] [rbp-C0h]
  __int64 v71; // [rsp+B0h] [rbp-98h]
  __int64 Partition; // [rsp+B8h] [rbp-90h]
  unsigned int *v73; // [rsp+C0h] [rbp-88h]
  __int64 v74[3]; // [rsp+D8h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-58h] BYREF

  v73 = a6;
  v71 = 0LL;
  v65 = 0;
  BitmapRangeToClean = 0LL;
  v67 = 0LL;
  v12 = 0LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIo(KeGetCurrentThread(), 0LL);
  Partition = CcGetPartition((_QWORD *)a1, (__int64)a2);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (struct _FAST_MUTEX *)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v14 = a1;
  v15 = *(_QWORD *)(a1 + 160);
  v70 = v15;
  if ( !v15 || !*(_DWORD *)(v15 + 8) || !*(_DWORD *)(v15 + 4) && !a3 )
  {
    v64 = (signed __int64)a5;
    LODWORD(v66) = a8;
LABEL_7:
    v16 = a8;
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v36 = 0LL;
    if ( !a3 )
      v36 = *(_QWORD *)(v15 + 32);
    BitmapRangeToClean = CcFindBitmapRangeToClean(v15, v36);
    v39 = *((unsigned int *)BitmapRangeToClean + 7);
    v40 = BitmapRangeToClean[2];
    if ( v38 > (__int64)(v39 + v40) )
      v38 = v40 + *((unsigned int *)BitmapRangeToClean + 6);
    v41 = BitmapRangeToClean[5];
    goto LABEL_73;
  }
  v64 = *a2 >> 12;
  v13 = (a3 + *a2 - 1) >> 12;
  v55 = CcFindBitmapRangeToClean(v15, v64);
  BitmapRangeToClean = v55;
  v40 = v55[2];
  if ( v13 < v40 + *((unsigned int *)v55 + 6) || (v39 = *((unsigned int *)v55 + 7), v38 > (__int64)(v39 + v40)) )
  {
    LODWORD(v66) = a8;
    goto LABEL_7;
  }
  v41 = v55[5];
  if ( v13 < (__int64)(v39 + v40) )
    v39 = (unsigned int)(v13 - v40);
  v37 = v70;
LABEL_73:
  v67 = v41 + 4 * (v39 >> 5);
  if ( v38 < v40 + *((unsigned int *)BitmapRangeToClean + 6) )
    v38 = v40 + *((unsigned int *)BitmapRangeToClean + 6);
  v64 = v38;
  v66 = (unsigned int)(v38 - v40);
  v12 = (_DWORD *)(v41 + 4 * (v66 >> 5));
  v16 = -1 << (v38 % 32);
  v42 = *v12;
  if ( (*v12 & v16) == 0 )
  {
    v16 = -1;
    v38 &= 0xFFFFFFFFFFFFFFE0uLL;
    v57 = v66;
    do
    {
      ++v12;
      v38 += 32LL;
      v64 = v38;
      if ( (unsigned __int64)v12 > v67 )
      {
        if ( !a3 )
          *((_DWORD *)BitmapRangeToClean + 7) = v57 - 1;
        do
        {
          BitmapRangeToClean = (__int64 *)*BitmapRangeToClean;
          if ( BitmapRangeToClean == (__int64 *)(v37 + 16) )
          {
            if ( a3 )
              goto LABEL_8;
            BitmapRangeToClean = (__int64 *)*BitmapRangeToClean;
          }
        }
        while ( !*((_DWORD *)BitmapRangeToClean + 8) );
        v58 = *((unsigned int *)BitmapRangeToClean + 6);
        v59 = BitmapRangeToClean[2];
        if ( v13 < (__int64)(v59 + v58) )
          goto LABEL_8;
        v60 = *((unsigned int *)BitmapRangeToClean + 7);
        if ( v38 > (__int64)(v60 + v59) )
          goto LABEL_8;
        v61 = BitmapRangeToClean[5];
        v12 = (_DWORD *)(v61 + 4 * (v58 >> 5));
        v67 = v61 + 4 * (v60 >> 5);
        v38 = v59 + ((unsigned int)v58 & 0xFFFFFFE0);
        v64 = v38;
        v57 = *((_DWORD *)BitmapRangeToClean + 6);
        LODWORD(v66) = v57;
        v37 = v70;
      }
      v42 = *v12;
    }
    while ( !*v12 );
  }
  v16 = -v16;
  if ( (v42 & v16) == 0 )
  {
    do
    {
      v16 *= 2;
      ++v38;
    }
    while ( (*v12 & v16) == 0 );
    v64 = v38;
  }
  if ( !a2 )
  {
LABEL_78:
    v27 = a3;
    goto LABEL_79;
  }
  v27 = a3;
  if ( v38 < (a3 + 4095LL + *a2) >> 12 )
  {
    if ( *(_QWORD *)(v14 + 16) == v14 + 16 )
      goto LABEL_79;
    v65 = 1;
  }
LABEL_8:
  v17 = (__int64 *)(v14 + 200);
  v68 = (__int64 *)(v14 + 200);
  v18 = v71;
  while ( 2 )
  {
    v19 = *(_QWORD *)(v14 + 24) - 16LL;
    v69 = v19;
    if ( (*(_DWORD *)(v14 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v17 = a2;
      if ( *v17 )
      {
        v74[0] = *v17 + 4096;
        Bcb = CcFindBcb(v14, v17, v74, &v69);
        v14 = a1;
        v17 = v68;
        if ( Bcb )
        {
          v19 = v69;
        }
        else
        {
          v19 = *(_QWORD *)(v69 + 24) - 16LL;
          v69 = v19;
        }
      }
      else
      {
        v17 = (__int64 *)(v14 + 200);
      }
    }
    v21 = v14 + 16;
    if ( v19 + 16 == v14 + 16 )
    {
LABEL_60:
      v26 = Mutex;
      goto LABEL_61;
    }
    while ( 1 )
    {
      if ( *(_WORD *)v19 != 765 )
        goto LABEL_17;
      if ( (*(_DWORD *)(v14 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v19 + 48) > *a4 )
      {
        v22 = *(_QWORD *)(v19 + 24);
        ++CcDbgLsnLargerThanHint;
        goto LABEL_18;
      }
      if ( a2 )
      {
        v27 = a3;
        if ( *a2 + a3 <= *(_QWORD *)(v19 + 8) )
        {
          v26 = Mutex;
          v24 = a5;
          goto LABEL_29;
        }
      }
      v23 = *a6;
      if ( (_DWORD)v23 )
      {
        v24 = a5;
        if ( !*(_BYTE *)(v19 + 2)
          || (v25 = *(_QWORD *)(v19 + 8), v25 != *a5 + v23)
          || *(_DWORD *)(v19 + 64)
          || (v25 & 0x1FFFFFF) == 0 )
        {
          v26 = Mutex;
          goto LABEL_28;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v19 + 2) )
          goto LABEL_17;
        if ( a2 )
        {
          if ( *a2 >= *(_QWORD *)(v19 + 32) )
            goto LABEL_17;
        }
        else if ( *(_QWORD *)(v19 + 8) < *v17 )
        {
          goto LABEL_17;
        }
        if ( v65 )
        {
          v38 = v64;
          if ( v64 <= (unsigned int)(*(__int64 *)(v19 + 8) >> 12) )
            goto LABEL_78;
        }
      }
      ++*(_DWORD *)(v19 + 64);
      KeReleaseGuardedMutex(Mutex);
      if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
      {
        CcUnpinFileDataEx((PVOID)v19);
        ExAcquireFastMutex(Mutex);
        v14 = a1;
LABEL_51:
        v65 = 0;
        v35 = *a6;
        if ( !*a6 )
          *a5 = *(_QWORD *)(v19 + 8);
        *a7 = v19;
        *a6 = *(_DWORD *)(v19 + 4) + v35;
        if ( (*(_DWORD *)(v14 + 152) & 0x3000000) != 0 && *(_QWORD *)(v19 + 48) > v18 )
          v18 = *(_QWORD *)(v19 + 48);
        v21 = v14 + 16;
LABEL_17:
        v22 = *(_QWORD *)(v19 + 24);
        goto LABEL_18;
      }
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 72), *a6 == 0) )
        break;
      ExAcquireFastMutex(Mutex);
      if ( *(_BYTE *)(v19 + 2) )
      {
        v14 = a1;
        if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v19 + 48) <= *a4 )
          goto LABEL_51;
        ++CcDbgLsnLargerThanHint;
      }
      KeReleaseGuardedMutex(Mutex);
      CcUnpinFileDataEx((PVOID)v19);
      v26 = Mutex;
      ExAcquireFastMutex(Mutex);
      if ( *a6 )
        goto LABEL_61;
      v14 = a1;
      v22 = *(_QWORD *)(a1 + 24);
      v21 = a1 + 16;
LABEL_18:
      v19 = v22 - 16;
      v69 = v19;
      if ( v19 + 16 == v21 )
        goto LABEL_60;
      v17 = (__int64 *)(v14 + 200);
    }
    CcUnpinFileDataEx((PVOID)v19);
    v26 = Mutex;
    ExAcquireFastMutex(Mutex);
LABEL_61:
    v24 = a5;
LABEL_28:
    v27 = a3;
LABEL_29:
    if ( v65 )
    {
      v14 = a1;
      v38 = v64;
LABEL_79:
      if ( (gCcTrace & 1) != 0 )
      {
        if ( a2 )
          v62 = *a2;
        else
          v62 = 0LL;
        DbgPrintEx(
          0x7Fu,
          0,
          "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
          v62,
          a3,
          (const void *)v14,
          v38,
          BitmapRangeToClean,
          *((_DWORD *)BitmapRangeToClean + 8));
        v38 = v64;
        v27 = a3;
      }
      if ( (v16 & *v12) != 0 )
      {
        do
        {
          if ( a2 && v38 + *a6 >= (unsigned int)((*a2 + 4095 + v27) >> 12) )
            break;
          if ( (unsigned __int64)v12 > BitmapRangeToClean[5]
                                     + 4 * ((unsigned __int64)*((unsigned int *)BitmapRangeToClean + 7) >> 5) )
            KeBugCheckEx(0x34u, 0x1198uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          if ( !a2 && *a6 >= CcMaxLazyWritePages )
            break;
          *v12 -= v16;
          ++*a6;
          v43 = 2 * v16 == 0;
          v16 *= 2;
          v44 = v16;
          if ( v43 )
          {
            v16 = 1;
            if ( (unsigned __int64)(v12 + 1) > v67 )
              break;
          }
          v45 = v12 + 1;
          if ( v44 )
            v45 = v12;
          v12 = v45;
        }
        while ( (v16 & *v45) != 0 );
      }
      v46 = *a6;
      v47 = v70;
      v48 = *(_DWORD *)(v70 + 4);
      if ( *a6 < v48 )
        v49 = v48 - v46;
      else
        v49 = 0;
      *(_DWORD *)(v70 + 4) = v49;
      v50 = *(_DWORD *)(v47 + 8);
      if ( v50 < v46 )
        KeBugCheckEx(0x34u, 0x11C7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_DWORD *)(v47 + 8) = v50 - v46;
      *((_DWORD *)BitmapRangeToClean + 8) -= v46;
      v51 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      CcDeductDirtyPages(a1, *a6);
      v52 = *(_DWORD *)(v51 + 456);
      if ( v52 <= *a6 )
        v53 = 0;
      else
        v53 = v52 - *a6;
      *(_DWORD *)(v51 + 456) = v53;
      if ( !*(_DWORD *)(a1 + 112) )
        CcInsertIntoCleanSharedCacheMapList(a1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( *((_DWORD *)BitmapRangeToClean + 8) )
      {
        v56 = *v73;
        if ( *((_DWORD *)BitmapRangeToClean + 6) == (_DWORD)v66 )
          *((_DWORD *)BitmapRangeToClean + 6) = v64 + v56 - *((_DWORD *)BitmapRangeToClean + 4);
        if ( a3 )
          goto LABEL_99;
        v54 = v64 + v56;
      }
      else
      {
        *((_DWORD *)BitmapRangeToClean + 6) = -1;
        *((_DWORD *)BitmapRangeToClean + 7) = 0;
        v54 = BitmapRangeToClean[2] + 0x2000;
      }
      *(_QWORD *)(v47 + 32) = v54;
LABEL_99:
      if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
        *(_DWORD *)(a1 + 192) = *(_DWORD *)(v47 + 4);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      *a6 <<= 12;
      *a5 = v64 << 12;
      *a7 = 0LL;
      goto LABEL_38;
    }
    v28 = *a6;
    if ( *a6 )
    {
      v29 = a1;
      if ( !a2 )
      {
        *v68 = *v24 + v28;
        v30 = v28 >> 12;
        v31 = *(_DWORD *)(a1 + 192);
        if ( v31 <= v30 )
          *(_DWORD *)(a1 + 192) = 0;
        else
          *(_DWORD *)(a1 + 192) = v31 - v30;
      }
    }
    else
    {
      v17 = v68;
      if ( *v68 && !a2 )
      {
        *v68 = 0LL;
        v14 = a1;
        continue;
      }
      v29 = a1;
    }
    break;
  }
  KeReleaseGuardedMutex(v26);
  if ( v18 )
  {
    v33 = *(_QWORD *)(v29 + 240);
    if ( (*(_DWORD *)(v29 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(v29 + 248))(v33, v18);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(v33 + 8))(*(_QWORD *)v33, v18);
  }
LABEL_38:
  if ( (_BYTE)a8 )
  {
    LOBYTE(v32) = 1;
    PsBoostThreadIo(KeGetCurrentThread(), v32);
  }
  return *a6 != 0;
}
