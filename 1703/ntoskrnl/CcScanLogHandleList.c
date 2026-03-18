/*
 * XREFs of CcScanLogHandleList @ 0x14011A018
 * Callers:
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     CcCalculatePagesToWrite @ 0x14011B094 (CcCalculatePagesToWrite.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, unsigned int a3, __int64 *a4)
{
  KSPIN_LOCK *v4; // rbp
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rcx
  int *v11; // rsi
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 **v22; // rcx
  void *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v25; // [rsp+80h] [rbp+8h] BYREF

  v4 = (KSPIN_LOCK *)(a1 + 64);
  *a2 = 0;
  v25 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  v8 = (__int64 *)CcVolumeCacheMapList;
  while ( v8 != &CcVolumeCacheMapList )
  {
    v9 = v8 - 2;
    ++*((_DWORD *)v8 - 3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v10 = v8[3];
    if ( v10 )
      ((void (__fastcall *)(__int64, unsigned __int16 *))v9[7])(v10, &v25);
    KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
    if ( v9[5] )
    {
      v11 = (int *)(v9 + 8);
      if ( (unsigned __int64)v9[8] >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v25 = 0;
      }
      else
      {
        v12 = *v11;
        *((_DWORD *)v9 + 28) = *v11;
        if ( v25 )
        {
          v13 = 100 * v12;
          *((_DWORD *)v9 + 28) = v13;
          v14 = v13 / v25;
          goto LABEL_9;
        }
      }
      v14 = *((_DWORD *)v9 + 37);
LABEL_9:
      *((_DWORD *)v9 + 28) = v14;
      v9[13] = v14;
      v9[12] = v14;
      v9[11] = v14;
      *((_DWORD *)v9 + 28) = (3 * v14) >> 2;
      v15 = CcCalculatePagesToWrite(a3, v9 + 8, v9 + 11, 1LL);
      v16 = *(_QWORD *)v11;
      v9[9] = *(_QWORD *)v11;
      if ( v15 > v16 >> 3 )
      {
        *a2 += v15;
        ++CcDbgAdditionalPagesQueuedCount;
        *((_DWORD *)v9 + 36) = v15;
      }
      else
      {
        *((_DWORD *)v9 + 36) = 0;
      }
      *((_DWORD *)v9 + 20) = *((_DWORD *)v9 + 36);
      if ( v9[4] )
      {
        v19 = v9[22];
        if ( v19 < *a4 )
          *a4 = v19;
      }
    }
    v17 = *((_DWORD *)v9 + 1);
    v8 = (__int64 *)*v8;
    if ( !v17 )
      KeBugCheckEx(0x34u, 0x56CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = v17 - 1;
    *((_DWORD *)v9 + 1) = v18;
    if ( !v18 )
    {
      v21 = v9[2];
      v22 = (__int64 **)v9[3];
      if ( *(__int64 **)(v21 + 8) != v9 + 2 || *v22 != v9 + 2 )
        __fastfail(3u);
      *v22 = (__int64 *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (void *)v9[20];
      if ( v23 )
      {
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
        v9[20] = 0LL;
      }
      ExFreePoolWithTag(v9, 0x6D566343u);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
