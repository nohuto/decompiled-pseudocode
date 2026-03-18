/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x14011B330
 * Callers:
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1400B00A8 (CcNotifyOfMappedWrite.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400ADDA8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcFindBitmapRangeToClean @ 0x14011BDC0 (CcFindBitmapRangeToClean.c)
 *     CcDeductDirtyPages @ 0x14011BDF4 (CcDeductDirtyPages.c)
 *     CcFindBcb @ 0x14011BE58 (CcFindBcb.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
  __int64 v11; // r13
  _DWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r9
  unsigned int v18; // r11d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  int v23; // edi
  unsigned int v24; // r8d
  unsigned __int64 v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 *v36; // rdx
  char Bcb; // al
  __int64 v38; // rcx
  __int64 v39; // r14
  struct _FAST_MUTEX *v40; // r14
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  __int64 BitmapRangeToClean; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // r9
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // [rsp+50h] [rbp-E8h]
  int v57; // [rsp+58h] [rbp-E0h]
  __int64 v58; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-D0h]
  PKGUARDED_MUTEX Mutex; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+80h] [rbp-B8h]
  __int64 v63; // [rsp+88h] [rbp-B0h]
  __int64 v64; // [rsp+B0h] [rbp-88h]
  __int64 v65; // [rsp+B8h] [rbp-80h]
  __int64 v66; // [rsp+C8h] [rbp-70h]
  __int64 v67[3]; // [rsp+D0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-50h] BYREF

  v64 = 0LL;
  v57 = 0;
  v11 = 0LL;
  v61 = 0LL;
  v12 = 0LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v59 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
  v65 = *(_QWORD *)(a1 + 528);
  v66 = v65;
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (PKGUARDED_MUTEX)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v14 = a1;
  v15 = *(_QWORD *)(a1 + 160);
  v59 = v15;
  if ( !v15 || !*(_DWORD *)(v15 + 8) || !*(_DWORD *)(v15 + 4) && !a3 )
  {
    v56 = a1;
    v62 = a8;
LABEL_48:
    v23 = a8;
    goto LABEL_49;
  }
  if ( a2 )
  {
    v16 = *a2 >> 12;
    v56 = v16;
    v13 = (a3 + *a2 - 1) >> 12;
    BitmapRangeToClean = CcFindBitmapRangeToClean(v15, v16);
    v11 = BitmapRangeToClean;
    v20 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v13 < v20 + *(unsigned int *)(BitmapRangeToClean + 24)
      || (v49 = *(unsigned int *)(BitmapRangeToClean + 28), v16 > (__int64)(v49 + v20)) )
    {
      v62 = a8;
      goto LABEL_48;
    }
    v21 = *(_QWORD *)(v11 + 40);
    if ( v13 < (__int64)(v49 + v20) )
    {
      v61 = v21 + 4 * ((unsigned __int64)(unsigned int)(v13 - v20) >> 5);
      goto LABEL_15;
    }
    v22 = v21 + 4 * (v49 >> 5);
  }
  else
  {
    v16 = 0LL;
    v56 = 0LL;
    if ( !a3 )
    {
      v16 = *(_QWORD *)(v15 + 32);
      v56 = v16;
    }
    v11 = CcFindBitmapRangeToClean(v15, v16);
    v19 = *(unsigned int *)(v11 + 28);
    v20 = *(_QWORD *)(v11 + 16);
    if ( v16 > (__int64)(v19 + v20) )
    {
      v16 = v20 + *(unsigned int *)(v11 + 24);
      v56 = v16;
    }
    v21 = *(_QWORD *)(v11 + 40);
    v22 = v21 + 4 * (v19 >> 5);
  }
  v61 = v22;
