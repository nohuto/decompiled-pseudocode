/*
 * XREFs of CcScanLogHandleList @ 0x140045940
 * Callers:
 *     CcLazyWriteScan @ 0x140042058 (CcLazyWriteScan.c)
 * Callees:
 *     CcCalculatePagesToWrite @ 0x140045B2C (CcCalculatePagesToWrite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v7; // rsi
  KSPIN_LOCK *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 **v21; // rax
  void *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v25; // [rsp+A8h] [rbp+48h] BYREF
  int v26; // [rsp+B0h] [rbp+50h]

  v26 = a3;
  *a2 = 0;
  v25 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    v8 = (KSPIN_LOCK *)(a1 + 128);
    do
    {
      v9 = v7 - 2;
      v10 = v7;
      ++*((_DWORD *)v7 - 3);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v11 = v7[3];
      if ( v11 )
        ((void (__fastcall *)(__int64, unsigned __int16 *))v9[7])(v11, &v25);
      KeAcquireInStackQueuedSpinLock(v8, &v24);
      if ( !v9[5] )
        goto LABEL_12;
      v12 = v9[8];
      if ( v12 >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v25 = 0;
        v12 = v9[8];
      }
      else
      {
        *((_DWORD *)v9 + 28) = v12;
        if ( v25 )
        {
          *((_DWORD *)v9 + 28) = 100 * v12;
          v13 = 100 * (int)v12 / (unsigned int)v25;
          goto LABEL_9;
        }
      }
      v13 = *((_DWORD *)v9 + 37);
LABEL_9:
      v14 = v26;
      v9[13] = v13;
      v9[12] = v13;
      v9[11] = v13;
      *((_DWORD *)v9 + 28) = (3 * v13) >> 2;
      v15 = CcCalculatePagesToWrite(a1, v14, (int)v9 + 64, (int)v9 + 88, 1);
      v9[9] = v12;
      if ( v15 > v12 >> 3 )
      {
        *a2 += v15;
        ++CcDbgAdditionalPagesQueuedCount;
      }
      else
      {
        v15 = 0;
      }
      *((_DWORD *)v9 + 36) = v15;
      v8 = (KSPIN_LOCK *)(a1 + 128);
      *((_DWORD *)v9 + 20) = v15;
      if ( v9[4] )
      {
        v19 = v9[22];
        if ( v19 < *a4 )
          *a4 = v19;
      }
LABEL_12:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
      __writecr8(v24.OldIrql);
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v16 = *((_DWORD *)v9 + 1);
      v7 = (__int64 *)*v7;
      if ( !v16 )
        KeBugCheckEx(0x34u, 0x595uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v17 = v16 - 1;
      *((_DWORD *)v9 + 1) = v17;
      if ( !v17 )
      {
        v20 = *v10;
        if ( *(__int64 **)(*v10 + 8) != v10 || (v21 = (__int64 **)v10[1], *v21 != v10) )
          __fastfail(3u);
        *v21 = (__int64 *)v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = (void *)v9[20];
        if ( v22 )
        {
          ObfDereferenceObjectWithTag(v22, 0x746C6644u);
          v9[20] = 0LL;
        }
        ExFreePoolWithTag(v9, 0x6D566343u);
      }
    }
    while ( v7 != &CcVolumeCacheMapList );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
