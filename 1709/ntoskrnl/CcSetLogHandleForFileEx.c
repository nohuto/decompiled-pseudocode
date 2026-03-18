/*
 * XREFs of CcSetLogHandleForFileEx @ 0x14011D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  _QWORD *Partition; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+38h] [rbp-91h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-79h] BYREF
  _OWORD v30[10]; // [rsp+68h] [rbp-61h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x30BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = (_QWORD *)CcGetPartition(*(_QWORD **)(v5 + 8));
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x31AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v28.LockQueue.Next = 0LL;
  v28.LockQueue.Lock = Partition + 16;
  KxAcquireQueuedSpinLock((__int64)&v28, Partition + 16);
  if ( *(_QWORD *)(v9 + 240) )
  {
    v17 = *(_QWORD *)(v9 + 120);
    if ( *(_QWORD *)(v17 + 8) != v9 + 120 || (v18 = *(_QWORD **)(v9 + 128), *v18 != v9 + 120) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
  }
  if ( a2 )
  {
    v11 = (_QWORD *)(v9 + 120);
    if ( *(_DWORD *)(v9 + 112) )
    {
      v12 = Partition + 12;
      v13 = (_QWORD *)Partition[13];
      if ( (_QWORD *)*v13 != Partition + 12 )
        __fastfail(3u);
    }
    else
    {
      v12 = Partition + 4;
      v13 = (_QWORD *)Partition[5];
      if ( (_QWORD *)*v13 != Partition + 4 )
        __fastfail(3u);
    }
    *v11 = v12;
    *(_QWORD *)(v9 + 128) = v13;
    *v13 = v11;
    v12[1] = v11;
    if ( !*(_QWORD *)(*(_QWORD *)(v9 + 504) + 40LL) )
    {
      memset(v30, 0, 0x98uLL);
      *((_QWORD *)&v30[8] + 1) = -1LL;
      *(_QWORD *)&v30[1] = a4;
      *((_QWORD *)&v30[0] + 1) = a3;
      *(_QWORD *)&v30[0] = a2;
      if ( Object )
      {
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        *((_QWORD *)&v30[7] + 1) = Object;
      }
      v19 = *(_QWORD *)(v9 + 504);
      v20 = v30[1];
      *(_OWORD *)(v19 + 40) = v30[0];
      v21 = v30[2];
      *(_OWORD *)(v19 + 56) = v20;
      v22 = v30[3];
      *(_OWORD *)(v19 + 72) = v21;
      v23 = v30[4];
      *(_OWORD *)(v19 + 88) = v22;
      v24 = v30[5];
      *(_OWORD *)(v19 + 104) = v23;
      v25 = v30[6];
      *(_OWORD *)(v19 + 120) = v24;
      v26 = v30[8];
      *(_OWORD *)(v19 + 136) = v25;
      v27 = *(_QWORD *)&v30[9];
      *(_OWORD *)(v19 + 152) = v30[7];
      *(_OWORD *)(v19 + 168) = v26;
      *(_QWORD *)(v19 + 184) = v27;
    }
    v14 = *(_QWORD *)(v9 + 504) + 40LL;
    *(_QWORD *)(v9 + 240) = v14;
    if ( (*(_DWORD *)(v9 + 152) & 0x1000000) == 0 )
    {
      v15 = *(unsigned int *)(v9 + 112);
      if ( (_DWORD)v15 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), v15);
    }
    *(_DWORD *)(v9 + 152) |= 0x1000000u;
  }
  else
  {
    *(_QWORD *)(v9 + 240) = 0LL;
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