LABEL_15:
  if ( v16 < v20 + *(unsigned int *)(v11 + 24) )
  {
    v16 = v20 + *(unsigned int *)(v11 + 24);
    v56 = v16;
  }
  v62 = (unsigned int)(v16 - *(_DWORD *)(v11 + 16));
  v12 = (_DWORD *)(v21 + 4 * (v62 >> 5));
  v23 = -1 << (v16 % 32);
  if ( (v23 & *v12) == 0 )
  {
    v23 = -1;
    v16 &= 0xFFFFFFFFFFFFFFE0uLL;
    v50 = v61;
    do
    {
      ++v12;
      v16 += 32LL;
      v56 = v16;
      if ( (unsigned __int64)v12 > v50 )
      {
        if ( !v18 )
          *(_DWORD *)(v11 + 28) = v62 - 1;
        do
        {
          v11 = *(_QWORD *)v11;
          if ( v11 == v17 + 16 )
          {
            if ( v18 )
              goto LABEL_49;
            v11 = *(_QWORD *)v11;
          }
        }
        while ( !*(_DWORD *)(v11 + 32) );
        v51 = *(unsigned int *)(v11 + 24);
        v52 = *(_QWORD *)(v11 + 16);
        if ( v13 < (__int64)(v52 + v51) )
          goto LABEL_49;
        v53 = *(unsigned int *)(v11 + 28);
        if ( v16 > (__int64)(v53 + v52) )
          goto LABEL_49;
        v54 = *(_QWORD *)(v11 + 40);
        v12 = (_DWORD *)(v54 + 4 * (v51 >> 5));
        v50 = v54 + 4 * (v53 >> 5);
        v61 = v50;
        v16 = v52 + ((unsigned int)v51 & 0xFFFFFFE0);
        v56 = v16;
        LODWORD(v62) = v51;
        v17 = v59;
      }
    }
    while ( !*v12 );
  }
  v23 = -v23;
  if ( (*v12 & v23) == 0 )
  {
    do
    {
      v23 *= 2;
      ++v16;
    }
    while ( (*v12 & v23) == 0 );
    v56 = v16;
  }
  if ( !a2 )
  {
LABEL_20:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v55 = *a2;
      else
        v55 = 0LL;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v55,
        v18,
        (const void *)v14,
        v16,
        (const void *)v11,
        *(_DWORD *)(v11 + 32));
      v17 = v59;
      v18 = a3;
    }
    if ( (v23 & *v12) != 0 )
    {
      v24 = CcMaxLazyWritePages;
      v25 = v61;
      do
      {
        if ( a2 && v16 + *a6 >= (unsigned int)((*a2 + 4095 + v18) >> 12) )
          break;
        if ( (unsigned __int64)v12 > *(_QWORD *)(v11 + 40) + 4 * ((unsigned __int64)*(unsigned int *)(v11 + 28) >> 5) )
          KeBugCheckEx(0x34u, 0x1198uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        if ( !a2 && *a6 >= v24 )
          break;
        *v12 -= v23;
        ++*a6;
        v23 *= 2;
        if ( !v23 )
        {
          ++v12;
          v23 = 1;
          if ( (unsigned __int64)v12 > v25 )
            break;
        }
      }
      while ( (v23 & *v12) != 0 );
    }
    v26 = *a6;
    v27 = *(_DWORD *)(v17 + 4);
    if ( *a6 < v27 )
      *(_DWORD *)(v17 + 4) = v27 - v26;
    else
      *(_DWORD *)(v17 + 4) = 0;
    v28 = *(_DWORD *)(v17 + 8);
    if ( v28 < v26 )
      KeBugCheckEx(0x34u, 0x11C7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v17 + 8) = v28 - v26;
    *(_DWORD *)(v11 + 32) -= v26;
    v29 = v65;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v65 + 64), &LockHandle);
    CcDeductDirtyPages(a1, *a6);
    v30 = *(_DWORD *)(v29 + 528);
    if ( v30 <= *a6 )
      *(_DWORD *)(v29 + 528) = 0;
    else
      *(_DWORD *)(v29 + 528) = v30 - *a6;
    if ( !*(_DWORD *)(a1 + 112) )
      CcInsertIntoCleanSharedCacheMapList(a1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( *(_DWORD *)(v11 + 32) )
    {
      if ( *(_DWORD *)(v11 + 24) == (_DWORD)v62 )
        *(_DWORD *)(v11 + 24) = v16 + *a6 - *(_DWORD *)(v11 + 16);
      v32 = v59;
      if ( a3 )
        goto LABEL_39;
      v31 = v16 + *a6;
    }
    else
    {
      *(_DWORD *)(v11 + 24) = -1;
      *(_DWORD *)(v11 + 28) = 0;
      v31 = *(_QWORD *)(v11 + 16) + 0x2000LL;
      v32 = v59;
    }
    *(_QWORD *)(v32 + 32) = v31;
LABEL_39:
    if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
      *(_DWORD *)(a1 + 192) = *(_DWORD *)(v32 + 4);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    *a6 <<= 12;
    *a5 = v16 << 12;
    *a7 = 0LL;
    goto LABEL_42;
  }
  if ( v16 < (v18 + *a2 + 4095) >> 12 )
  {
    if ( *(_QWORD *)(v14 + 16) == v14 + 16 )
      goto LABEL_20;
    v57 = 1;
  }
