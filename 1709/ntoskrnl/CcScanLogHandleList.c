/*
 * XREFs of CcScanLogHandleList @ 0x1400200F8
 * Callers:
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 * Callees:
 *     CcCalculatePagesToWrite @ 0x140020418 (CcCalculatePagesToWrite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int *v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 **v22; // rdx
  void *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v26; // [rsp+A8h] [rbp+48h] BYREF
  int v27; // [rsp+B0h] [rbp+50h]

  v27 = a3;
  *a2 = 0;
  v26 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = (__int64 *)CcVolumeCacheMapList;
  while ( v7 != &CcVolumeCacheMapList )
  {
    v8 = v7 - 2;
    ++*((_DWORD *)v7 - 3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v9 = v7[3];
    if ( v9 )
      ((void (__fastcall *)(__int64, unsigned __int16 *))v8[7])(v9, &v26);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &v25);
    if ( v8[5] )
    {
      v10 = (int *)(v8 + 8);
      if ( (unsigned __int64)v8[8] >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v26 = 0;
      }
      else
      {
        v11 = *v10;
        *((_DWORD *)v8 + 28) = *v10;
        if ( v26 )
        {
          v12 = 100 * v11;
          *((_DWORD *)v8 + 28) = v12;
          v13 = v12 / v26;
          goto LABEL_9;
        }
      }
      v13 = *((_DWORD *)v8 + 37);
LABEL_9:
      v14 = v27;
      *((_DWORD *)v8 + 28) = v13;
      v8[13] = v13;
      v8[12] = v13;
      v8[11] = v13;
      *((_DWORD *)v8 + 28) = (3 * v13) >> 2;
      v15 = CcCalculatePagesToWrite(a1, v14, (int)v8 + 64, (int)v8 + 88, 1);
      v16 = *(_QWORD *)v10;
      v8[9] = *(_QWORD *)v10;
      if ( v15 > v16 >> 3 )
      {
        *a2 += v15;
        ++CcDbgAdditionalPagesQueuedCount;
        *((_DWORD *)v8 + 36) = v15;
      }
      else
      {
        *((_DWORD *)v8 + 36) = 0;
      }
      *((_DWORD *)v8 + 20) = *((_DWORD *)v8 + 36);
      if ( v8[4] )
      {
        v19 = v8[22];
        if ( v19 < *a4 )
          *a4 = v19;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v25);
    __writecr8(v25.OldIrql);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v17 = *((_DWORD *)v8 + 1);
    v7 = (__int64 *)*v7;
    if ( !v17 )
      KeBugCheckEx(0x34u, 0x590uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = v17 - 1;
    *((_DWORD *)v8 + 1) = v18;
    if ( !v18 )
    {
      v21 = v8[2];
      if ( *(__int64 **)(v21 + 8) != v8 + 2 || (v22 = (__int64 **)v8[3], *v22 != v8 + 2) )
        __fastfail(3u);
      *v22 = (__int64 *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (void *)v8[20];
      if ( v23 )
      {
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
        v8[20] = 0LL;
      }
      ExFreePoolWithTag(v8, 0x6D566343u);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
