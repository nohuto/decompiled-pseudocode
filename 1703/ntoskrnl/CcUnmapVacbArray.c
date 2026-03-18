/*
 * XREFs of CcUnmapVacbArray @ 0x1400AB540
 * Callers:
 *     CcUnmapFileOffsetFromSystemCache @ 0x1400327D0 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     CcSetPrivateWriteFile @ 0x1401DE2BC (CcSetPrivateWriteFile.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetVacbLargeOffset @ 0x1400AB770 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400AB7EC (CcSetVacbInFreeList.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     CcSetVacbLargeOffset @ 0x14011C014 (CcSetVacbLargeOffset.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 */

char CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6, ...)
{
  char v6; // r13
  unsigned int v9; // r12d
  signed __int64 v10; // rdi
  signed __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // rsi
  __int64 v14; // rbp
  int v16; // ecx
  KIRQL v17; // al
  KIRQL v18; // si
  __int64 v19; // rax
  void *v20; // rsi
  signed __int32 v21[8]; // [rsp+0h] [rbp-68h] BYREF
  signed __int64 v22; // [rsp+30h] [rbp-38h]
  char v23; // [rsp+70h] [rbp+8h]

  v6 = 1;
  v9 = 0;
  v22 = 0LL;
  v23 = 1;
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v19 = *a2;
    v11 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v22 = v11;
    if ( a3 )
      v10 = v19 + a3;
    else
      v10 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = 0LL;
  }
  v12 = (*(_DWORD *)(a1 + 152) >> 9) & 1;
  CcAcquireBcbLockAndVacbLock(v12, (struct _FAST_MUTEX *)a1);
  if ( a4 )
  {
    v9 = 1;
    *(_QWORD *)(a1 + 336) = v10;
  }
  if ( v11 < v10 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( v11 >= v13 )
        goto LABEL_11;
      v14 = v13 > 0x2000000
          ? CcGetVacbLargeOffset(a1, v11)
          : *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v22 >> 18));
      if ( !v14 )
        goto LABEL_11;
      if ( !*(_WORD *)(v14 + 16) )
        break;
      if ( a6 )
      {
        v11 += 0x40000LL;
        v22 = v11;
        if ( a5 )
          KeBugCheckEx(0x34u, 0xC03uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
      else
      {
        if ( !a5 )
        {
          v6 = 0;
          goto LABEL_13;
        }
        v20 = *(void **)(a1 + 184);
        if ( v20 )
        {
          if ( v23 )
          {
            KeResetEvent(*(PRKEVENT *)(a1 + 184));
            _InterlockedOr(v21, 0);
            v23 = 0;
          }
          else
          {
            CcReleaseBcbLockAndVacbLock(v12, (struct _FAST_MUTEX *)a1);
            KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
            v23 = 1;
            CcAcquireBcbLockAndVacbLock(v12, (struct _FAST_MUTEX *)a1);
          }
        }
        else
        {
          v23 = 0;
          *(_WORD *)(a1 + 344) = 0;
          *(_BYTE *)(a1 + 346) = 6;
          *(_DWORD *)(a1 + 348) = 0;
          *(_QWORD *)(a1 + 360) = a1 + 352;
          *(_QWORD *)(a1 + 352) = a1 + 352;
          _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
        }
      }
LABEL_12:
      if ( v11 >= v10 )
        goto LABEL_13;
    }
    v23 = 1;
    if ( v13 > 0x2000000 )
      CcSetVacbLargeOffset(a1, v11, 0LL, 0LL);
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v22 >> 18)) = 0LL;
    v16 = v9 | 2;
    v9 &= ~2u;
    if ( CcNumberOfFreeHighPriorityVacbs < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v9 = v16;
    CcUnmapVacb(v14, a1, v9);
    v17 = KeAcquireQueuedSpinLock(4uLL);
    *(_QWORD *)(v14 + 8) = 0LL;
    v18 = v17;
    CcSetVacbInFreeList(v14, (v9 & 2) != 0);
    KeReleaseQueuedSpinLock(4uLL, v18);
LABEL_11:
    v11 += 0x40000LL;
    v22 = v11;
    goto LABEL_12;
  }
LABEL_13:
  CcReleaseBcbLockAndVacbLock(v12, (struct _FAST_MUTEX *)a1);
  return v6;
}