LABEL_49:
  v63 = v14 + 16;
  v34 = v64;
  while ( 2 )
  {
    v35 = *(_QWORD *)(v14 + 24) - 16LL;
    v58 = v35;
    if ( (*(_DWORD *)(v14 + 152) & 0x200) != 0 )
    {
      v36 = a2 ? a2 : (__int64 *)(v14 + 200);
      if ( *v36 )
      {
        v67[0] = *v36 + 4096;
        Bcb = CcFindBcb(v14, v36, v67, &v58);
        v14 = a1;
        if ( Bcb )
        {
          v35 = v58;
        }
        else
        {
          v35 = *(_QWORD *)(v58 + 24) - 16LL;
          v58 = v35;
        }
      }
    }
    v38 = v63;
    if ( v35 + 16 == v63 )
    {
      v41 = a5;
LABEL_73:
      v40 = (struct _FAST_MUTEX *)(v14 + 280);
      goto LABEL_74;
    }
    while ( 1 )
    {
      if ( *(_WORD *)v35 != 765 )
        goto LABEL_58;
      if ( (*(_DWORD *)(v14 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v35 + 48) > *a4 )
      {
        v35 = *(_QWORD *)(v35 + 24) - 16LL;
        ++CcDbgLsnLargerThanHint;
        goto LABEL_60;
      }
      if ( a2 )
      {
        v18 = a3;
        if ( *a2 + a3 <= *(_QWORD *)(v35 + 8) )
        {
LABEL_61:
          v40 = (struct _FAST_MUTEX *)(v14 + 280);
          goto LABEL_62;
        }
      }
      else
      {
        v18 = a3;
      }
      v42 = *a6;
      if ( (_DWORD)v42 )
      {
        v41 = a5;
        if ( !*(_BYTE *)(v35 + 2) )
          goto LABEL_73;
        v43 = *(_QWORD *)(v35 + 8);
        if ( v43 != *a5 + v42 || *(_DWORD *)(v35 + 64) || (v43 & 0x1FFFFFF) == 0 )
          goto LABEL_73;
        goto LABEL_90;
      }
      if ( !*(_BYTE *)(v35 + 2) )
        goto LABEL_58;
      if ( a2 )
        break;
      if ( *(_QWORD *)(v35 + 8) >= *(_QWORD *)(v14 + 200) )
        goto LABEL_89;
LABEL_58:
      v39 = *(_QWORD *)(v35 + 24);
LABEL_59:
      v35 = v39 - 16;
LABEL_60:
      v58 = v35;
      if ( v35 + 16 == v38 )
        goto LABEL_61;
    }
    if ( *a2 >= *(_QWORD *)(v35 + 32) )
      goto LABEL_58;
LABEL_89:
    if ( v57 && v56 <= (unsigned int)(*(__int64 *)(v35 + 8) >> 12) )
      goto LABEL_156;
LABEL_90:
    ++*(_DWORD *)(v35 + 64);
    KeReleaseGuardedMutex(Mutex);
    if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
    {
      CcUnpinFileDataEx(v35, 1, 2);
      ExAcquireFastMutex(Mutex);
      v14 = a1;
LABEL_96:
      v57 = 0;
      v47 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v35 + 8);
      *a7 = v35;
      *a6 = *(_DWORD *)(v35 + 4) + v47;
      if ( (*(_DWORD *)(v14 + 152) & 0x3000000) != 0 && *(_QWORD *)(v35 + 48) > v34 )
        v34 = *(_QWORD *)(v35 + 48);
      v38 = v63;
      goto LABEL_58;
    }
    if ( ExAcquireResourceExclusiveLite((PERESOURCE)(v35 + 72), *a6 == 0) )
    {
      ExAcquireFastMutex(Mutex);
      if ( !*(_BYTE *)(v35 + 2) )
        goto LABEL_149;
      v14 = a1;
      if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v35 + 48) > *a4 )
      {
        ++CcDbgLsnLargerThanHint;
LABEL_149:
        KeReleaseGuardedMutex(Mutex);
        CcUnpinFileDataEx(v35, 0, 0);
        v40 = Mutex;
        ExAcquireFastMutex(Mutex);
        v14 = a1;
        if ( *a6 )
          goto LABEL_62;
        v39 = *(_QWORD *)(a1 + 24);
        v38 = v63;
        goto LABEL_59;
      }
      goto LABEL_96;
    }
    CcUnpinFileDataEx(v35, 1, 0);
    v40 = Mutex;
    ExAcquireFastMutex(Mutex);
    v14 = a1;
LABEL_62:
    v41 = a5;
LABEL_74:
    if ( v57 )
    {
      v18 = a3;
LABEL_156:
      v17 = v59;
      v16 = v56;
      goto LABEL_20;
    }
    if ( *a6 )
    {
      if ( !a2 )
      {
        v44 = *a6;
        *(_QWORD *)(v14 + 200) = *v41 + *a6;
        v45 = v44 >> 12;
        v46 = *(_DWORD *)(v14 + 192);
        if ( v46 <= v45 )
          *(_DWORD *)(v14 + 192) = 0;
        else
          *(_DWORD *)(v14 + 192) = v46 - v45;
      }
    }
    else if ( *(_QWORD *)(v14 + 200) && !a2 )
    {
      *(_QWORD *)(v14 + 200) = 0LL;
      continue;
    }
    break;
  }
  KeReleaseGuardedMutex(v40);
  if ( v34 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 248))(*(_QWORD *)(a1 + 240), v34);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), v34);
  }
LABEL_42:
  if ( (_BYTE)a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
  return *a6 != 0;
}
